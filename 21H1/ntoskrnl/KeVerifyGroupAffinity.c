/*
 * XREFs of KeVerifyGroupAffinity @ 0x140374F84
 * Callers:
 *     sub_1403D9A10 @ 0x1403D9A10 (sub_1403D9A10.c)
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     PspBuildCreateProcessContext @ 0x140707AB4 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x14074A9DC (IopConnectInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x1407B6090 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x14095584C (ExpProfileCreate.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeVerifyGroupAffinity(__int64 a1, char a2)
{
  __int64 v2; // rax

  v2 = *(unsigned __int16 *)(a1 + 8);
  return (unsigned __int16)v2 < (unsigned __int16)KiActiveGroups
      && (a2 || *(_QWORD *)a1)
      && (qword_140CFC838[v2] & *(_QWORD *)a1) == *(_QWORD *)a1
      && !(*(_WORD *)(a1 + 10) | (unsigned __int16)(*(_WORD *)(a1 + 12) | *(_WORD *)(a1 + 14)));
}
