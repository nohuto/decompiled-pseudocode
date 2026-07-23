/*
 * XREFs of MiResumeMarkPageLists @ 0x14038DF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MiResumeMarkPageLists(__int64 a1, int a2)
{
  if ( a2 )
    *(_BYTE *)(a1 + 4828) = a2;
  *(_BYTE *)(a1 + 4829) = 1;
}
