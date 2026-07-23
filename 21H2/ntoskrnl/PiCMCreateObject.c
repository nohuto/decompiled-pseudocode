/*
 * XREFs of PiCMCreateObject @ 0x1408AFD04
 * Callers:
 *     PiCMHandleIoctl @ 0x140629660 (PiCMHandleIoctl.c)
 * Callees:
 *     PiCMReturnBasicResultData @ 0x1405FF4A0 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x1405FF814 (PiAuDoesClientHaveAccess.c)
 *     PiCMReleaseObjectInputData @ 0x14062D950 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14062D984 (PiCMCaptureObjectInputData.c)
 *     _PnpCreateObject @ 0x14073249C (_PnpCreateObject.c)
 */

__int64 __fastcall PiCMCreateObject(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int Object; // ebx
  int v9; // edx
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int128 v14; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-18h]

  *a6 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  Object = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v13);
  if ( Object >= 0 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      Object = -1073741790;
LABEL_39:
      Object = PiCMReturnBasicResultData(Object, v15, a3, a4, a6);
      goto LABEL_40;
    }
    if ( !(_QWORD)v14 )
      goto LABEL_38;
    if ( DWORD1(v13) )
      goto LABEL_38;
    if ( HIDWORD(v14) )
      goto LABEL_38;
    if ( !a3 )
      goto LABEL_38;
    v9 = 8;
    if ( a4 < 8 )
      goto LABEL_38;
    v10 = DWORD2(v13);
    v11 = 0;
    if ( SDWORD2(v13) <= 6 )
    {
      if ( DWORD2(v13) == 6 )
      {
        v11 = 6;
        goto LABEL_35;
      }
      v10 = (unsigned int)(DWORD2(v13) - 1);
      if ( DWORD2(v13) == 1 )
      {
        v11 = 1;
        goto LABEL_35;
      }
      v10 = (unsigned int)(DWORD2(v13) - 2);
      if ( DWORD2(v13) == 2 )
      {
        v11 = 2;
        goto LABEL_36;
      }
      v10 = (unsigned int)(DWORD2(v13) - 3);
      if ( DWORD2(v13) == 3 )
      {
        v11 = 4;
        goto LABEL_36;
      }
      v10 = (unsigned int)(DWORD2(v13) - 4);
      if ( DWORD2(v13) == 4 )
      {
        v11 = 3;
        goto LABEL_35;
      }
      if ( DWORD2(v13) == 5 )
      {
        v11 = 5;
        goto LABEL_35;
      }
      goto LABEL_32;
    }
    v10 = (unsigned int)(DWORD2(v13) - 65537);
    if ( DWORD2(v13) == 65537 )
    {
      v9 = 7;
    }
    else
    {
      v10 = (unsigned int)(DWORD2(v13) - 65538);
      if ( DWORD2(v13) != 65538 )
      {
        v10 = (unsigned int)(DWORD2(v13) - 65539);
        if ( DWORD2(v13) == 65539 )
        {
          v9 = 9;
        }
        else
        {
          v10 = (unsigned int)(DWORD2(v13) - 65540);
          if ( DWORD2(v13) == 65540 )
          {
            v9 = 10;
          }
          else
          {
            if ( DWORD2(v13) != 65541 )
              goto LABEL_32;
            v9 = 11;
          }
        }
      }
    }
    v11 = PiDrvDbCtx != 0 ? v9 : 0;
LABEL_32:
    if ( v11 )
    {
      if ( v11 <= 4 || v11 > 6 )
      {
LABEL_36:
        if ( Object >= 0 )
          Object = PnpCreateObject(v10, v14, v11, 0, 0LL);
        goto LABEL_39;
      }
LABEL_35:
      Object = -1073741637;
      goto LABEL_36;
    }
LABEL_38:
    Object = -1073741811;
    goto LABEL_39;
  }
LABEL_40:
  PiCMReleaseObjectInputData((__int64)&v13);
  return (unsigned int)Object;
}
