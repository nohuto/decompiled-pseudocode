/*
 * XREFs of _GetBandOrdinal@4 @ 0x33526
 * Callers:
 *     _LinkWindow@12 @ 0x34D24 (_LinkWindow@12.c)
 *     _SetWindowGroupBand@12 @ 0x97764 (_SetWindowGroupBand@12.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall GetBandOrdinal(void *this)
{
  unsigned int result; // eax

  for ( result = 0; result < 0x12; ++result )
  {
    if ( (void *)gazbidOrder[result] == this )
      break;
  }
  return result;
}
