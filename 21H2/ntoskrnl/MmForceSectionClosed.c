/*
 * XREFs of MmForceSectionClosed @ 0x1402373C0
 * Callers:
 *     <none>
 * Callees:
 *     MiForceSectionClosed @ 0x140237400 (MiForceSectionClosed.c)
 */

BOOLEAN __stdcall MmForceSectionClosed(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN DelayClose)
{
  unsigned int v3; // ebx
  int v4; // eax

  v3 = DelayClose != 0 ? 5 : 1;
  v4 = MiForceSectionClosed(SectionObjectPointer, v3);
  if ( !v4 )
    v4 = MiForceSectionClosed(SectionObjectPointer, v3 & 0xFFFFFFFC | 2);
  return v4 != 2;
}
