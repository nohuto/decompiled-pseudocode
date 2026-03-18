/*
 * XREFs of PiPnpRtlSetDeviceRegProperty @ 0x1406E5574
 * Callers:
 *     PiDevCfgSetDeviceRegProp @ 0x1406E5528 (PiDevCfgSetDeviceRegProp.c)
 *     PiCMSetRegistryProperty @ 0x140956298 (PiCMSetRegistryProperty.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _CmSetDeviceRegProp @ 0x14076FE20 (_CmSetDeviceRegProp.c)
 *     _CmIsRootEnumeratedDevice @ 0x140778D60 (_CmIsRootEnumeratedDevice.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x14095B658 (PiAuditDeviceEnableDisableRequest.c)
 */

__int64 __fastcall PiPnpRtlSetDeviceRegProperty(
        int a1,
        const WCHAR *a2,
        int a3,
        int a4,
        int a5,
        unsigned int *a6,
        int a7,
        int a8)
{
  int v8; // r12d
  unsigned int *v9; // rbx
  unsigned int v13; // r15d
  char v14; // r14
  unsigned int v15; // ebx
  bool v17; // zf
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // r9
  unsigned int v20; // [rsp+40h] [rbp-20h] BYREF
  int v21; // [rsp+44h] [rbp-1Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  int v24; // [rsp+B8h] [rbp+58h] BYREF

  v8 = a7;
  v9 = a6;
  v24 = 0;
  v21 = 0;
  v20 = 0;
  v13 = 0;
  v14 = 0;
  DestinationString = 0LL;
  if ( a4 < 2 )
    goto LABEL_7;
  if ( a4 <= 3 )
  {
    v17 = (unsigned __int8)CmIsRootEnumeratedDevice(a2) == 0;
  }
  else
  {
    if ( a4 == 11 )
    {
      if ( !a6 || a7 != 4 )
        return (unsigned int)-1073741811;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL) )
      {
        v24 = 4;
        if ( (int)CmGetDeviceRegProp(a1, (_DWORD)a2, a3, 11, (__int64)&v21, (__int64)&v20, (__int64)&v24, 0) < 0
          || v24 != 4
          || v21 != 4 )
        {
          v20 = 0;
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
  v15 = CmSetDeviceRegProp(a1, (_DWORD)a2, a3, a4, a5, (__int64)v9, v8, a8);
  if ( a4 == 11 && (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL) )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    LOBYTE(v19) = (v15 & 0x80000000) == 0;
    PiAuditDeviceEnableDisableRequest(&DestinationString, v20, v13, v19);
  }
  if ( v14 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  return v15;
}
