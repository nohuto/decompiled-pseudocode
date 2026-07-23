/*
 * XREFs of _RtlpQueryTimeZoneKeyNameRoutine@24 @ 0x4B351420
 * Callers:
 *     <none>
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _wcsnlen @ 0x4B2FA870 (_wcsnlen.c)
 */

int __stdcall RtlpQueryTimeZoneKeyNameRoutine(int a1, int a2, wchar_t *Source, unsigned int a4, int a5, int a6)
{
  int v6; // edi
  unsigned int v7; // eax
  size_t v9; // [esp-4h] [ebp-10h]
  size_t v10; // [esp-4h] [ebp-10h]

  LODWORD(v9) = a4 >> 1;
  v6 = wcsnlen(Source, v9);
  v7 = *(unsigned __int16 *)(a6 + 2);
  if ( 2 * v6 + 2 > v7 )
    v6 = (v7 >> 1) - 1;
  LODWORD(v10) = 2 * v6;
  memcpy(*(void **)(a6 + 4), Source, v10);
  *(_WORD *)(2 * v6 + *(_DWORD *)(a6 + 4)) = 0;
  *(_WORD *)a6 = 2 * v6;
  return 0;
}
