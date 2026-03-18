/*
 * XREFs of MiUpdateSessionPdeMaster @ 0x1403F662C
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140336364 (MiInitializeSystemPageTable.c)
 * Callees:
 *     <none>
 */

__int64 MiUpdateSessionPdeMaster()
{
  return *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 32);
}
