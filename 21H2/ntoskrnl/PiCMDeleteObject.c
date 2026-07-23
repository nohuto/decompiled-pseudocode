/*
 * XREFs of PiCMDeleteObject @ 0x1408B0304
 * Callers:
 *     PiCMHandleIoctl @ 0x140629660 (PiCMHandleIoctl.c)
 * Callees:
 *     PiCMReturnBasicResultData @ 0x1405FF4A0 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x1405FF814 (PiAuDoesClientHaveAccess.c)
 *     PiPnpRtlEndOperation @ 0x140628F64 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140629498 (PiPnpRtlBeginOperation.c)
 *     PiCMReleaseObjectInputData @ 0x14062D950 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14062D984 (PiCMCaptureObjectInputData.c)
 *     _PnpDeleteObject @ 0x140976778 (_PnpDeleteObject.c)
 */

__int64 __fastcall PiCMDeleteObject(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r13
  PVOID **v9; // rsi
  int v10; // ebx
  int v11; // edx
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+50h] [rbp-10h]

  v6 = a6;
  v17 = 0LL;
  *a6 = 0;
  v9 = 0LL;
  v15 = 0LL;
  a6 = 0LL;
  v16 = 0LL;
  v10 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v15);
  if ( v10 >= 0 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      v10 = -1073741790;
LABEL_41:
      v10 = PiCMReturnBasicResultData(v10, v17, a3, a4, v6);
      goto LABEL_42;
    }
    if ( !(_QWORD)v16 )
      goto LABEL_40;
    if ( DWORD1(v15) )
      goto LABEL_40;
    if ( HIDWORD(v16) )
      goto LABEL_40;
    if ( !a3 )
      goto LABEL_40;
    v11 = 8;
    if ( a4 < 8 )
      goto LABEL_40;
    v12 = 0;
    if ( SDWORD2(v15) <= 6 )
    {
      switch ( DWORD2(v15) )
      {
        case 6:
          v12 = 6;
          goto LABEL_35;
        case 1:
          v12 = 1;
          goto LABEL_35;
        case 2:
          v12 = 2;
          goto LABEL_36;
        case 3:
          v12 = 4;
          goto LABEL_36;
        case 4:
          v12 = 3;
          goto LABEL_35;
        case 5:
          v12 = 5;
          goto LABEL_35;
      }
      goto LABEL_32;
    }
    if ( DWORD2(v15) == 65537 )
    {
      v11 = 7;
    }
    else if ( DWORD2(v15) != 65538 )
    {
      switch ( DWORD2(v15) )
      {
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
          goto LABEL_32;
      }
    }
    v12 = PiDrvDbCtx != 0 ? v11 : 0;
LABEL_32:
    if ( v12 )
    {
      if ( v12 <= 4 || v12 > 6 )
      {
LABEL_36:
        if ( v10 >= 0 )
        {
          v10 = PiPnpRtlBeginOperation(&a6);
          if ( v10 >= 0 )
            v10 = PnpDeleteObject(v13, v16, v12);
          v9 = (PVOID **)a6;
        }
        goto LABEL_41;
      }
LABEL_35:
      v10 = -1073741637;
      goto LABEL_36;
    }
LABEL_40:
    v10 = -1073741811;
    goto LABEL_41;
  }
LABEL_42:
  PiCMReleaseObjectInputData((__int64)&v15);
  if ( v9 )
    PiPnpRtlEndOperation(v9);
  return (unsigned int)v10;
}
