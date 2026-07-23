/*
 * XREFs of MiVerifyImageHeader @ 0x1406AD10C
 * Callers:
 *     MiCreateImageFileMap @ 0x1406AA6D4 (MiCreateImageFileMap.c)
 * Callees:
 *     MiLegacyImageArchitecture @ 0x14029AA2C (MiLegacyImageArchitecture.c)
 *     MiComputeBadImageHeaderType @ 0x1408C7618 (MiComputeBadImageHeaderType.c)
 */

__int64 __fastcall MiVerifyImageHeader(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v6; // cx
  int v7; // r8d
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  __int16 v12; // r9
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  __int16 v16; // ax
  __int64 v17; // rdx
  char v18; // r8
  unsigned __int16 v19; // r11
  __int16 v20; // ax
  int v22; // r8d
  unsigned int v23; // eax
  int v24; // ecx
  int v25; // eax
  __int16 v26; // ax

  if ( (a2 & 3) != 0 )
  {
    dword_140C4CC58 = 59;
    return 3221225776LL;
  }
  if ( *(_DWORD *)a2 == 17744 )
  {
    if ( !*(_WORD *)(a2 + 4) && !*(_WORD *)(a2 + 20) )
    {
      dword_140C4CC58 = 70;
      return 3221225776LL;
    }
    if ( (*(_BYTE *)(a2 + 22) & 2) == 0 )
    {
      dword_140C4CC58 = 71;
      return 3221225595LL;
    }
    v6 = *(_WORD *)(a2 + 24);
    *(_WORD *)(a1 + 48) = v6;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 60);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 56);
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 80);
    if ( v6 == 523 )
    {
      v7 = *(_DWORD *)(a2 + 128);
      *(_DWORD *)(a1 + 20) = v7;
      *(_QWORD *)a1 = *(_QWORD *)(a2 + 48);
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 84);
      *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 40);
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 96);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 104);
      *(_WORD *)(a1 + 50) = *(_WORD *)(a2 + 92);
      *(_WORD *)(a1 + 52) = *(_WORD *)(a2 + 72);
      *(_WORD *)(a1 + 54) = *(_WORD *)(a2 + 74);
      *(_WORD *)(a1 + 56) = *(_WORD *)(a2 + 64);
      *(_WORD *)(a1 + 58) = *(_WORD *)(a2 + 66);
      *(_WORD *)(a1 + 60) = *(_WORD *)(a2 + 94);
      *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 88);
      *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 28);
      *(_QWORD *)(a1 + 104) = 0LL;
      v8 = *(_DWORD *)(a2 + 132);
      if ( v8 > 6 )
      {
        v9 = *(_DWORD *)(a2 + 184);
        if ( v9 )
        {
          *(_DWORD *)(a1 + 104) = v9;
          *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 188);
          v8 = *(_DWORD *)(a2 + 132);
        }
      }
      if ( v8 > 0xC )
      {
        *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 232);
        *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 236);
        v8 = *(_DWORD *)(a2 + 132);
      }
      if ( v8 <= 0xE )
      {
        *(_QWORD *)(a1 + 80) = 0LL;
      }
      else
      {
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 248);
        *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 252);
        if ( *(_DWORD *)(a2 + 248) && *(_DWORD *)(a2 + 252) )
          *(_DWORD *)(a1 + 20) = v7 | 1;
      }
      if ( *(_DWORD *)(a2 + 132) <= 5u )
      {
        *(_DWORD *)(a1 + 88) = 0;
        v10 = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 176);
        v10 = *(_DWORD *)(a2 + 180);
      }
      *(_DWORD *)(a1 + 92) = v10;
      if ( *(_DWORD *)(a2 + 132) > 0xAu )
      {
        *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 216);
        v11 = *(_DWORD *)(a2 + 220);
