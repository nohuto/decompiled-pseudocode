/*
 * XREFs of WmipAllocEntry @ 0x140742710
 * Callers:
 *     WmipAddDataSource @ 0x140740EF8 (WmipAddDataSource.c)
 *     WmipAllocGuidEntry @ 0x140742678 (WmipAllocGuidEntry.c)
 *     WmipAddMofResource @ 0x1407AC24C (WmipAddMofResource.c)
 *     WmipUpdateModifyGuid @ 0x1407B1DE0 (WmipUpdateModifyGuid.c)
 *     WmipUpdateAddGuid @ 0x140930218 (WmipUpdateAddGuid.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14026E044 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x14040A280 (memset.c)
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
