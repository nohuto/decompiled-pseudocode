/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x1403C0A44
 * Callers:
 *     AdtpWriteToEtwEx @ 0x1405C2394 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x1407B8BF8 (AdtpWriteToEtw.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x14027FA90 (EtwpEventWriteFull.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall EtwWriteKMSecurityEvent(unsigned __int16 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _QWORD *CurrentServerSiloGlobals; // rax

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals((__int64)a1, a2);
  return EtwpEventWriteFull(
           CurrentServerSiloGlobals[108] + 24LL,
           *(_BYTE *)(CurrentServerSiloGlobals[108] + 4064LL),
           0,
           0,
           a1,
           0,
           0,
           0LL,
           0LL,
           a3,
           a4,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           0LL);
}
