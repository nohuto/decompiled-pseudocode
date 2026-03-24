/*
 * XREFs of AnFwpProgressAnimationManual @ 0x1409F7288
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x1409F4370 (AnFwDisplayProgressIndicator.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x14039BE80 (BgpFwQueryPerformanceCounter.c)
 *     BgpTxtDisplayCharacter @ 0x1403B1888 (BgpTxtDisplayCharacter.c)
 *     LogFwStat @ 0x1409F27D8 (LogFwStat.c)
 */

LONGLONG AnFwpProgressAnimationManual()
{
  LARGE_INTEGER v0; // rdi
  LONGLONG v1; // rbx
  LONGLONG v2; // rdx
  LONGLONG result; // rax
  __int16 v4; // cx
  __int16 v5; // ax
  __int64 v6; // rbx
  LARGE_INTEGER v7; // [rsp+60h] [rbp+8h] BYREF

  v7.QuadPart = 0LL;
  v0 = BgpFwQueryPerformanceCounter(&v7);
  v1 = v7.QuadPart / 33;
  v2 = 10 * (v7.QuadPart / 33) / 100;
  result = qword_140CDB168;
  if ( v0.QuadPart + v2 >= qword_140CDB168 + v7.QuadPart / 33 )
  {
    v4 = word_140C10E70;
    if ( word_140C10E70 != -7989 && (qword_140CDB168 - v0.QuadPart - v2) / v1 >= 2 )
      v4 = ++word_140C10E70;
    if ( (unsigned __int16)(v4 + 8110) <= 0x79u )
    {
      LogFwStat(1, 1, 0LL);
      BgpTxtDisplayCharacter(qword_140C135B0, word_140C10E70, 0, 0LL, 0LL);
      LogFwStat(0, 1, 0LL);
      v4 = word_140C10E70;
    }
    v5 = -8118;
    if ( v4 != -7989 )
      v5 = v4 + 1;
    word_140C10E70 = v5;
    qword_140CDB168 = v0.QuadPart;
    v6 = v1 / 2;
    result = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - v0.QuadPart;
    if ( result > v6 )
    {
      result = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - v6;
      qword_140CDB168 = result;
    }
  }
  return result;
}
