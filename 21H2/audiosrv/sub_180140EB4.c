/*
 * XREFs of sub_180140EB4 @ 0x180140EB4
 * Callers:
 *     sub_180141200 @ 0x180141200 (sub_180141200.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180140EB4(__int64 a1, __int64 a2)
{
  char v2; // bl
  char v5; // r14
  char v6; // bp

  v2 = 1;
  v5 = 1;
  v6 = 1;
  if ( *(_WORD *)a1
    && *(_WORD *)a2
    && (*(_DWORD *)(a1 + 520) != *(_DWORD *)(a2 + 520) || (unsigned int)o__wcsnicmp(a1, a2, 260LL)) )
  {
    v5 = 0;
  }
  if ( *(_WORD *)(a1 + 524)
    && *(_WORD *)(a2 + 524)
    && (*(_DWORD *)(a1 + 1044) != *(_DWORD *)(a2 + 1044) || (unsigned int)o__wcsnicmp(a1 + 524, a2 + 524, 260LL)) )
  {
    v6 = 0;
  }
  if ( !v5 || !v6 )
    return 0;
  return v2;
}
