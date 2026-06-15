/*
 * XREFs of sub_18003D250 @ 0x18003D250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_18003D250()
{
  qword_18004FFB0 = (__int64)&off_18003F718;
  if ( byte_18004FFC0 )
  {
    if ( hHeap )
      HeapDestroy(hHeap);
  }
}
