/*
 * XREFs of SmpNtSerializeBoot @ 0x140009490
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140004080 (SmscpLoadSubSystemsForMuSession.c)
 *     SmpAsyncMemoryConfiguration @ 0x140006C80 (SmpAsyncMemoryConfiguration.c)
 *     SmpLoadDataFromRegistry @ 0x1400094D0 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpEventWriteULONG @ 0x14000502C (SmpEventWriteULONG.c)
 *     SmpEventWrite @ 0x140009F80 (SmpEventWrite.c)
 */

__int64 SmpNtSerializeBoot()
{
  unsigned int v0; // ebx

  SmpEventWrite(&SmssEvt_SerializeBoot_Start);
  v0 = NtSerializeBoot();
  SmpEventWriteULONG(&SmssEvt_SerializeBoot_Stop, v0);
  return v0;
}
