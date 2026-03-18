/*
 * XREFs of _PnpOpenObjectRegKey @ 0x14063FA94
 * Callers:
 *     PiPnpRtlCacheObjectBaseKey @ 0x14063F49C (PiPnpRtlCacheObjectBaseKey.c)
 *     _PnpGetObjectPropertyWorker @ 0x14063FF38 (_PnpGetObjectPropertyWorker.c)
 *     PiCMOpenObjectKey @ 0x140641670 (PiCMOpenObjectKey.c)
 *     PiDqOpenObjectRegKey @ 0x1406D3940 (PiDqOpenObjectRegKey.c)
 *     PiCMValidateDeviceInstance @ 0x1406EC1AC (PiCMValidateDeviceInstance.c)
 *     PpDevCfgProcessDeviceClass @ 0x14072BE44 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14072C1B4 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14072C408 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgConfigureDevice @ 0x140731D80 (PiDevCfgConfigureDevice.c)
 *     _PnpSetObjectPropertyWorker @ 0x140734CFC (_PnpSetObjectPropertyWorker.c)
 *     PiDevCfgQueryDriverNode @ 0x14073BDF8 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073C448 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgGetDriverPackageId @ 0x14073C7B0 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgCopyObjectProperties @ 0x140764888 (PiDevCfgCopyObjectProperties.c)
 *     PiSwPropertySet @ 0x14076851C (PiSwPropertySet.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A794C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x1408A9370 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408AA078 (PiDevCfgQueryIncludedDriverNode.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140978728 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x140979380 (_PnpGetObjectPropertyKeysWorker.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x14097965C (_PnpGetObjectPropertyLocalesWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x14063FB88 (_PnpOpenObjectRegKeyDispatch.c)
 */

__int64 __fastcall PnpOpenObjectRegKey(__int64 a1, __int64 a2, unsigned int a3, int a4, char a5, __int64 a6)
{
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD, __int64, int, __int64 *); // rdi
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ebx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  __int64 v18[10]; // [rsp+48h] [rbp-29h] BYREF

  memset(v18, 0, sizeof(v18));
  v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, __int64 *))(a1 + 488);
  HIDWORD(v18[4]) = 0;
  BYTE4(v18[2]) = a5;
  v18[3] = a6;
  LODWORD(v18[2]) = a4;
  if ( v10 )
  {
    v11 = v10(a1, a2, a3, 2LL, 1, v18);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        return LODWORD(v18[0]);
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  v12 = PnpOpenObjectRegKeyDispatch(a1, a2, a3, v18[2], SBYTE4(v18[2]), v18[3], (__int64)&v18[4], HIDWORD(v18[4]));
  v13 = v12;
  if ( !v10 )
    return v13;
  LODWORD(v18[0]) = v12;
  v15 = v10(a1, a2, a3, 2LL, 2, v18);
  v16 = v15;
  if ( v15 == -1073741822 )
    return v13;
  if ( v15 == -1073741536 )
    return LODWORD(v18[0]);
  v17 = v13;
  if ( v16 )
    return (unsigned int)-1073741595;
  return v17;
}
