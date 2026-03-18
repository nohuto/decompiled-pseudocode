/*
 * XREFs of _DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE @ 0x1C01099FC
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108EE0 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE(void ***a1)
{
  void *v1; // rcx

  v1 = **a1;
  if ( v1 )
    operator delete[](v1);
}
