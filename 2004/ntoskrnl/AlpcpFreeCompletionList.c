/*
 * XREFs of AlpcpFreeCompletionList @ 0x1406F4DDC
 * Callers:
 *     AlpcpDoPortCleanup @ 0x14062924C (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x1406F43B0 (NtAlpcSetInformation.c)
 * Callees:
 *     IoFreeMdl @ 0x140267A50 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x1406F4E38 (AlpcpUnregisterCompletionListDatabase.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpFreeCompletionList(__int64 a1)
{
  PMDL *v1; // rbx

  v1 = *(PMDL **)(a1 + 360);
  MmUnlockPages(v1[4]);
  IoFreeMdl(v1[4]);
  AlpcpUnregisterCompletionListDatabase(v1);
  ExFreePoolWithTag(v1, 0);
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_DWORD *)(a1 + 416) &= ~0x4000u;
}
