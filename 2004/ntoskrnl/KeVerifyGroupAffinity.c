/*
 * XREFs of KeVerifyGroupAffinity @ 0x140375D94
 * Callers:
 *     sub_1403DA850 @ 0x1403DA850 (sub_1403DA850.c)
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     PspBuildCreateProcessContext @ 0x1406B1BF4 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x14074EDFC (IopConnectInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x1407B9200 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x140956F1C (ExpProfileCreate.c)
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
