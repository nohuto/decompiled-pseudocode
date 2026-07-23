/*
 * XREFs of MiUpdateSessionPdeMaster @ 0x1403F7DC8
 * Callers:
 *     MiInitializeSystemPageTable @ 0x1402967D4 (MiInitializeSystemPageTable.c)
 * Callees:
 *     <none>
 */

__int64 MiUpdateSessionPdeMaster()
{
  return *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 32);
}
