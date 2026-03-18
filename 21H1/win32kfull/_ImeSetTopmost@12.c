/*
 * XREFs of _ImeSetTopmost@12 @ 0x1C212
 * Callers:
 *     _ImeCheckTopmost@4 @ 0x1C1D4 (_ImeCheckTopmost@4.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     ?GetLastTopMostWindowNoIME@@YGPAUtagWND@@PAU1@@Z @ 0x1C38E (-GetLastTopMostWindowNoIME@@YGPAUtagWND@@PAU1@@Z.c)
 *     _LinkWindow@12 @ 0x34D24 (_LinkWindow@12.c)
 *     _UnlinkWindow@8 @ 0x72E1E (_UnlinkWindow@8.c)
 */

__int16 __fastcall ImeSetTopmost(int a1, int a2, int a3)
{
  struct tagWND *LastTopMostWindowNoIME; // eax
  char v4; // bl
  struct tagWND *v5; // esi
  struct tagWND *v6; // edi
  int v7; // ecx
  int v8; // ebx
  struct tagWND *v9; // edx
  struct tagWND *v10; // ebx
  int v11; // edx
  struct tagWND *v12; // edx
  struct tagWND *v13; // edx
  struct tagWND *v15; // [esp+0h] [ebp-20h]
  int v16; // [esp+10h] [ebp-10h]
  struct tagWND *v17; // [esp+14h] [ebp-Ch]
  struct tagWND *v18; // [esp+14h] [ebp-Ch]
  struct tagWND *v19; // [esp+18h] [ebp-8h]

  LastTopMostWindowNoIME = *(struct tagWND **)(a1 + 56);
  v4 = 0;
  v16 = a1;
  v5 = 0;
  v19 = LastTopMostWindowNoIME;
  if ( LastTopMostWindowNoIME )
  {
    v6 = (struct tagWND *)*((_DWORD *)LastTopMostWindowNoIME + 15);
    if ( a2 )
    {
LABEL_13:
      v9 = v5;
      v17 = v5;
      while ( 1 )
      {
        if ( !v6 )
          return (__int16)LastTopMostWindowNoIME;
        LastTopMostWindowNoIME = (struct tagWND *)*((_DWORD *)v6 + 2);
        v10 = (struct tagWND *)*((_DWORD *)v6 + 12);
        if ( LastTopMostWindowNoIME == *(struct tagWND **)(a1 + 8) )
          break;
LABEL_15:
        v6 = v10;
        if ( !v10 )
          return (__int16)LastTopMostWindowNoIME;
        if ( v10 == v9 )
          v6 = (struct tagWND *)*((_DWORD *)v5 + 12);
        a1 = v16;
      }
      LastTopMostWindowNoIME = (struct tagWND *)*((_DWORD *)v6 + 19);
      v11 = *((_DWORD *)LastTopMostWindowNoIME + 1);
      if ( (*(_BYTE *)(v11 + 10) & 1) == 0 )
      {
        LOWORD(LastTopMostWindowNoIME) = *(_WORD *)v11;
        if ( *(_WORD *)v11 != *(_WORD *)(_gpsi + 498) )
        {
LABEL_23:
          v9 = v17;
          goto LABEL_15;
        }
        a1 = v16;
      }
      if ( v6 != v5 )
      {
        v12 = v6;
        while ( 1 )
        {
          if ( v12 == (struct tagWND *)a1 )
          {
            if ( !v5
              || (LastTopMostWindowNoIME = (struct tagWND *)*((_DWORD *)v5 + 14),
                  LastTopMostWindowNoIME == *((struct tagWND **)v6 + 14)) )
            {
              LOWORD(LastTopMostWindowNoIME) = (_WORD)v19;
              if ( *((struct tagWND **)v6 + 14) == v19 )
                break;
            }
          }
          v12 = (struct tagWND *)*((_DWORD *)v12 + 16);
          if ( !v12 )
            goto LABEL_23;
        }
        UnlinkWindow(v6, v19);
        SetOrClrWF(a2 != 0, (int)v6, 0x808u, 1);
        LOWORD(LastTopMostWindowNoIME) = LinkWindow(v19);
        v5 = v6;
      }
      goto LABEL_23;
    }
    LastTopMostWindowNoIME = GetLastTopMostWindowNoIME(v15);
    v5 = LastTopMostWindowNoIME;
    if ( !a3 )
      goto LABEL_12;
    if ( LastTopMostWindowNoIME )
    {
      LOWORD(LastTopMostWindowNoIME) = v16;
      do
      {
        v7 = *((_DWORD *)v5 + 12);
        if ( v7 == a3 )
          break;
        if ( v5 == (struct tagWND *)v16 )
          v4 = 1;
        v5 = (struct tagWND *)*((_DWORD *)v5 + 12);
      }
      while ( v7 );
      if ( v5 && !v4 )
      {
LABEL_12:
        a1 = v16;
        v8 = *(_DWORD *)(v16 + 64);
        LastTopMostWindowNoIME = *(struct tagWND **)(v8 + 20);
        if ( (*((_BYTE *)LastTopMostWindowNoIME + 12) & 0x20) != 0 )
        {
          v13 = v5;
          if ( v5 )
          {
            do
            {
              if ( v13 == (struct tagWND *)v8 )
                break;
              LastTopMostWindowNoIME = *(struct tagWND **)(*((_DWORD *)v13 + 19) + 4);
              v18 = LastTopMostWindowNoIME;
              if ( (*((_BYTE *)LastTopMostWindowNoIME + 10) & 1) == 0 )
              {
                LOWORD(LastTopMostWindowNoIME) = *(_WORD *)LastTopMostWindowNoIME;
                if ( *(_WORD *)v18 != *(_WORD *)(_gpsi + 498) )
                  v5 = v13;
              }
              v13 = (struct tagWND *)*((_DWORD *)v13 + 12);
            }
            while ( v13 );
            a1 = v16;
          }
        }
        goto LABEL_13;
      }
    }
  }
  return (__int16)LastTopMostWindowNoIME;
}
