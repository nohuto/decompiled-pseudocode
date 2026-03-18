/*
 * XREFs of PsGetWin32KFilterSet @ 0x14027C640
 * Callers:
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return LODWORD(KeGetCurrentThread()->ApcState.Process[2].AffinityPadding[0]);
}
