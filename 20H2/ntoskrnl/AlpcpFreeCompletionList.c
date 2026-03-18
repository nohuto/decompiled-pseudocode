/*
 * XREFs of AlpcpFreeCompletionList @ 0x1406E3BE4
 * Callers:
 *     AlpcpDoPortCleanup @ 0x1405E9688 (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x14070D270 (NtAlpcSetInformation.c)
 * Callees:
 *     IoFreeMdl @ 0x14020A410 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x1406E3C40 (AlpcpUnregisterCompletionListDatabase.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
