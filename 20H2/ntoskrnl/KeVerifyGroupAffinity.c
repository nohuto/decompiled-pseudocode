/*
 * XREFs of KeVerifyGroupAffinity @ 0x140377D24
 * Callers:
 *     sub_1403DD4E0 @ 0x1403DD4E0 (sub_1403DD4E0.c)
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     PspBuildCreateProcessContext @ 0x140694298 (PspBuildCreateProcessContext.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     IopConnectInterrupt @ 0x14075D9DC (IopConnectInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x1407C7A90 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x14095CCDC (ExpProfileCreate.c)
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
