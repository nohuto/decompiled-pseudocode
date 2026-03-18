/*
 * XREFs of ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x1800ED3F0
 * Callers:
 *     ??1CDropShadow@@UEAA@XZ @ 0x1800ED0F4 (--1CDropShadow@@UEAA@XZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800ED3C0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAVCVisual@@VShadowIntermediates@CDropShad.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18021259C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@QEAVCVisual@@VShadowIntermediates.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180212F8C (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShado.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@2@PEAU32@@Z @ 0x180212FD4 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V-$_Uha.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CDropShadow::ShadowIntermediates::~ShadowIntermediates(struct CResource **this)
{
  CResource *v2; // rcx

  v2 = *this;
  if ( v2 )
    CResource::UnRegisterNotifierInternal(v2, this[1]);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)(this + 3));
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)(this + 2));
}
