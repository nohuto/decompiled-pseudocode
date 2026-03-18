/*
 * XREFs of ListTableEnd @ 0x1C0180A60
 * Callers:
 *     RIMCmActiveContactsEnd @ 0x1C017E4C0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C017E514 (RIMCmActiveContactsNext.c)
 *     ListTableIteratorNext @ 0x1C0180AB8 (ListTableIteratorNext.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ListTableEnd(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !*(_QWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( !*(_DWORD *)(a2 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8);
  return a1;
}