LABEL_17:
        *(_DWORD *)(a1 + 100) = v11;
        if ( dword_140C4CCD0 && dword_140C4CCD4 == *(_DWORD *)(a1 + 64) && dword_140C4CCD8 == *(_DWORD *)(a1 + 16) )
          __debugbreak();
        v12 = *(_WORD *)(a1 + 48);
        if ( ((v12 - 267) & 0xFEFF) != 0 )
        {
          dword_140C4CC58 = 73;
        }
        else
        {
          v13 = *(_DWORD *)(a1 + 8);
          if ( (v13 & 0x1FF) != 0 && v13 != *(_DWORD *)(a1 + 12) )
          {
            dword_140C4CC58 = 76;
            return 3221225595LL;
          }
          if ( !v13 )
          {
            dword_140C4CC58 = 77;
            return 3221225595LL;
          }
          v14 = *(_DWORD *)(a1 + 12);
          if ( ((v14 - 1) & v14) != 0 )
          {
            dword_140C4CC58 = 78;
            return 3221225595LL;
          }
          if ( ((v13 - 1) & v13) != 0 )
          {
            dword_140C4CC58 = 79;
            return 3221225595LL;
          }
          if ( v14 < v13 )
          {
            dword_140C4CC58 = 80;
            return 3221225595LL;
          }
          v15 = *(_DWORD *)(a1 + 16);
          if ( v15 > 0x77000000 )
          {
            dword_140C4CC58 = 81;
            return 3221225595LL;
          }
          if ( v12 == 267 )
          {
            v26 = *(_WORD *)(a2 + 4);
            if ( v26 != 332 && v26 != 452 )
            {
              dword_140C4CC58 = 82;
              return 3221225595LL;
            }
          }
          else if ( v12 == 523 )
          {
            v16 = *(_WORD *)(a2 + 4);
            if ( v16 != -31132 && v16 != -21916 )
            {
              dword_140C4CC58 = 83;
              return 3221225595LL;
            }
          }
          if ( *(_DWORD *)(a1 + 24) >= v15 )
          {
            dword_140C4CC58 = 84;
            return 3221225595LL;
          }
          if ( *(_WORD *)a1 )
          {
            dword_140C4CC58 = 85;
            return 3221225595LL;
          }
          if ( (*(_BYTE *)(a2 + 20) & 7) != 0 )
          {
            dword_140C4CC58 = 86;
            return 3221225595LL;
          }
          if ( !MiLegacyImageArchitecture(*(_WORD *)(a2 + 4)) )
          {
            if ( (v18 & 1) != 0 )
            {
              dword_140C4CC58 = 88;
              return 3221225595LL;
            }
            if ( (*(_WORD *)(v17 + 60) & 0x140) != 0x140 )
            {
              dword_140C4CC58 = 89;
              return 3221225595LL;
            }
            return 0LL;
          }
          v20 = *(_WORD *)(v17 + 60);
          if ( (_bittest16(&v20, v19) & ((v18 & 1) != 0)) == 0 )
            return 0LL;
          dword_140C4CC58 = 87;
        }
        return 3221225595LL;
      }
    }
    else
    {
      v22 = *(_DWORD *)(a2 + 112);
      *(_DWORD *)(a1 + 20) = v22;
      *(_QWORD *)a1 = *(unsigned int *)(a2 + 52);
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 84);
      *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 40);
      *(_QWORD *)(a1 + 32) = *(unsigned int *)(a2 + 96);
      *(_QWORD *)(a1 + 40) = *(unsigned int *)(a2 + 100);
      *(_WORD *)(a1 + 50) = *(_WORD *)(a2 + 92);
      *(_WORD *)(a1 + 52) = *(_WORD *)(a2 + 72);
      *(_WORD *)(a1 + 54) = *(_WORD *)(a2 + 74);
      *(_WORD *)(a1 + 56) = *(_WORD *)(a2 + 64);
      *(_WORD *)(a1 + 58) = *(_WORD *)(a2 + 66);
      *(_WORD *)(a1 + 60) = *(_WORD *)(a2 + 94);
      *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 88);
      *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 28);
      *(_QWORD *)(a1 + 104) = 0LL;
      v23 = *(_DWORD *)(a2 + 116);
      if ( v23 > 6 )
      {
        v24 = *(_DWORD *)(a2 + 168);
        if ( v24 )
        {
          *(_DWORD *)(a1 + 104) = v24;
          *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 172);
          v23 = *(_DWORD *)(a2 + 116);
        }
      }
      if ( v23 > 0xC )
      {
        *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 216);
        *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 220);
        v23 = *(_DWORD *)(a2 + 116);
      }
      if ( v23 <= 0xE )
      {
        *(_QWORD *)(a1 + 80) = 0LL;
      }
      else
      {
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 232);
        *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 236);
        if ( *(_DWORD *)(a2 + 232) && *(_DWORD *)(a2 + 236) )
          *(_DWORD *)(a1 + 20) = v22 | 1;
      }
      if ( *(_DWORD *)(a2 + 116) <= 5u )
      {
        *(_DWORD *)(a1 + 88) = 0;
        v25 = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 160);
        v25 = *(_DWORD *)(a2 + 164);
      }
      *(_DWORD *)(a1 + 92) = v25;
      if ( *(_DWORD *)(a2 + 116) > 0xAu )
      {
        *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 200);
        v11 = *(_DWORD *)(a2 + 204);
        goto LABEL_17;
      }
    }
    v11 = 0;
    *(_DWORD *)(a1 + 96) = 0;
    goto LABEL_17;
  }
  return MiComputeBadImageHeaderType(a2, a3, a4);
}
