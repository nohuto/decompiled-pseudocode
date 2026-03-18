/*
 * XREFs of _PnpOpenObjectRegKey @ 0x1406A97E4
 * Callers:
 *     PiDqOpenObjectRegKey @ 0x14068052C (PiDqOpenObjectRegKey.c)
 *     PiCMOpenObjectKey @ 0x1406A5898 (PiCMOpenObjectKey.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1406A91EC (PiPnpRtlCacheObjectBaseKey.c)
 *     _PnpGetObjectPropertyWorker @ 0x1406A9C88 (_PnpGetObjectPropertyWorker.c)
 *     PiCMValidateDeviceInstance @ 0x1406B1A38 (PiCMValidateDeviceInstance.c)
 *     PpDevCfgProcessDeviceClass @ 0x14071C028 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14071C398 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14071C5EC (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgGetDriverPackageId @ 0x140721910 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryDriverNode @ 0x140721F14 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x140722564 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDevice @ 0x1407284B0 (PiDevCfgConfigureDevice.c)
 *     _PnpSetObjectPropertyWorker @ 0x14072B42C (_PnpSetObjectPropertyWorker.c)
 *     PiSwPropertySet @ 0x14072D9E8 (PiSwPropertySet.c)
 *     PiDevCfgCopyObjectProperties @ 0x1407515B8 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A0AFC (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x1408A2520 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A3228 (PiDevCfgQueryIncludedDriverNode.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1409715B8 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x140972210 (_PnpGetObjectPropertyKeysWorker.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x1409724EC (_PnpGetObjectPropertyLocalesWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x1406A98D8 (_PnpOpenObjectRegKeyDispatch.c)
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
