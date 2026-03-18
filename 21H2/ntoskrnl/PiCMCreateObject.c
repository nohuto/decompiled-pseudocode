/*
 * XREFs of PiCMCreateObject @ 0x140954BA8
 * Callers:
 *     PiCMHandleIoctl @ 0x14077BCA0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiCMReleaseObjectInputData @ 0x1406BACAC (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14078A1A8 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x14078A584 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x14078A600 (PiAuDoesClientHaveAccess.c)
 *     _PnpCreateObject @ 0x140A26BE8 (_PnpCreateObject.c)
 */

__int64 __fastcall PiCMCreateObject(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v8; // ebx
  int v9; // ebx
  int Object; // eax
  int v11; // ecx
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int128 v14; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-18h]

  *a6 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v8 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v13);
  if ( v8 >= 0 )
  {
    v9 = 2;
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      Object = -1073741790;
LABEL_16:
      v8 = PiCMReturnBasicResultData(Object, v15, a3, a4, a6);
      goto LABEL_17;
    }
    if ( !(_QWORD)v14 || DWORD1(v13) || HIDWORD(v14) || !a3 || a4 < 8 )
    {
LABEL_15:
      Object = -1073741811;
      goto LABEL_16;
    }
    if ( SDWORD2(v13) > 6 )
    {
      v11 = DWORD2(v13) - 65537;
      if ( DWORD2(v13) == 65537 )
      {
        v9 = 7;
      }
      else
      {
        v11 = DWORD2(v13) - 65538;
        if ( DWORD2(v13) == 65538 )
        {
          v9 = 8;
        }
        else
        {
          v11 = DWORD2(v13) - 65539;
          if ( DWORD2(v13) == 65539 )
          {
            v9 = 9;
          }
          else
          {
            v11 = DWORD2(v13) - 65540;
            if ( DWORD2(v13) == 65540 )
            {
              v9 = 10;
            }
            else
            {
              if ( DWORD2(v13) != 65541 )
                goto LABEL_15;
              v9 = 11;
            }
          }
        }
      }
      if ( !PiDrvDbCtx )
        goto LABEL_15;
    }
    else
    {
      if ( DWORD2(v13) == 6 || DWORD2(v13) == 1 )
        goto LABEL_19;
      v11 = DWORD2(v13) - 2;
      if ( DWORD2(v13) != 2 )
      {
        v11 = DWORD2(v13) - 3;
        if ( DWORD2(v13) != 3 )
        {
          if ( (unsigned int)(DWORD2(v13) - 4) >= 2 )
            goto LABEL_15;
LABEL_19:
          Object = -1073741637;
          goto LABEL_16;
        }
        v9 = 4;
      }
    }
    Object = PnpCreateObject(v11, v14, v9, 0, 0LL);
    goto LABEL_16;
  }
LABEL_17:
  PiCMReleaseObjectInputData((__int64)&v13);
  return (unsigned int)v8;
}
