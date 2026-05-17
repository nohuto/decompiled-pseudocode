/*
 * XREFs of _RtlpGuidPresentInGuidList@12 @ 0x4B34906E
 * Callers:
 *     _RtlpCopyEffectiveAce@64 @ 0x4B2D7FF4 (_RtlpCopyEffectiveAce@64.c)
 * Callees:
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

char __fastcall RtlpGuidPresentInGuidList(void *Buf1, int a2, unsigned int a3)
{
  int v3; // esi

  v3 = 0;
  if ( !a3 )
    return 0;
  while ( memcmp(Buf1, *(const void **)(a2 + 4 * v3), 0x10u) )
  {
    if ( ++v3 >= a3 )
      return 0;
  }
  return 1;
}
