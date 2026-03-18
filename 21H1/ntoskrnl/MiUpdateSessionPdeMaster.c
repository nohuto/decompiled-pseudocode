/*
 * XREFs of MiUpdateSessionPdeMaster @ 0x1403F0DB8
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140328C34 (MiInitializeSystemPageTable.c)
 * Callees:
 *     <none>
 */

__int64 MiUpdateSessionPdeMaster()
{
  return *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 32);
}
