/*
 * XREFs of ExpProfileDelete @ 0x14095AA80
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x14031CA30 (MmUnmapLockedPages.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     KeStopProfile @ 0x14051BCE0 (KeStopProfile.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
