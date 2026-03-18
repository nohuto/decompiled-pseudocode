/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x1403BD8A4
 * Callers:
 *     AdtpWriteToEtwEx @ 0x1405BCD64 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x1407A4924 (AdtpWriteToEtw.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpEventWriteFull @ 0x140293740 (EtwpEventWriteFull.c)
 */

__int64 __fastcall EtwWriteKMSecurityEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _QWORD *CurrentServerSiloGlobals; // rax

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
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
