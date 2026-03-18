/*
 * XREFs of SeClearLearningModeObjectInformation @ 0x140298FF0
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x140355968 (RtlpAllowsLowBoxAccess.c)
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     ObReferenceObjectByNameEx @ 0x14062DD40 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140668760 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x140694650 (ObOpenObjectByNameEx.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 */

void SeClearLearningModeObjectInformation()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // ecx
  struct _LIST_ENTRY *Blink; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( KeGetCurrentIrql() )
    v1 = 2;
  else
    v1 = (KeGetCurrentThread()->ApcState.InProgressFlags & 1) != 0;
  Blink = CurrentThread[1].WaitBlock[1].WaitListEntry.Blink;
  if ( Blink )
  {
    if ( LODWORD(Blink->Blink) == v1 )
    {
      CurrentThread[1].WaitBlock[1].WaitListEntry.Blink = Blink->Flink;
      if ( Blink[2].Flink )
      {
        if ( Blink[3].Flink )
          RtlFreeAnsiString((PUNICODE_STRING)&Blink[2].Blink);
      }
    }
  }
}
