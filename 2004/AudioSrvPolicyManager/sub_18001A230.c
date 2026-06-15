/*
 * XREFs of sub_18001A230 @ 0x18001A230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_18001A230(__int64 a1)
{
  __int64 v1; // rdx

  v1 = -*(_QWORD *)(a1 + 536);
  if ( !*(_QWORD *)(a1 + 536) )
    v1 = -*(_QWORD *)(a1 + 544);
  return v1 != 0;
}
