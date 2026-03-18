/*
 * XREFs of GreGetRandomRgn @ 0x1C00385F0
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C00382A4 (_ExcludeUpdateRgn.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0152174 (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     DrawTextExWorker @ 0x1C025E650 (DrawTextExWorker.c)
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x1C0091A10 (UserGetRedirectedWindowOrigin.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C009EEA8 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetRandomRgn(HDC a1, HRGN a2, int a3)
{
  struct _POINTL v6; // r14
  unsigned int v7; // ebx
  int v8; // r15d
  __int64 v9; // rdi
  _QWORD v11[2]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v12; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-31h] BYREF
  _BYTE v14[32]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v15; // [rsp+78h] [rbp+7h] BYREF
  int v16; // [rsp+80h] [rbp+Fh]
  int v17; // [rsp+84h] [rbp+13h]
  __int16 v18; // [rsp+88h] [rbp+17h]
  struct _POINTL v19; // [rsp+F0h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v6 = 0LL;
  v7 = -1;
  v8 = 5;
  if ( !v11[0] )
  {
    EngSetLastError(6u);
    goto LABEL_9;
  }
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  v18 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v14, (struct XDCOBJ *)v11, 1);
  if ( (v14[24] & 1) != 0 )
  {
    switch ( a3 )
    {
      case 1:
        v9 = *(_QWORD *)(v11[0] + 160LL);
        break;
      case 2:
        v9 = *(_QWORD *)(v11[0] + 168LL);
        break;
      case 3:
        v9 = *(_QWORD *)(v11[0] + 160LL);
        v6 = *(struct _POINTL *)(v11[0] + 168LL);
        if ( v9 )
        {
          if ( v6 )
            v8 = 1;
        }
        else
        {
          v9 = *(_QWORD *)(v11[0] + 168LL);
        }
        break;
      default:
        if ( (unsigned int)(a3 - 4) > 1 )
        {
LABEL_6:
          v7 = 0;
          goto LABEL_7;
        }
        v9 = *(_QWORD *)(v11[0] + 1120LL);
        break;
    }
    if ( v9 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v13, a2, 0);
      if ( v13[0] )
      {
        v12 = v9;
        if ( v8 == 5 )
        {
          if ( RGNOBJAPI::bCopy((RGNOBJAPI *)v13, (struct RGNOBJ *)&v12) )
          {
            if ( a3 != 4
              || (*(_DWORD *)(v11[0] + 36LL) & 0x4000) == 0
              || (v19 = 0LL, (unsigned int)UserGetRedirectedWindowOrigin(a1, &v19))
              && RGNOBJ::bOffset((RGNOBJ *)v13, &v19) )
            {
              v7 = 1;
            }
          }
        }
        else
        {
          v19 = v6;
          if ( RGNOBJAPI::iCombine((RGNOBJAPI *)v13, (struct RGNOBJ *)&v12, (struct RGNOBJ *)&v19, v8) )
            v7 = 1;
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v13);
      goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v14);
  if ( v15 )
    DLODCOBJ::vUnlock((DLODCOBJ *)&v15);
LABEL_9:
  if ( v11[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  return v7;
}
