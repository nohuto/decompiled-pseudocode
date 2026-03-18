/*
 * XREFs of WmipAllocEntry @ 0x1407512F0
 * Callers:
 *     WmipAddDataSource @ 0x14074FAD8 (WmipAddDataSource.c)
 *     WmipAllocGuidEntry @ 0x140751258 (WmipAllocGuidEntry.c)
 *     WmipAddMofResource @ 0x1407BA18C (WmipAddMofResource.c)
 *     WmipUpdateModifyGuid @ 0x1407BFD20 (WmipUpdateModifyGuid.c)
 *     WmipUpdateAddGuid @ 0x140936048 (WmipUpdateAddGuid.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140205EF4 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140411300 (memset.c)
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
