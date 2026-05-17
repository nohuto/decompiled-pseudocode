/*
 * XREFs of RtlRunOnceBeginInitialize @ 0x18000A530
 * Callers:
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x180009518 (RtlpFcEnsureSubscriptionManagerStarted.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x18000A448 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x180108710 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x1801094EC (RtlpHpStackTraceHeapGetContext.c)
 * Callees:
 *     RtlpRunOnceWaitForInit @ 0x180084040 (RtlpRunOnceWaitForInit.c)
 */

__int64 __fastcall RtlRunOnceBeginInitialize(volatile signed __int64 *a1, int a2, unsigned __int64 *a3)
{
  signed __int64 v5; // rax
  unsigned int v6; // edi
  int v8; // ebx
  signed __int64 v9; // rcx
  signed __int64 v10; // rtt

  if ( ((a2 - 1) & a2) != 0 || (a2 & 0xFFFFFFFC) != 0 )
    return 3221225712LL;
  v5 = *a1;
  v6 = 0;
  if ( (*a1 & 3) == 2 )
  {
LABEL_6:
    if ( a3 )
      *a3 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  else
  {
    if ( (a2 & 1) != 0 )
      return 3221225473LL;
    v8 = a2 & 2;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = v5 & 3;
        if ( (v5 & 3) != 0 )
          break;
        v10 = v5;
        v5 = _InterlockedCompareExchange64(a1, v8 != 0 ? 3LL : 1LL, v5);
        if ( v10 == v5 )
          return 259;
      }
      if ( v9 != 1 )
        break;
      if ( v8 )
        return (unsigned int)-1073741584;
      v5 = RtlpRunOnceWaitForInit(v5, a1);
    }
    if ( v9 != 3 )
      goto LABEL_6;
    return v8 != 0 ? 259 : -1073741584;
  }
  return v6;
}
