/*
 * XREFs of PiPnpRtlSetDeviceRegProperty @ 0x1407367B0
 * Callers:
 *     PiDevCfgSetDeviceRegProp @ 0x140736764 (PiDevCfgSetDeviceRegProp.c)
 *     PiCMSetRegistryProperty @ 0x1408ACB20 (PiCMSetRegistryProperty.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406707F0 (SeAuditingWithTokenForSubcategory.c)
 *     _CmGetDeviceRegProp @ 0x1406AFC70 (_CmGetDeviceRegProp.c)
 *     _CmIsRootEnumeratedDevice @ 0x1407109B0 (_CmIsRootEnumeratedDevice.c)
 *     _CmSetDeviceRegProp @ 0x1407296A0 (_CmSetDeviceRegProp.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x1408B11E4 (PiAuditDeviceEnableDisableRequest.c)
 */

__int64 __fastcall PiPnpRtlSetDeviceRegProperty(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        signed int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // r12d
  unsigned int *v9; // rbx
  unsigned int v13; // r15d
  char v14; // r14
  unsigned int v15; // ebx
  bool v17; // zf
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // [rsp+40h] [rbp-20h] BYREF
  int v24; // [rsp+44h] [rbp-1Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  int v27; // [rsp+B8h] [rbp+58h] BYREF

  v8 = a7;
  v9 = a6;
  v27 = 0;
  v24 = 0;
  v23 = 0;
  v13 = 0;
  v14 = 0;
  DestinationString = 0LL;
  if ( a4 < 2 )
    goto LABEL_7;
  if ( a4 <= 3 )
  {
    v17 = CmIsRootEnumeratedDevice(a2) == 0;
  }
  else
  {
    if ( a4 == 11 )
    {
      if ( !a6 || a7 != 4 )
        return (unsigned int)-1073741811;
      if ( SeAuditingWithTokenForSubcategory(137, 0LL) )
      {
        v27 = 4;
        if ( (int)CmGetDeviceRegProp(a1, (__int64)a2, a3, 11, (__int64)&v24, (__int64)&v23, (__int64)&v27, 0) < 0
          || v27 != 4
          || v24 != 4 )
        {
          v23 = 0;
        }
        v13 = *v9;
      }
      goto LABEL_7;
    }
    if ( a4 == 9 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v14 = 1;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      goto LABEL_7;
    }
    if ( a4 <= 15 )
      goto LABEL_7;
    if ( a4 <= 17 || a4 == 29 )
      return (unsigned int)-1073741790;
    v17 = a4 == 37;
  }
  if ( v17 )
    return (unsigned int)-1073741790;
LABEL_7:
  v15 = CmSetDeviceRegProp(a1, (__int64)a2, a3, a4, a5, (__int64)v9, v8, a8);
  if ( a4 == 11 && SeAuditingWithTokenForSubcategory(137, 0LL) )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    LOBYTE(v19) = (v15 & 0x80000000) == 0;
    PiAuditDeviceEnableDisableRequest(&DestinationString, v23, v13, v19);
  }
  if ( v14 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21, v22);
  }
  return v15;
}
