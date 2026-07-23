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
  size_t v7; // [esp-4h] [ebp-10h]

  v3 = 0;
  if ( !a3 )
    return 0;
  while ( 1 )
  {
    LODWORD(v7) = 16;
    if ( !memcmp(Buf1, *(const void **)(a2 + 4 * v3), v7) )
      break;
    if ( ++v3 >= a3 )
      return 0;
  }
  return 1;
}
