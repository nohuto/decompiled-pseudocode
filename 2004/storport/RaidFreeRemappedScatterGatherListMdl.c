/*
 * XREFs of RaidFreeRemappedScatterGatherListMdl @ 0x1C004C5C0
 * Callers:
 *     RaidXrbDeallocateResources @ 0x1C000869C (RaidXrbDeallocateResources.c)
 *     RaidUnitCompleteRequest @ 0x1C00089E0 (RaidUnitCompleteRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidFreeRemappedScatterGatherListMdl(__int64 a1)
{
  struct _MDL *v2; // rcx

  v2 = *(struct _MDL **)(a1 + 120);
  if ( v2 )
  {
    MmProtectMdlSystemAddress(v2, 4u);
    MmUnlockPages(*(PMDL *)(a1 + 120));
    IoFreeMdl(*(PMDL *)(a1 + 120));
    *(_QWORD *)(a1 + 120) = 0LL;
  }
}
