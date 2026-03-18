/*
 * XREFs of ListTableEnd @ 0x1C0188CA0
 * Callers:
 *     RIMCmActiveContactsEnd @ 0x1C01865F0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C0186644 (RIMCmActiveContactsNext.c)
 *     ListTableIteratorNext @ 0x1C0188CF8 (ListTableIteratorNext.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ListTableEnd(__int64 a1, __int64 a2)
{
  if ( !*(_QWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( !*(_DWORD *)(a2 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8);
  return a1;
}
