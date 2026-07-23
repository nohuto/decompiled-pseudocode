/*
 * XREFs of KeSetTimeAdjustment @ 0x1403928A4
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x140210980 (ExpUpdateTimerConfigurationWorker.c)
 * Callees:
 *     KiUpdateSystemTime @ 0x140397FF8 (KiUpdateSystemTime.c)
 *     RtlGenerateQpcToIncrementConstants @ 0x14039811C (RtlGenerateQpcToIncrementConstants.c)
 */

__int64 __fastcall KeSetTimeAdjustment(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = 0;
  if ( a1 == KeTimeAdjustmentFrequency )
    return 0LL;
  if ( !a1 )
    return 3221225620LL;
  if ( (unsigned __int64)(a1 - 2) <= 0xFFFFFFFD )
  {
    *(_QWORD *)&v3 = RtlGenerateQpcToIncrementConstants((unsigned int)a1, &v4);
    BYTE8(v3) = v4;
    KeTimeAdjustmentFrequency = a1;
    KiUpdateSystemTime(0LL, &v3, 0LL);
    return 0LL;
  }
  return 3221225621LL;
}
