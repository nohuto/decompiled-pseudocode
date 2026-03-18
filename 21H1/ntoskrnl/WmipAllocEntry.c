/*
 * XREFs of WmipAllocEntry @ 0x140740B90
 * Callers:
 *     WmipAddDataSource @ 0x14073F378 (WmipAddDataSource.c)
 *     WmipAllocGuidEntry @ 0x140740AF8 (WmipAllocGuidEntry.c)
 *     WmipAddMofResource @ 0x1407A90EC (WmipAddMofResource.c)
 *     WmipUpdateModifyGuid @ 0x1407AEC80 (WmipUpdateModifyGuid.c)
 *     WmipUpdateAddGuid @ 0x14092EF68 (WmipUpdateAddGuid.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1284 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140408F80 (memset.c)
 */

_QWORD *__fastcall WmipAllocEntry(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = ExAllocateFromNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)a1);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, *(unsigned int *)(a1 + 8));
    v3[3] = 1LL;
    *((_DWORD *)v3 + 4) = *(_DWORD *)(a1 + 24);
    *((_DWORD *)v3 + 8) = *(_DWORD *)(a1 + 28);
  }
  return v3;
}
