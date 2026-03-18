/*
 * XREFs of AlpcpFreeCompletionList @ 0x1407F7C68
 * Callers:
 *     AlpcpDoPortCleanup @ 0x14074DB0C (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x1407D5A10 (NtAlpcSetInformation.c)
 * Callees:
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x1407F7CC4 (AlpcpUnregisterCompletionListDatabase.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
