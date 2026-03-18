/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1402AEE80
 * Callers:
 *     DifExEnterCriticalRegionAndAcquireResourceExclusiveWrapper @ 0x140608070 (DifExEnterCriticalRegionAndAcquireResourceExclusiveWrapper.c)
 * Callees:
 *     ExpAcquireResourceExclusiveLite @ 0x1402AE9D0 (ExpAcquireResourceExclusiveLite.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14039BA38 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax
  USHORT Flag; // ax
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *v5; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v5 = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( (v5->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (v5->MiscFlags & 0x400) == 0 && !v5->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    ExpFastResourceLegacyAcquireExclusive((ULONG_PTR)Resource);
  }
  else
  {
    ExpAcquireResourceExclusiveLite((__int64)Resource, 1);
  }
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
