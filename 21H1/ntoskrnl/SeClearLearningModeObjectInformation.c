/*
 * XREFs of SeClearLearningModeObjectInformation @ 0x1402064E0
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x140317EB8 (RtlpAllowsLowBoxAccess.c)
 *     ObOpenObjectByNameEx @ 0x1405EB110 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140613480 (ObReferenceObjectByName.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     ObReferenceObjectByNameEx @ 0x14064B8F0 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
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
