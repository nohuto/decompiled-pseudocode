/*
 * XREFs of ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C02105B8
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C02A8050 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     <none>
 */

void __fastcall PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 != (void *)(a1 + 8) && v2 )
    ExFreePoolWithTag(v2, 0);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
}
