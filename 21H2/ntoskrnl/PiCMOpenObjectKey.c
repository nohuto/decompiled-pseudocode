/*
 * XREFs of PiCMOpenObjectKey @ 0x1406BA8F4
 * Callers:
 *     PiCMHandleIoctl @ 0x14077BCA0 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     PiCMCaptureRegistryInputData @ 0x1406BAA98 (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1406BACAC (PiCMReleaseObjectInputData.c)
 *     PiCMReturnHandleResultData @ 0x1406BACDC (PiCMReturnHandleResultData.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406BAD74 (PiCMDuplicateRegistryHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     _PnpOpenObjectRegKey @ 0x14077C924 (_PnpOpenObjectRegKey.c)
 *     PiAuDoesClientHaveAccess @ 0x14078A600 (PiAuDoesClientHaveAccess.c)
 *     _PnpCreateObject @ 0x140A26BE8 (_PnpCreateObject.c)
 */

__int64 __fastcall PiCMOpenObjectKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *Handle)
{
  _DWORD *v6; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v10; // ebx
  int v11; // ebx
  int Object; // eax
  __int64 v13; // rdx
  __int64 v14; // r9
  int v17; // ecx
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
  v10 = PiCMCaptureRegistryInputData(a1, a2, a5, &v19);
  if ( v10 < 0 )
    goto LABEL_18;
  if ( !(_QWORD)v20 || DWORD1(v19) || DWORD1(v21) || !a3 || a4 < 0x10 )
    goto LABEL_43;
  v11 = 6;
  if ( SDWORD2(v19) > 6 )
  {
    switch ( DWORD2(v19) )
    {
      case 0x10001:
        v11 = 7;
        break;
      case 0x10002:
        v11 = 8;
        break;
      case 0x10003:
        v11 = 9;
        break;
      case 0x10004:
        v11 = 10;
        break;
      case 0x10005:
        v11 = 11;
        break;
      default:
        goto LABEL_43;
    }
    if ( PiDrvDbCtx )
      goto LABEL_12;
LABEL_43:
    Object = -1073741811;
    goto LABEL_15;
  }
  if ( DWORD2(v19) != 6 )
  {
    switch ( DWORD2(v19) )
    {
      case 1:
LABEL_31:
        Object = -1073741637;
        goto LABEL_15;
      case 2:
        v11 = 2;
        goto LABEL_12;
      case 3:
        v11 = 4;
        goto LABEL_12;
      case 4:
        v11 = 3;
        break;
      case 5:
        v11 = 5;
        break;
      default:
        goto LABEL_43;
    }
  }
  if ( (_DWORD)v21 == 1 )
    goto LABEL_31;
LABEL_12:
  Object = PnpOpenObjectRegKey(PiPnpRtlCtx, v20, v11, HIDWORD(v20), 0, (__int64)&Handle);
  if ( Object != -1073741772 )
    goto LABEL_13;
  if ( (_DWORD)v21 == 1 )
  {
    if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
    {
      Object = PnpCreateObject(v17, v20, v11, HIDWORD(v20), (__int64)&Handle);
LABEL_13:
      if ( Object >= 0 )
      {
        LOBYTE(v14) = PreviousMode;
        Object = PiCMDuplicateRegistryHandle(Handle, v13, HIDWORD(v20), v14, &v18);
      }
      goto LABEL_15;
    }
    Object = -1073741790;
  }
LABEL_15:
  v10 = PiCMReturnHandleResultData((unsigned int)Object, v18, DWORD2(v21), a3, a4, v6);
  if ( Handle )
    ZwClose(Handle);
  if ( v10 < 0 && v18 )
    ObCloseHandle(v18, PreviousMode);
LABEL_18:
  PiCMReleaseObjectInputData(&v19);
  return (unsigned int)v10;
}
