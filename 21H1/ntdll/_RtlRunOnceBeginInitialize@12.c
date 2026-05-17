/*
 * XREFs of _RtlRunOnceBeginInitialize@12 @ 0x4B2B2320
 * Callers:
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     _RtlpFcEnsureSubscriptionManagerStarted@4 @ 0x4B2B222D (_RtlpFcEnsureSubscriptionManagerStarted@4.c)
 *     _RtlpHpPerHeapStackTraceCleanup@12 @ 0x4B36DA1B (_RtlpHpPerHeapStackTraceCleanup@12.c)
 *     _RtlpHpStackTraceHeapGetContext@12 @ 0x4B36E4D5 (_RtlpHpStackTraceHeapGetContext@12.c)
 * Callees:
 *     _RtlpRunOnceWaitForInit@8 @ 0x4B2F28A3 (_RtlpRunOnceWaitForInit@8.c)
 */

int __stdcall RtlRunOnceBeginInitialize(volatile signed __int32 *a1, int a2, unsigned __int32 *a3)
{
  int v3; // esi
  signed __int32 v4; // eax
  int v6; // ecx
  signed __int32 v7; // edx
  signed __int32 v8; // ecx

  if ( ((a2 - 1) & a2) != 0 || (a2 & 0xFFFFFFFC) != 0 )
    return -1073741584;
  v3 = 0;
  v4 = *a1;
  if ( (*a1 & 3) == 2 )
    goto LABEL_5;
  if ( (a2 & 1) != 0 )
    return -1073741823;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = v4 & 3;
      if ( (v4 & 3) != 0 )
        break;
      v7 = v4;
      if ( (a2 & 2) != 0 )
        v8 = 3;
      else
        v8 = 1;
      v4 = _InterlockedCompareExchange(a1, v8, v4);
      if ( v4 == v7 )
        return 259;
    }
    if ( v6 != 1 )
      break;
    if ( (a2 & 2) != 0 )
      return -1073741584;
    v4 = RtlpRunOnceWaitForInit(v4, a1);
  }
  if ( v6 == 3 )
    return (a2 & 2) == 0 ? -1073741584 : 259;
LABEL_5:
  if ( a3 )
    *a3 = v4 & 0xFFFFFFFC;
  return v3;
}
