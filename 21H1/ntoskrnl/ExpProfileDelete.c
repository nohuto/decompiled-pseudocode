/*
 * XREFs of ExpProfileDelete @ 0x140955D70
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     KeStopProfile @ 0x1405161E0 (KeStopProfile.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpProfileDelete(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 48) )
  {
    KeStopProfile(*(_QWORD *)(a1 + 40));
    MmUnmapLockedPages(*(PVOID *)(a1 + 48), *(PMDL *)(a1 + 56));
    MmUnlockPages(*(PMDL *)(a1 + 56));
    ExFreePoolWithTag(*(PVOID *)(a1 + 40), 0);
  }
  if ( *(_QWORD *)a1 )
    ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x66507845u);
}
