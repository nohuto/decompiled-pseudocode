/*
 * XREFs of PiCMOpenDeviceInterfaceKey @ 0x1408AC734
 * Callers:
 *     PiCMHandleIoctl @ 0x1406A67D0 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406A1E5C (PiCMDuplicateRegistryHandle.c)
 *     PiCMReturnHandleResultData @ 0x1406A5800 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406A5C0C (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseRegistryInputData @ 0x1406A5E20 (PiCMReleaseRegistryInputData.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1406AB970 (_CmOpenDeviceInterfaceRegKey.c)
 *     PiAuDoesClientHaveAccess @ 0x1406B2B20 (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiCMOpenDeviceInterfaceKey(
        _DWORD *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *Handle)
{
  _DWORD *v6; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v10; // edi
  __int64 v11; // r9
  const WCHAR *v12; // rdi
  ACCESS_MASK v13; // esi
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v16; // r9
  HANDLE v18; // [rsp+40h] [rbp-40h] BYREF
  __int128 v19; // [rsp+48h] [rbp-38h] BYREF
  __int128 v20; // [rsp+58h] [rbp-28h]
  __int128 v21; // [rsp+68h] [rbp-18h]

  v6 = Handle;
  v18 = 0LL;
  Handle = 0LL;
  *v6 = 0;
  v19 = 0LL;
  v20 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v21 = 0LL;
  v10 = PiCMCaptureRegistryInputData(a1, a2, a5, (__int64)&v19);
  if ( v10 < 0 )
    goto LABEL_21;
  v12 = (const WCHAR *)v20;
  if ( !(_QWORD)v20 || *(_QWORD *)((char *)&v19 + 4) != 0x400000000LL || DWORD1(v21) || !a3 || a4 < 0x10 )
  {
    v15 = -1073741811;
    goto LABEL_15;
  }
  v13 = HIDWORD(v20);
  v15 = CmOpenDeviceInterfaceRegKey(
          *(__int64 *)&PiPnpRtlCtx,
          (const WCHAR *)v20,
          0x32u,
          v11,
          SHIDWORD(v20),
          0,
          (__int64)&Handle,
          0LL);
  if ( v15 != -1073741772 )
    goto LABEL_12;
  if ( (_DWORD)v21 == 1 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      v15 = -1073741790;
      goto LABEL_15;
    }
    v15 = CmOpenDeviceInterfaceRegKey(*(__int64 *)&PiPnpRtlCtx, v12, 0x32u, v16, v13, 1, (__int64)&Handle, 0LL);
LABEL_12:
    if ( v15 >= 0 )
      v15 = PiCMDuplicateRegistryHandle(Handle, v14, v13, PreviousMode, &v18);
  }
LABEL_15:
  v10 = PiCMReturnHandleResultData(v15, (__int64)v18, SDWORD2(v21), a3, a4, v6);
  if ( Handle )
    ZwClose(Handle);
  if ( v10 < 0 || v15 < 0 )
  {
    if ( v18 )
      ObCloseHandle(v18, PreviousMode);
  }
LABEL_21:
  PiCMReleaseRegistryInputData((__int64)&v19);
  return (unsigned int)v10;
}
