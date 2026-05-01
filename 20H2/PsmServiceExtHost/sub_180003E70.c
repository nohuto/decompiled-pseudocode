/*
 * XREFs of sub_180003E70 @ 0x180003E70
 * Callers:
 *     sub_1800039E0 @ 0x1800039E0 (sub_1800039E0.c)
 * Callees:
 *     sub_180006258 @ 0x180006258 (sub_180006258.c)
 *     sub_1800062A4 @ 0x1800062A4 (sub_1800062A4.c)
 */

__int64 __fastcall sub_180003E70(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r11
  unsigned __int64 v4; // rdx
  unsigned __int8 v5; // cl
  int v6; // r10d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax

  result = 8LL;
  if ( (*(_BYTE *)(a1 + 544) & 8) != 0 )
    return 14LL;
  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(_QWORD *)(v3 + 648);
  v5 = (v4 >> 29) & 7;
  v6 = *(_DWORD *)(a1 + 116);
  if ( (v6 & 0x40) == 0 || !v5 )
  {
    if ( (v6 & 0x80u) == 0 || v5 <= 2u )
    {
      if ( (v6 & 0x100) != 0
        && ((v4 & 0x30000) != 0 && (v4 & 0x8000000000LL) != 0 || (v4 & 0x30000) == 0 && (v4 & 0x4000000000LL) != 0) )
      {
        return 10LL;
      }
      else if ( (*(_DWORD *)(a1 + 112) & 0x40000) != 0 && ((v4 & 0x30000) != 0 || (v4 & 0x2000000000000LL) == 0) )
      {
        return 12LL;
      }
      else
      {
        if ( (v6 & 0x200) == 0 )
          return 0LL;
        v8 = sub_180006258(v3, v4, 0LL);
        if ( !v8 )
          return 0LL;
        do
        {
          if ( *(_BYTE *)(v8 + 548) == 3 )
          {
            v10 = (*(_DWORD *)(v8 + 112) >> 7) & 3;
            if ( (int)v9 <= v10 )
              v9 = (unsigned int)v10;
          }
          v8 = sub_1800062A4(v8, v7, v9);
        }
        while ( v8 );
        if ( (_DWORD)v9 == 1 )
          return 13LL;
        else
          return 0LL;
      }
    }
    else
    {
      return 9LL;
    }
  }
  return result;
}
