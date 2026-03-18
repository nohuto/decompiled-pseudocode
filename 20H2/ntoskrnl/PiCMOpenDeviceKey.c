/*
 * XREFs of PiCMOpenDeviceKey @ 0x140645930
 * Callers:
 *     PiCMHandleIoctl @ 0x14063CA80 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     PiCMReleaseRegistryInputData @ 0x1406418A0 (PiCMReleaseRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x1406418D0 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x140641968 (PiCMCaptureRegistryInputData.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406455BC (PiCMDuplicateRegistryHandle.c)
 *     PiCMConvertDeviceKeyType @ 0x140645ABC (PiCMConvertDeviceKeyType.c)
 *     _CmOpenDeviceRegKey @ 0x14066D59C (_CmOpenDeviceRegKey.c)
 *     PiAuDoesClientHaveAccess @ 0x1406CB08C (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiCMOpenDeviceKey(_DWORD *a1, unsigned int a2, _DWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  _DWORD *v7; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  int v10; // edi
  int v11; // edi
  int v12; // ebx
  ACCESS_MASK v13; // esi
  __int64 v14; // rdx
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v18; // [rsp+48h] [rbp-38h] BYREF
  __int128 v19; // [rsp+50h] [rbp-30h] BYREF
  __int128 v20; // [rsp+60h] [rbp-20h]
  __int128 v21; // [rsp+70h] [rbp-10h]

  v18 = 0LL;
  Handle = 0LL;
  v7 = a6;
  LODWORD(a6) = 0;
  v19 = 0LL;
  *v7 = 0;
  v20 = 0LL;
  v21 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = PiCMCaptureRegistryInputData(a1, a2, a5, (__int64)&v19);
  if ( v10 < 0 )
    goto LABEL_14;
  v11 = v20;
  if ( (_QWORD)v20 && DWORD2(v19) == 1 && a3 && a4 >= 0x10 )
  {
    v12 = PiCMConvertDeviceKeyType(DWORD1(v19), &a6);
    if ( v12 >= 0 )
    {
      v13 = HIDWORD(v20);
      v12 = CmOpenDeviceRegKey(PiPnpRtlCtx, v11, (_DWORD)a6, DWORD1(v21), HIDWORD(v20), 0, (__int64)&Handle, 0LL);
      if ( v12 != -1073741772 )
        goto LABEL_8;
      if ( (_DWORD)v21 == 1 )
      {
        if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
        {
          v12 = CmOpenDeviceRegKey(PiPnpRtlCtx, v11, (_DWORD)a6, DWORD1(v21), v13, 1, (__int64)&Handle, 0LL);
LABEL_8:
          if ( v12 >= 0 )
            v12 = PiCMDuplicateRegistryHandle(Handle, v14, v13, PreviousMode, &v18);
          goto LABEL_10;
        }
        v12 = -1073741790;
      }
    }
  }
  else
  {
    v12 = -1073741811;
  }
LABEL_10:
  v10 = PiCMReturnHandleResultData(v12, (__int64)v18, SDWORD2(v21), a3, a4, v7);
  if ( Handle )
    ZwClose(Handle);
  if ( v10 < 0 || v12 < 0 )
  {
    if ( v18 )
      ObCloseHandle(v18, PreviousMode);
  }
LABEL_14:
  PiCMReleaseRegistryInputData((__int64)&v19);
  return (unsigned int)v10;
}
