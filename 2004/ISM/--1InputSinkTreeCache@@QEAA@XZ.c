/*
 * XREFs of ??1InputSinkTreeCache@@QEAA@XZ @ 0x18003B41C
 * Callers:
 *     _InputSinkTreeCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__ @ 0x180051840 (_InputSinkTreeCache--GetInstance_--_2_--_dynamic_atexit_destructor_for__instance__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045464 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ??$_Destroy_range@V?$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@0AEAV?$allocator@VNotificationData@@@0@@Z @ 0x1800686C8 (--$_Destroy_range@V-$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@0AEAV-$al.c)
 */

void __fastcall InputSinkTreeCache::~InputSinkTreeCache(InputSinkTreeCache *this)
{
  void *v1; // rbx
  _QWORD **v2; // rcx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = qword_1802085A8;
  if ( qword_1802085A8 )
  {
    std::_Destroy_range<std::allocator<NotificationData>>(qword_1802085A8, xmmword_1802085B0);
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*((_QWORD *)&xmmword_1802085B0 + 1) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFE0uLL));
    qword_1802085A8 = 0LL;
    xmmword_1802085B0 = 0LL;
  }
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy(&unk_180208580);
  v2 = (_QWORD **)qword_180208570;
  **(_QWORD **)(qword_180208570 + 8) = 0LL;
  v3 = *v2;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x20);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>((void *)qword_180208570, (const struct std::nothrow_t *)0x20);
}
