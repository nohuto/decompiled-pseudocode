/*
 * XREFs of AlpcpFreeCompletionList @ 0x1406C38D4
 * Callers:
 *     AlpcpDoPortCleanup @ 0x1405E20E8 (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x1406D1BB0 (NtAlpcSetInformation.c)
 * Callees:
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1402E9600 (IoFreeMdl.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x1406C3930 (AlpcpUnregisterCompletionListDatabase.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
