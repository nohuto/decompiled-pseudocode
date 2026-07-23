/*
 * XREFs of AnFwpProgressIndicatorTimer @ 0x1409F54C0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x14039BFD0 (BgpFwQueryPerformanceCounter.c)
 *     BgpFwReleaseLock @ 0x14039C3F8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C448 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayCharacter @ 0x1403B19F8 (BgpTxtDisplayCharacter.c)
 *     LogFwStat @ 0x1409F37D8 (LogFwStat.c)
 */

void __fastcall AnFwpProgressIndicatorTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int16 v5; // r9
  LARGE_INTEGER v6; // rbx
  __int16 v7; // ax
  LARGE_INTEGER v8[3]; // [rsp+40h] [rbp-18h] BYREF

  v8[0].QuadPart = 0LL;
  BgpFwAcquireLock();
  if ( byte_140CDB1A8 )
  {
    PerformanceCounter = BgpFwQueryPerformanceCounter(v8);
    v5 = word_140C10EE8;
    v6 = PerformanceCounter;
    if ( word_140C10EE8 != -7989
      && (qword_140CDB1A0 + 10 * (v8[0].QuadPart / 33) / 100 - PerformanceCounter.QuadPart) / (v8[0].QuadPart / 33) >= 2 )
    {
      v5 = ++word_140C10EE8;
    }
    if ( (unsigned __int16)(v5 + 8110) <= 0x79u )
    {
      LogFwStat(1, 0, v8);
      BgpTxtDisplayCharacter(qword_140C135B0, word_140C10EE8, 0, 0LL, 0LL);
      LogFwStat(0, 0, v8);
      v5 = word_140C10EE8;
    }
    v7 = -8118;
    if ( v5 != -7989 )
      v7 = v5 + 1;
    word_140C10EE8 = v7;
    qword_140CDB1A0 = v6.QuadPart;
  }
  BgpFwReleaseLock();
}
