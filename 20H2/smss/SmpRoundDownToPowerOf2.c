/*
 * XREFs of SmpRoundDownToPowerOf2 @ 0x1400124C8
 * Callers:
 *     SmpMakeSystemManagedPagingFileDescriptor @ 0x14001232C (SmpMakeSystemManagedPagingFileDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpRoundDownToPowerOf2(unsigned __int64 a1)
{
  unsigned int i; // ecx

  for ( i = 0; i < 0x40; ++i )
  {
    a1 >>= 1;
    if ( !a1 )
      break;
  }
  return 1LL << i;
}
