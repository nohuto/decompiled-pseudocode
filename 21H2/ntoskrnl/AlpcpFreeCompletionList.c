/*
 * XREFs of AlpcpFreeCompletionList @ 0x1406224B4
 * Callers:
 *     NtAlpcSetInformation @ 0x1406A8E90 (NtAlpcSetInformation.c)
 *     AlpcpDoPortCleanup @ 0x1406D1848 (AlpcpDoPortCleanup.c)
 * Callees:
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x140622510 (AlpcpUnregisterCompletionListDatabase.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
