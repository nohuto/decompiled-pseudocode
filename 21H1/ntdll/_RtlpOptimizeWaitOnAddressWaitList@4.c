/*
 * XREFs of _RtlpOptimizeWaitOnAddressWaitList@4 @ 0x4B2A9553
 * Callers:
 *     _RtlpAddWaitBlockToWaitList@8 @ 0x4B2DF80C (_RtlpAddWaitBlockToWaitList@8.c)
 * Callees:
 *     _RtlpWaitOnAddressWakeEntireList@4 @ 0x4B2AC022 (_RtlpWaitOnAddressWakeEntireList@4.c)
 */

signed __int32 __thiscall RtlpOptimizeWaitOnAddressWaitList(volatile signed __int32 *this)
{
  signed __int32 i; // edx
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // eax
  signed __int32 result; // eax

  for ( i = *this; ; i = result )
  {
    v3 = (_DWORD *)(i & 0xFFFFFFFC);
    v4 = (_DWORD *)((i & 0xFFFFFFFC) + 16);
    if ( !*v4 )
    {
      do
      {
        v5 = v3;
        v3 = (_DWORD *)v3[2];
        v3[3] = v5;
      }
      while ( !v3[4] );
    }
    *v4 = v3[4];
    result = _InterlockedCompareExchange(this, (i & 1) == 0 ? i & 0xFFFFFFFC : 0, i);
    if ( result == i )
      break;
  }
  if ( (i & 1) != 0 )
    return RtlpWaitOnAddressWakeEntireList(result);
  return result;
}
