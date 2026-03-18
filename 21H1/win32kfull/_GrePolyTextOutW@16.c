/*
 * XREFs of _GrePolyTextOutW@16 @ 0x564DC
 * Callers:
 *     _NtGdiPolyTextOutW@16 @ 0x5619E (_NtGdiPolyTextOutW@16.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall GrePolyTextOutW(HDC a1, unsigned int a2, int a3, unsigned int a4)
{
  int v5; // ebx
  unsigned int v6; // edi
  unsigned __int16 **v7; // esi
  struct tagRECT *v8; // edx
  DC *v9; // ecx
  struct _DC_ATTR *UserAttr; // eax
  int v11; // esi
  void *v13; // [esp+0h] [ebp-118h]
  unsigned int v14; // [esp+4h] [ebp-114h]
  DC *v15; // [esp+10h] [ebp-108h] BYREF
  int v16; // [esp+14h] [ebp-104h]
  int v17; // [esp+18h] [ebp-100h]
  int v18; // [esp+1Ch] [ebp-FCh] BYREF
  _DWORD v19[5]; // [esp+20h] [ebp-F8h] BYREF
  _DWORD v20[3]; // [esp+34h] [ebp-E4h] BYREF
  char v21; // [esp+40h] [ebp-D8h]
  char v22; // [esp+41h] [ebp-D7h]
  int v23; // [esp+44h] [ebp-D4h]
  int v24; // [esp+48h] [ebp-D0h]
  int v25; // [esp+4Ch] [ebp-CCh]
  int v26[49]; // [esp+50h] [ebp-C8h] BYREF

  v15 = 0;
  v16 = 0;
  v17 = 0;
  v5 = 1;
  XDCOBJ::vLock((XDCOBJ *)&v15, a1);
  if ( !v15 || (*((_DWORD *)v15 + 6) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v5 = 0;
  }
  else
  {
    v22 = 1;
    v21 = 0;
    memset(v19, 0, 16);
    memset(v20, 0, sizeof(v20));
    v25 = 0;
    v24 = 0;
    v23 = 0;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v19, (struct XDCOBJ *)&v15, 0) )
    {
      v6 = a2 + 40 * a3;
      if ( a2 < v6 )
      {
        v7 = (unsigned __int16 **)(a2 + 36);
        while ( 1 )
        {
          v8 = (struct tagRECT *)*(v7 - 7);
          v18 = 192;
          v5 = 1;
          if ( !GreExtTextOutWLocked(
                  (struct XDCOBJ *)*(v7 - 8),
                  (int)*(v7 - 5),
                  (int)(v7 - 4),
                  (unsigned int)*(v7 - 6),
                  v8,
                  *v7,
                  *(unsigned __int8 *)(*((_DWORD *)v15 + 255) + 233),
                  ((22 * (_DWORD)v8 + 3) & 0xFFFFFFFC) <= 0xC0 ? v26 : 0,
                  a4,
                  v13,
                  v14) )
            break;
          v7 += 10;
          if ( (unsigned int)(v7 - 9) >= v6 )
            goto LABEL_11;
        }
        v5 = 0;
      }
    }
    else
    {
      v5 = XDCOBJ::bFullScreen((XDCOBJ *)&v15);
    }
LABEL_11:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
    if ( v20[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v20);
  }
  v9 = v15;
  if ( v15 )
  {
    if ( v16 && (*((_BYTE *)v15 + 32) & 2) != 0 )
    {
      if ( !v17 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v15);
        v9 = v15;
        if ( UserAttr )
        {
          DC::RestoreAttributes(v15, UserAttr);
          v9 = v15;
        }
      }
      *((_DWORD *)v9 + 8) &= ~2u;
      v16 = 0;
      v9 = v15;
    }
    v18 = 0;
    v11 = *(_DWORD *)v9;
    HmgDecrementExclusiveReferenceCountEx(v9, v17, &v18);
    if ( v18 )
      bDeleteDCInternalEx(v11, 0);
  }
  return v5;
}
