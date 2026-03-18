/*
 * XREFs of KeVerifyGroupAffinity @ 0x1402585E8
 * Callers:
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     PspBuildCreateProcessContext @ 0x140670488 (PspBuildCreateProcessContext.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     IopConnectInterrupt @ 0x140817258 (IopConnectInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x1408590B0 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x140A062C8 (ExpProfileCreate.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeVerifyGroupAffinity(__int64 a1, char a2)
{
  __int64 v2; // rax

  v2 = *(unsigned __int16 *)(a1 + 8);
  return (unsigned __int16)v2 < (unsigned __int16)KiActiveGroups
      && (a2 || *(_QWORD *)a1)
      && (qword_140D06E48[v2] & *(_QWORD *)a1) == *(_QWORD *)a1
      && !(*(_WORD *)(a1 + 10) | (unsigned __int16)(*(_WORD *)(a1 + 12) | *(_WORD *)(a1 + 14)));
}
