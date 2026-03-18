/*
 * XREFs of MiUpdateSessionPdeMaster @ 0x1403F2118
 * Callers:
 *     MiInitializeSystemPageTable @ 0x1402E28D4 (MiInitializeSystemPageTable.c)
 * Callees:
 *     <none>
 */

__int64 MiUpdateSessionPdeMaster()
{
  return *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 32);
}
