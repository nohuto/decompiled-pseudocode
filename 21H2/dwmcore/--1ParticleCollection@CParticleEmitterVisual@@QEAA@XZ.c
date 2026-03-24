/*
 * XREFs of ??1ParticleCollection@CParticleEmitterVisual@@QEAA@XZ @ 0x1801DE70C
 * Callers:
 *     ??1CParticleEmitterVisual@@UEAA@XZ @ 0x1801DE630 (--1CParticleEmitterVisual@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8E4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800DA8EC (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x180173F04 (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 */

void __fastcall CParticleEmitterVisual::ParticleCollection::~ParticleCollection(
        CParticleEmitterVisual::ParticleCollection *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx

  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)this + 432);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)this + 408);
  v2 = (void *)*((_QWORD *)this + 48);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 50) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 48) = 0LL;
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 0LL;
  }
  std::vector<float>::_Tidy((__int64)this + 360);
  v3 = (void *)*((_QWORD *)this + 42);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, 12 * ((*((_QWORD *)this + 44) - (_QWORD)v3) / 12LL));
    *((_QWORD *)this + 42) = 0LL;
    *((_QWORD *)this + 43) = 0LL;
    *((_QWORD *)this + 44) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 39);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, 12 * ((*((_QWORD *)this + 41) - (_QWORD)v4) / 12LL));
    *((_QWORD *)this + 39) = 0LL;
    *((_QWORD *)this + 40) = 0LL;
    *((_QWORD *)this + 41) = 0LL;
  }
  std::vector<float>::_Tidy((__int64)this + 288);
  v5 = (void *)*((_QWORD *)this + 33);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 35) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 35) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 30);
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, 12 * ((*((_QWORD *)this + 32) - (_QWORD)v6) / 12LL));
    *((_QWORD *)this + 30) = 0LL;
    *((_QWORD *)this + 31) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
  }
  std::vector<float>::_Tidy((__int64)this + 216);
  std::vector<float>::_Tidy((__int64)this + 192);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)this + 168);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)this + 144);
  v7 = (void *)*((_QWORD *)this + 15);
  if ( v7 )
  {
    std::_Deallocate<16,0>(v7, (*((_QWORD *)this + 17) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
  }
  std::vector<float>::_Tidy((__int64)this + 96);
  std::vector<float>::_Tidy((__int64)this + 72);
  v8 = (void *)*((_QWORD *)this + 6);
  if ( v8 )
  {
    std::_Deallocate<16,0>(v8, 12 * ((*((_QWORD *)this + 8) - (_QWORD)v8) / 12LL));
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 3);
  if ( v9 )
  {
    std::_Deallocate<16,0>(v9, (*((_QWORD *)this + 5) - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    std::_Deallocate<16,0>(*(void **)this, 12 * ((*((_QWORD *)this + 2) - *(_QWORD *)this) / 12LL));
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
}
