/*
 * XREFs of _RtlBeginReadTickLock@4 @ 0x4B2DBE26
 * Callers:
 *     _RtlGetSystemTimePrecise@0 @ 0x4B2DBB10 (_RtlGetSystemTimePrecise@0.c)
 *     _RtlGetInterruptTimePrecise@4 @ 0x4B3448C0 (_RtlGetInterruptTimePrecise@4.c)
 *     _RtlGetMultiTimePrecise@12 @ 0x4B3449D0 (_RtlGetMultiTimePrecise@12.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlBeginReadTickLock(int *this)
{
  int v1; // edx
  bool i; // zf

  v1 = *this;
  for ( i = (*this & 1) == 0; !i; i = (*this & 1) == 0 )
  {
    _mm_pause();
    v1 = *this;
  }
  return v1;
}
