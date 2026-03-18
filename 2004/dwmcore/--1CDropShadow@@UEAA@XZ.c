/*
 * XREFs of ??1CDropShadow@@UEAA@XZ @ 0x1800E0AC4
 * Callers:
 *     ??_GCDropShadow@@UEAAPEAXI@Z @ 0x1800E0A80 (--_GCDropShadow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800D637C (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E0BD0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAVCVisual@@VShadowIntermediates@CDropShad.c)
 *     ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x1800E0C00 (--1ShadowIntermediates@CDropShadow@@QEAA@XZ.c)
 */

void __fastcall CDropShadow::~CDropShadow(CDropShadow *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CDropShadow::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CSystemMemoryBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CDropShadow::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v2 + 52) = v2 - 224;
  v3 = *(int *)(*((_QWORD *)this + 7) + 8LL);
  *(_DWORD *)((char *)this + v3 + 52) = v3 - 240;
  std::_List_node<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>,void *>>>(
    v3,
    *((_QWORD *)this + 26));
  **((_QWORD **)this + 26) = *((_QWORD *)this + 26);
  *(_QWORD *)(*((_QWORD *)this + 26) + 8LL) = *((_QWORD *)this + 26);
  *((_QWORD *)this + 27) = 0LL;
  v4 = (unsigned __int64)(*((_QWORD *)this + 29) - *((_QWORD *)this + 28) + 7LL) >> 3;
  if ( *((_QWORD *)this + 28) > *((_QWORD *)this + 29) )
    v4 = 0LL;
  if ( v4 )
    memset64(*((void **)this + 28), *((_QWORD *)this + 26), v4);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)this + 224);
  std::_List_node<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>,void *>>>(
    v5,
    *((_QWORD *)this + 26));
  std::_Deallocate<16,0>(*((void **)this + 26), 0x58uLL);
  CDropShadow::ShadowIntermediates::~ShadowIntermediates((CDropShadow *)((char *)this + 136));
  CBrush::~CBrush(this);
}
