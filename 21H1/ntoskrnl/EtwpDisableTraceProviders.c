/*
 * XREFs of EtwpDisableTraceProviders @ 0x1405F3508
 * Callers:
 *     EtwpStopLoggerInstance @ 0x140678BF8 (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402486F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     PsEnumProcesses @ 0x1405EEB64 (PsEnumProcesses.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1405F31AC (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpGetNextGuidEntry @ 0x1405F35EC (EtwpGetNextGuidEntry.c)
 */

LONG __fastcall EtwpDisableTraceProviders(__int64 a1, int a2)
{
  _WORD *v4; // rbx
  ULONG_PTR i; // rax
  ULONG_PTR v6; // rsi
  ULONG_PTR j; // rdx
  ULONG_PTR NextGuidEntry; // rax
  ULONG_PTR v9; // rsi
  unsigned int k; // edi
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 == EtwpHostSiloState )
    v4 = (_WORD *)0xFFFFF78000000380LL;
  else
    v4 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1112LL) + 550LL);
  for ( i = EtwpGetNextGuidEntry(a1, 0LL, 0LL); ; i = EtwpGetNextGuidEntry(a1, v6, 0LL) )
  {
    v6 = i;
    if ( !i )
      break;
    EtwpClearSessionAndUnreferenceEntry(a2, i, 0);
  }
  for ( j = 0LL; ; j = v9 )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, j, 2LL);
    v9 = NextGuidEntry;
    if ( !NextGuidEntry )
      break;
    EtwpClearSessionAndUnreferenceEntry(a2, NextGuidEntry, 2);
  }
  KeWaitForSingleObject(&EtwpGlobalMutex, Executive, 0, 0, 0LL);
  for ( k = 0; k < 9; ++k )
  {
    if ( *(_BYTE *)v4 == (_BYTE)a2 )
    {
      if ( k <= 1 )
      {
        v12 = k;
        PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))EtwpUpdateProcessTracingCallback, (__int64)&v12);
      }
      *v4 = 0;
    }
    ++v4;
  }
  return KeReleaseMutex(&EtwpGlobalMutex, 0);
}
