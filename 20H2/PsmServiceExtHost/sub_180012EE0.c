/*
 * XREFs of sub_180012EE0 @ 0x180012EE0
 * Callers:
 *     sub_180013210 @ 0x180013210 (sub_180013210.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180012EE0(__int64 a1)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdx
  unsigned int v7; // ecx
  _DWORD *v8; // rdx
  unsigned int v9; // eax
  __int16 v10; // ax

  if ( *(_QWORD *)(a1 + 112) == -1LL )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 - 1 <= 0xFFE )
    return 0LL;
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 - 1 <= 0xFFE )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 360);
  if ( v5 - 1 <= 0xFFE )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 - 1 <= 0xFFE || v3 < v6 || v6 < v4 || v4 < v5 )
    return 0LL;
  v7 = 0;
  v8 = (_DWORD *)(a1 + 80);
  v9 = 0;
  while ( *v8 == v9 )
  {
    ++v9;
    v8 += 6;
    if ( v9 >= 3 )
    {
      if ( *(_DWORD *)(a1 + 8) <= *(_DWORD *)(a1 + 32) )
      {
        v10 = *(_WORD *)(a1 + 40);
        if ( (v10 & 9) != 9
          && ((*(_BYTE *)(a1 + 42) & 7u) - 2 > 2 || (v10 & 3) != 0)
          && ((*(_BYTE *)(a1 + 44) & 0x20) == 0 || (v10 & 0x20) != 0) )
        {
          return 1;
        }
      }
      return v7;
    }
  }
  return v7;
}
