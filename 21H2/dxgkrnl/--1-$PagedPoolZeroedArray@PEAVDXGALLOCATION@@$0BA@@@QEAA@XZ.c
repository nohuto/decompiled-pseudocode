/*
 * XREFs of ??1?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0BA@@@QEAA@XZ @ 0x1C028EBB0
 * Callers:
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C028EC5C (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     <none>
 */

void __fastcall PagedPoolZeroedArray<DXGALLOCATION *,16>::~PagedPoolZeroedArray<DXGALLOCATION *,16>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 != (void *)(a1 + 8) && v2 )
    ExFreePoolWithTag(v2, 0);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 136) = 0;
}
