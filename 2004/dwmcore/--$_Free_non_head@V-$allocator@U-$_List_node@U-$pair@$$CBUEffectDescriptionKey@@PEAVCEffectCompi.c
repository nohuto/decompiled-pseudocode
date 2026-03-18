/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180169600
 * Callers:
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x1801697B0 (--1CEffectCompilationService@@UEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18016997C (-clear@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_Uhash_comp.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_Deallocate<16,0>(v2, 0x28uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
