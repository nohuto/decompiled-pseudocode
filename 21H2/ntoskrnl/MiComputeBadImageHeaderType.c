/*
 * XREFs of MiComputeBadImageHeaderType @ 0x1408C7618
 * Callers:
 *     MiVerifyImageHeader @ 0x1406AD10C (MiVerifyImageHeader.c)
 * Callees:
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     MiCheckDosCalls @ 0x1408C7564 (MiCheckDosCalls.c)
 */

__int64 __fastcall MiComputeBadImageHeaderType(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v6; // al
  char v8; // cl
  int v9; // ecx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int16 v12; // ax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned __int64 v15; // rcx

  if ( *(_WORD *)a1 != 17742 )
  {
    if ( *(_WORD *)a1 == 17740 )
      dword_140C4CC58 = 68;
    else
      dword_140C4CC58 = 69;
    return 3221225776LL;
  }
  if ( !(unsigned int)MiCheckDosCalls((unsigned __int16 *)a1, a3) )
  {
    v6 = *(_BYTE *)(a1 + 54);
    if ( v6 == 2 || !v6 && (((*(_WORD *)(a1 + 62) & 0xFF00) - 512) & 0xFEFF) == 0 )
    {
      dword_140C4CC58 = 60;
      return 3221225777LL;
    }
  }
  v8 = *(_BYTE *)(a1 + 54);
  if ( v8 == 5 || *(_WORD *)(a1 + 4) == *(_WORD *)(a1 + 42) )
  {
    dword_140C4CC58 = 61;
    return 3221225776LL;
  }
  if ( v8 != 1 )
    goto LABEL_14;
  v9 = *(_DWORD *)(a2 + 512) - 1414739505;
  if ( *(_DWORD *)(a2 + 512) == 1414739505 )
    v9 = *(unsigned __int16 *)(a2 + 516) - 16981;
  if ( v9 )
  {
LABEL_14:
    v10 = 16LL * *(unsigned __int16 *)(a2 + 8);
    if ( v10 > 0xFC6 )
      goto LABEL_42;
    v11 = *(_QWORD *)(v10 + a2 + 24) - 0x70614C2072616850LL;
    if ( *(_QWORD *)(v10 + a2 + 24) == 0x70614C2072616850LL )
    {
      v11 = *(_QWORD *)(v10 + a2 + 32) - 0x72617774666F5320LL;
      if ( *(_QWORD *)(v10 + a2 + 32) == 0x72617774666F5320LL )
        v11 = *(_QWORD *)(v10 + a2 + 40) - 0x2E636E49202C65LL;
    }
    if ( !v11 && ((v12 = *(_WORD *)(v10 + a2 + 56), v12 == 19280) || v12 == 20304 || v12 == 22096) )
    {
      dword_140C4CC58 = 63;
    }
    else
    {
LABEL_42:
      if ( v10 + 50 > 0x1000
        || v10 + *(unsigned __int16 *)(v10 + a2 + 48) > 0xFDC
        || memcmp(
             (const void *)(*(unsigned __int16 *)(v10 + a2 + 48) + v10 + a2),
             "Copyright (C) Rational Systems, Inc.",
             0x24uLL) )
      {
        v13 = *(_DWORD *)(a1 + 44);
        v14 = *(_DWORD *)(a2 + 60);
        if ( v13 > v14 )
        {
          v15 = (int)(v13 - v14);
          if ( v15 + 16 >= v15 && v15 + 16 < a3 && !memcmp((const void *)(a1 + v15 + 1), "1-2-3 Preloader", 0xFuLL) )
          {
            dword_140C4CC58 = 66;
            return 3221225776LL;
          }
          dword_140C4CC58 = 67;
        }
        else
        {
          dword_140C4CC58 = 65;
        }
        return 3221225755LL;
      }
      dword_140C4CC58 = 64;
    }
  }
  else
  {
    dword_140C4CC58 = 62;
  }
  return 3221225776LL;
}
