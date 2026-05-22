/*
 * XREFs of ?OnHitTest@ResizeProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800FDF20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ??$_Insert_unverified@AEAU?$pair@$$CBKUtagPOINT@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUtagPOINT@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@1@@Z @ 0x1800F6F34 (--$_Insert_unverified@AEAU-$pair@$$CBKUtagPOINT@@@std@@V-$_List_unchecked_iterator@V-$_List_val@.c)
 *     ??$_Insert@AEAKUPointerCache@ResizeProcessor@@@?$list@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEAK$$QEAUPointerCache@ResizeProcessor@@@Z @ 0x1800FCF88 (--$_Insert@AEAKUPointerCache@ResizeProcessor@@@-$list@U-$pair@$$CBKUPointerCache@ResizeProcessor.c)
 *     ??A?$unordered_map@KUtagPOINT@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@@std@@QEAAAEAUtagPOINT@@AEBK@Z @ 0x1800FD700 (--A-$unordered_map@KUtagPOINT@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$pair@$$CBKUtagPOIN.c)
 *     ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x1800FED0C (-StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z.c)
 *     ?GetInputType@PointerManipulationHelper@@SA?AW4InputType@Input@Internal@UI@Windows@@W42@@Z @ 0x180144EC4 (-GetInputType@PointerManipulationHelper@@SA-AW4InputType@Input@Internal@UI@Windows@@W42@@Z.c)
 */

__int64 __fastcall ResizeProcessor::OnHitTest(
        __int64 **this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  unsigned int v7; // r8d
  struct HitTestResult *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+28h] [rbp-40h] BYREF
  int InputType; // [rsp+30h] [rbp-38h]

  *(_DWORD *)a4 = 1;
  if ( (*(_DWORD *)a2 & 0x1A) != 0 && (*(_DWORD *)a2 & 0x4000) == 0 )
  {
    if ( (*((_BYTE *)a2 + 32) & 4) != 0 )
    {
      v7 = *((_DWORD *)a2 + 10);
      v8 = (struct HitTestResult *)*((_QWORD *)a3 + 22);
      v14 = v7;
      ResizeProcessor::StartGestureRecognition((ResizeProcessor *)this, v8, v7);
      v10 = *(unsigned int *)a2;
      v15 = *(_QWORD *)((char *)a2 + 44);
      v9 = v15;
      InputType = PointerManipulationHelper::GetInputType(v10, v11, v12);
      std::list<std::pair<unsigned long const,ResizeProcessor::PointerCache>>::_Insert<unsigned long &,ResizeProcessor::PointerCache>(
        (__int64)(this + 12),
        *this[12],
        &v14,
        (__int64)&v15);
      std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_Insert_unverified<std::pair<unsigned long const,tagPOINT> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,tagPOINT>>>>>(
        this + 11,
        (__int64)&v15,
        (const unsigned __int8 *)(*this[12] + 16),
        *this[12]);
      *(_QWORD *)std::unordered_map<unsigned long,tagPOINT>::operator[](
                   (__int64)(this + 29),
                   (const unsigned __int8 *)&v14) = v9;
    }
  }
  else
  {
    *(_DWORD *)a4 = 0;
  }
  return 0LL;
}
