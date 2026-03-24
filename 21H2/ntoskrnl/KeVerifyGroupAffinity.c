/*
 * XREFs of KeVerifyGroupAffinity @ 0x1403781B4
 * Callers:
 *     sub_1403DDE50 @ 0x1403DDE50 (sub_1403DDE50.c)
 *     PspBuildCreateProcessContext @ 0x140608C44 (PspBuildCreateProcessContext.c)
 *     NtSetInformationThread @ 0x1406FCE80 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     IopConnectInterrupt @ 0x1407621CC (IopConnectInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x1407CBD80 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x14095A55C (ExpProfileCreate.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeVerifyGroupAffinity(__int64 a1, char a2)
{
  __int64 v2; // rax

  v2 = *(unsigned __int16 *)(a1 + 8);
  return (unsigned __int16)v2 < (unsigned __int16)KiActiveGroups
      && (a2 || *(_QWORD *)a1)
      && (qword_140CFC848[v2] & *(_QWORD *)a1) == *(_QWORD *)a1
      && !(*(_WORD *)(a1 + 10) | (unsigned __int16)(*(_WORD *)(a1 + 12) | *(_WORD *)(a1 + 14)));
}
