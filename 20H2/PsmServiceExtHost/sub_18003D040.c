/*
 * XREFs of sub_18003D040 @ 0x18003D040
 * Callers:
 *     sub_180001030 @ 0x180001030 (sub_180001030.c)
 * Callees:
 *     sub_18003D0D0 @ 0x18003D0D0 (sub_18003D0D0.c)
 */

__int64 sub_18003D040()
{
  __int64 result; // rax

  byte_1800B4010 = 0;
  word_1800B4050 = 0;
  qword_1800B4018 = (__int64)"WilStaging_02";
  *(_OWORD *)&xmmword_1800B4020 = 0LL;
  *(_OWORD *)&stru_1800B4030.Ptr = 0LL;
  xmmword_1800B4040 = 0LL;
  xmmword_1800B4058 = 0LL;
  xmmword_1800B4068 = 0LL;
  sub_18003D0D0(&CriticalSection);
  result = sub_18003D0D0(&unk_1800B40C0);
  byte_1800B4010 = 1;
  xmmword_1800B4108 = 0LL;
  xmmword_1800B4118 = 0LL;
  return result;
}
