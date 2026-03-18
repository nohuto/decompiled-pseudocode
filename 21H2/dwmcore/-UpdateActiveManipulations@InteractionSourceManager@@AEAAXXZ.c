/*
 * XREFs of ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18026503C
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x18021BBDC (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x18021E39C (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18021E3F8 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x180263C04 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uer.c)
 *     ??H?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x180263DA4 (--H-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uerr_retu.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180265008 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1802658EC (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$al_ea_1802658EC.c)
 *     ?push_front@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180265A10 (-push_front@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@_ea_180265A10.c)
 */

void __fastcall InteractionSourceManager::UpdateActiveManipulations(InteractionSourceManager *this)
{
  __int64 v2; // rbx
  __int64 v3; // r9
  __int64 v4; // rsi
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rax
  CInteractionTracker *v12; // rbx
  struct CManipulation *ActiveManipulation; // rax
  int v14; // ecx
  int v15; // eax
  _QWORD v16[3]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v17[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+90h] [rbp+20h] BYREF

  if ( *((_QWORD *)this + 14) > 1uLL )
  {
    v2 = 0LL;
    v3 = *((_QWORD *)this + 13);
    v4 = 0LL;
    v5 = *((_QWORD *)this + 11);
    v6 = *((_QWORD *)this + 12) - 1LL;
    v18 = 0LL;
    while ( 1 )
    {
      v7 = ((_DWORD)v3 + (_DWORD)v4) & 1;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * (v6 & ((unsigned __int64)(v3 + v4) >> 1))) + 8 * v7) + 420LL) == 2 )
        break;
      if ( (unsigned __int64)++v4 >= *((_QWORD *)this + 14) )
        goto LABEL_5;
    }
    v2 = *(_QWORD *)(*(_QWORD *)(v5 + 8 * (((unsigned __int64)(v3 + v4) >> 1) & (*((_QWORD *)this + 12) - 1LL))) + 8 * v7);
    v18 = v2;
    if ( v2 )
    {
LABEL_12:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      goto LABEL_13;
    }
LABEL_5:
    v8 = 0LL;
    if ( *((_QWORD *)this + 14) )
    {
      while ( 1 )
      {
        v9 = ((_DWORD)v3 + (_DWORD)v8) & 1;
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5
                                                              + 8
                                                              * ((*((_QWORD *)this + 12) - 1LL) & ((unsigned __int64)(v3 + v8) >> 1)))
                                                  + 8 * v9)
                                      + 420LL)
                          - 2) <= 2 )
          break;
        if ( (unsigned __int64)++v8 >= *((_QWORD *)this + 14) )
          goto LABEL_13;
      }
      v2 = *(_QWORD *)(*(_QWORD *)(v5 + 8 * (((unsigned __int64)(v3 + v8) >> 1) & (*((_QWORD *)this + 12) - 1LL)))
                     + 8 * v9);
      v18 = v2;
      if ( v2 )
        goto LABEL_12;
    }
LABEL_13:
    if ( v2 )
    {
      v16[1] = 0LL;
      v16[2] = *((_QWORD *)this + 13);
      v16[0] = *((_QWORD *)this + 10);
      v10 = std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>::operator+((__int64)v16);
      v11 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>(
              v17,
              v10);
      std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::erase((char *)this + 80, v16, v11);
      std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::push_front((char *)this + 80, &v18);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
  }
  v12 = *(CInteractionTracker **)(*((_QWORD *)this + 1) + 16LL);
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(this);
  if ( !ActiveManipulation )
  {
    if ( *((_DWORD *)v12 + 44) == 2 )
      goto LABEL_28;
    goto LABEL_27;
  }
  v14 = *((_DWORD *)ActiveManipulation + 105);
  if ( *((_DWORD *)ActiveManipulation + 107) != 6 )
  {
    if ( (unsigned int)(v14 - 2) <= 2 )
    {
      if ( *((_DWORD *)v12 + 44) != 1 )
      {
        CInteractionTracker::TransitionToInContact(v12);
        goto LABEL_28;
      }
      if ( (unsigned int)(v14 - 2) <= 2 )
        goto LABEL_28;
    }
    v15 = *((_DWORD *)v12 + 44);
    if ( v15 == 2 )
      goto LABEL_28;
    if ( !v15 )
      CInteractionTracker::TransitionToInContact(v12);
LABEL_27:
    CInteractionTracker::TransitionToInertia((__int64)v12, 0);
    goto LABEL_28;
  }
  CInteractionTracker::ProcessMousewheelManipulation(v12);
LABEL_28:
  *((_BYTE *)this + 120) = 0;
}
