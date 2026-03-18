/*
 * XREFs of SeClearLearningModeObjectInformation @ 0x140210DE0
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x140326628 (RtlpAllowsLowBoxAccess.c)
 *     ObReferenceObjectByNameEx @ 0x1405E566C (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x1405FDA80 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x14060CAF0 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
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
