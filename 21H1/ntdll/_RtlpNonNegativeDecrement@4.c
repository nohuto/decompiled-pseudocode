/*
 * XREFs of _RtlpNonNegativeDecrement@4 @ 0x4B2EA910
 * Callers:
 *     _RtlReleaseResource@4 @ 0x4B2EA890 (_RtlReleaseResource@4.c)
 *     _RtlConvertSharedToExclusive@4 @ 0x4B34A510 (_RtlConvertSharedToExclusive@4.c)
 * Callees:
 *     <none>
 */

signed __int32 __thiscall RtlpNonNegativeDecrement(volatile signed __int32 *this)
{
  signed __int32 v1; // edx
  int v3; // eax

  v1 = *this;
  if ( *(int *)this > 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange(this, v1 - 1, v1);
      if ( v3 == v1 )
        break;
      v1 = v3;
    }
    while ( v3 > 0 );
  }
  return v1;
}
