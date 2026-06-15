/*
 * XREFs of sub_180073B78 @ 0x180073B78
 * Callers:
 *     sub_1801356EC @ 0x1801356EC (sub_1801356EC.c)
 * Callees:
 *     sub_180009DE0 @ 0x180009DE0 (sub_180009DE0.c)
 */

char __fastcall sub_180073B78(__int64 a1)
{
  bool v1; // al
  __int64 v2; // r8
  char v3; // dl

  v1 = sub_180009DE0(a1);
  v3 = 0;
  if ( v1 || *(_DWORD *)(v2 + 192) == 16 )
    return 1;
  return v3;
}
