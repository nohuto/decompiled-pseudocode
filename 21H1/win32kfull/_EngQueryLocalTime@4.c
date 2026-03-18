/*
 * XREFs of _EngQueryLocalTime@4 @ 0x1D891F
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __stdcall EngQueryLocalTime(PENG_TIME_FIELDS ptf)
{
  union _LARGE_INTEGER Time; // [esp+8h] [ebp-1Ch] BYREF
  _TIME_FIELDS TimeFields; // [esp+10h] [ebp-14h] BYREF

  Time.QuadPart = 0LL;
  memset(&TimeFields, 0, sizeof(TimeFields));
  GreQuerySystemTime(&Time);
  GreSystemTimeToLocalTime(&Time, &Time);
  RtlTimeToTimeFields(&Time, &TimeFields);
  *(_TIME_FIELDS *)ptf = TimeFields;
}
