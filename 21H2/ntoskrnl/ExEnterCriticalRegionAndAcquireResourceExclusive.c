/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140356BF0
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireResourceExclusiveLite @ 0x140357700 (ExpAcquireResourceExclusiveLite.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14038E5B4 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 CurrentIrql; // rdx
  __int16 v3; // ax
  struct _KTHREAD *v5; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOWORD(CurrentThread) = Resource->Flag;
  CurrentIrql = (unsigned __int8)CurrentThread;
  if ( ((unsigned __int8)CurrentThread & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v3 = Resource->Flag & 1;
  if ( v3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v5 = KeGetCurrentThread();
    if ( (unsigned __int8)CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
    if ( (v5->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !(_BYTE)CurrentIrql && (v5->MiscFlags & 0x400) == 0 && !v5->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  LOBYTE(CurrentIrql) = 1;
  if ( v3 )
    ExpFastResourceLegacyAcquireExclusive((ULONG_PTR)Resource);
  else
    ExpAcquireResourceExclusiveLite(Resource, CurrentIrql, Resource);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
