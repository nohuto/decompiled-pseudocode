/*
 * XREFs of PiDevCfgCopyDeviceKeys @ 0x140679ADC
 * Callers:
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1406E8E20 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14094B580 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14094DD00 (PiDevCfgResetDeviceKeyCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B501D0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B503E0 (PipCommitPendingService.c)
 * Callees:
 *     PiDevCfgPushCopyKeyEntry @ 0x14020881C (PiDevCfgPushCopyKeyEntry.c)
 *     PiDevCfgPopCopyKeyEntry @ 0x1402088F8 (PiDevCfgPopCopyKeyEntry.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetSecurityObject @ 0x14041EDA0 (ZwSetSecurityObject.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140678874 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgCopyDeviceKey @ 0x140679BEC (PiDevCfgCopyDeviceKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceKeys(void *a1, void *a2, __int64 a3, __int64 a4)
{
  int v7; // edi
  int v8; // ebx
  int v10; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  HANDLE v12; // [rsp+50h] [rbp-20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-18h] BYREF
  HANDLE v14[2]; // [rsp+60h] [rbp-10h] BYREF

  SecurityDescriptor = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  v14[1] = v14;
  v10 = 1;
  v14[0] = v14;
  if ( (int)PiDevCfgGetKeySecurityDescriptor(a1, &SecurityDescriptor) >= 0 )
  {
    ZwSetSecurityObject(a2, 4u, SecurityDescriptor);
    ExFreePoolWithTag(SecurityDescriptor, 0);
  }
  v7 = PiDevCfgPushCopyKeyEntry(v14, a1, a2, 1LL);
  while ( v7 >= 0 )
  {
    if ( !PiDevCfgPopCopyKeyEntry(v14, &Handle, &v12, &v10) )
      break;
    v8 = v10;
    v7 = PiDevCfgCopyDeviceKey(Handle, v10, (__int64)v14, a4);
    if ( (v8 & 0x40000000) != 0 )
    {
      ZwClose(Handle);
      ZwClose(v12);
    }
  }
  while ( PiDevCfgPopCopyKeyEntry(v14, &Handle, &v12, &v10) )
  {
    if ( (v10 & 0x40000000) != 0 )
    {
      ZwClose(Handle);
      ZwClose(v12);
    }
  }
  return (unsigned int)v7;
}
