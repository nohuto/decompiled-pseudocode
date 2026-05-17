/*
 * XREFs of _RtlAcquireSwapReference@4 @ 0x4B2E5334
 * Callers:
 *     _RtlpFcBufferManagerReferenceBuffers@12 @ 0x4B2E5302 (_RtlpFcBufferManagerReferenceBuffers@12.c)
 * Callees:
 *     _RtlBackoff@4 @ 0x4B2DBA90 (_RtlBackoff@4.c)
 */

int __thiscall RtlAcquireSwapReference(volatile signed __int32 *this)
{
  signed __int32 v2; // esi
  unsigned int v3; // edx
  unsigned int i; // [esp+8h] [ebp-4h] BYREF

  for ( i = 0; ; RtlBackoff(&i) )
  {
    v3 = *this & 1 | ((*this & 0xFFFFFFFE) + 2);
    if ( v3 < 2 )
      __fastfail(0xEu);
    v2 = *this;
    if ( _InterlockedCompareExchange(this, v3, v2) == v2 )
      break;
  }
  return v3 & 1;
}
