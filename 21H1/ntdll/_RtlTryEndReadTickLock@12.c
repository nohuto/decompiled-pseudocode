/*
 * XREFs of _RtlTryEndReadTickLock@12 @ 0x4B2DBBEF
 * Callers:
 *     _RtlGetSystemTimePrecise@0 @ 0x4B2DBB10 (_RtlGetSystemTimePrecise@0.c)
 *     _RtlGetInterruptTimePrecise@4 @ 0x4B3448C0 (_RtlGetInterruptTimePrecise@4.c)
 *     _RtlGetMultiTimePrecise@12 @ 0x4B3449D0 (_RtlGetMultiTimePrecise@12.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall RtlTryEndReadTickLock(int *this, int a2, int a3)
{
  int v3; // eax
  int v4; // ecx

  v3 = *this;
  v4 = this[1];
  return v3 == a2 && v4 == a3;
}
