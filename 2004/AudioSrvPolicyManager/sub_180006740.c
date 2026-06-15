/*
 * XREFs of sub_180006740 @ 0x180006740
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009DF0 @ 0x180009DF0 (sub_180009DF0.c)
 */

__int64 __fastcall sub_180006740(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    sub_180009DF0(v2, &unk_180042840, a2);
  else
    *a2 = 0LL;
  return 0LL;
}
