/*
 * XREFs of AnFwpProgressIndicatorTimer @ 0x140AACEA0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x1403A7BD8 (BgpFwQueryPerformanceCounter.c)
 *     BgpFwReleaseLock @ 0x1403A7BF0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403A7C40 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayCharacter @ 0x1403A7CAC (BgpTxtDisplayCharacter.c)
 *     LogFwStat @ 0x140AACFEC (LogFwStat.c)
 */

void __fastcall AnFwpProgressIndicatorTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int16 v5; // r9
  LARGE_INTEGER v6; // rbx
  __int16 v7; // r10
  __int16 v8; // ax
  __int16 v9; // ax
  LARGE_INTEGER v10[3]; // [rsp+40h] [rbp-18h] BYREF

  v10[0].QuadPart = 0LL;
  BgpFwAcquireLock();
  if ( byte_140CE1AE0 )
  {
    PerformanceCounter = BgpFwQueryPerformanceCounter(v10);
    v5 = word_140C09770;
    v6 = PerformanceCounter;
    v7 = word_140C0C67C;
    if ( word_140C09770 != word_140C0C67C
      && (qword_140C54908 + 10 * (v10[0].QuadPart / 33) / 100 - PerformanceCounter.QuadPart) / (v10[0].QuadPart / 33) >= 2 )
    {
      v5 = ++word_140C09770;
    }
    v8 = word_140C0C678;
    if ( v5 >= (unsigned __int16)word_140C0C678 )
    {
      if ( v5 > (unsigned __int16)word_140C0C67C )
        goto LABEL_9;
      LogFwStat(1LL, 0LL, v10);
      BgpTxtDisplayCharacter(qword_140C0E050, (unsigned __int16)word_140C09770, 0, 0LL, 0LL);
      LogFwStat(0LL, 0LL, v10);
      v5 = word_140C09770;
      v7 = word_140C0C67C;
      v8 = word_140C0C678;
    }
    if ( v5 == v7 )
    {
      v9 = v8 - word_140C0C674;
      goto LABEL_10;
    }
LABEL_9:
    v9 = v5 + 1;
LABEL_10:
    word_140C09770 = v9;
    qword_140C54908 = v6.QuadPart;
  }
  BgpFwReleaseLock();
}
