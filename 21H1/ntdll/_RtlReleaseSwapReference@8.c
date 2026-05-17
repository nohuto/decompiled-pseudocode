/*
 * XREFs of _RtlReleaseSwapReference@8 @ 0x4B2E5174
 * Callers:
 *     _RtlpFcBufferManagerDereferenceBuffers@8 @ 0x4B2E5160 (_RtlpFcBufferManagerDereferenceBuffers@8.c)
 * Callees:
 *     _RtlBackoff@4 @ 0x4B2DBA90 (_RtlBackoff@4.c)
 *     @RtlpWakeByAddress@12 @ 0x4B2DF2F6 (@RtlpWakeByAddress@12.c)
 */

char __fastcall RtlReleaseSwapReference(volatile signed __int32 *a1, int a2)
{
  unsigned __int32 v4; // esi
  int v5; // eax
  signed __int32 v6; // eax
  signed __int32 v8; // [esp+10h] [ebp-8h] BYREF
  unsigned int i; // [esp+14h] [ebp-4h] BYREF

  for ( i = 0; ; RtlBackoff(&i) )
  {
    v4 = *a1;
    v5 = *a1 & 1;
    if ( v5 != a2 )
      break;
    if ( !(v4 >> 1) )
      __fastfail(0xEu);
    v6 = _InterlockedCompareExchange(a1, v5 | (2 * (v4 >> 1) - 2), v4);
    if ( v6 == v4 )
      return v6;
  }
  v6 = _InterlockedDecrement(a1 + 1);
  if ( !v6 )
  {
    _InterlockedOr(&v8, 0);
    LOBYTE(v6) = RtlpWakeByAddress((unsigned int)(a1 + 1), 1, (int)(a1 + 1));
  }
  return v6;
}
