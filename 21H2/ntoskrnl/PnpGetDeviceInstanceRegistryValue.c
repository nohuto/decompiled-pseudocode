/*
 * XREFs of PnpGetDeviceInstanceRegistryValue @ 0x140945E70
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     IopGetRegistryValue @ 0x14067B838 (IopGetRegistryValue.c)
 *     _CmOpenDeviceRegKey @ 0x14077F2EC (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall PnpGetDeviceInstanceRegistryValue(__int64 a1, char a2, const WCHAR *a3, int a4, _QWORD *a5)
{
  int v9; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r8d
  int RegistryValue; // ebx
  HANDLE Handle[3]; // [rsp+40h] [rbp-18h] BYREF

  Handle[0] = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v9 = 17;
  }
  else
  {
    if ( (a2 & 2) == 0 )
      return 3221225485LL;
    v9 = 18;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v11 = v9 | 0x200;
  if ( (a2 & 4) == 0 )
    v11 = v9;
  RegistryValue = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a1, v11, 0, 131097, 0, (__int64)Handle, 0LL);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle[0], a3, a4, a5);
    ZwClose(Handle[0]);
  }
  return (unsigned int)RegistryValue;
}
