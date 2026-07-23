/*
 * XREFs of PfSnLogStreamDelete @ 0x1405F7924
 * Callers:
 *     PfSnNameRemoveAll @ 0x1405F78D4 (PfSnNameRemoveAll.c)
 * Callees:
 *     PfSnTraceGetLogEntry @ 0x1403255E0 (PfSnTraceGetLogEntry.c)
 *     PfSnFailProcessTrace @ 0x140734E80 (PfSnFailProcessTrace.c)
 */

__int64 __fastcall PfSnLogStreamDelete(__int64 a1, __int64 a2)
{
  int LogEntry; // ebx
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rcx
  int v7; // eax
  _OWORD *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  LogEntry = PfSnTraceGetLogEntry(a2, 4u, &v9);
  if ( LogEntry < 0 )
  {
    PfSnFailProcessTrace(a2);
  }
  else
  {
    v5 = v9;
    *v9 = 0LL;
    *v5 = 29LL;
    v5[1] = *(_QWORD *)(a1 + 16);
    v6 = ((unsigned __int64)v5 + 23) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_QWORD *)v6 = 0LL;
    *(_DWORD *)v6 = 451;
    *(_DWORD *)(v6 + 4) = *(_DWORD *)(a1 + 40);
    v7 = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(v6 + 16) &= 0xFFFFFFFC;
    *(_DWORD *)(v6 + 8) = v7;
    LogEntry = 0;
    *(_QWORD *)(v6 + 24) = *(_QWORD *)(a1 + 16);
  }
  return (unsigned int)LogEntry;
}
