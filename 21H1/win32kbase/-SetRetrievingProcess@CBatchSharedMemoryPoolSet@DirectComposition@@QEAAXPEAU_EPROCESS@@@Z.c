/*
 * XREFs of ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00B64C8
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C00067DC (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C0006CD0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0006F24 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C004FFF0 (-CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C00B77A0 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
        DirectComposition::CBatchSharedMemoryPoolSet *this,
        struct _EPROCESS *a2)
{
  void *v4; // rcx

  if ( a2 )
    ObReferenceObjectByPointer(a2, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
    ObfDereferenceObject(v4);
  *((_QWORD *)this + 2) = a2;
}
