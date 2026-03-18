/*
 * XREFs of AlpcpFreeCompletionList @ 0x140676E88
 * Callers:
 *     AlpcpDoPortCleanup @ 0x140646DFC (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x140676960 (NtAlpcSetInformation.c)
 * Callees:
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x140676EE4 (AlpcpUnregisterCompletionListDatabase.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
