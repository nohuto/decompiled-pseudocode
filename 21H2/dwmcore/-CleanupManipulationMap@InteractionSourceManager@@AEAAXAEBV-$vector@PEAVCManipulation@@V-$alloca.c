/*
 * XREFs of ?CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@@Z @ 0x180263E30
 * Callers:
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x180264B5C (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180192054 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180263474 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x180263C04 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uer.c)
 *     ??0?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z @ 0x180263C38 (--0-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z.c)
 *     ??H?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x180263DA4 (--H-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uerr_retu.c)
 *     ?IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z @ 0x1802645D4 (-IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180265670 (-erase@-$_Hash@V-$_Umap_traits@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1802658EC (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$al_ea_1802658EC.c)
 *     ?ClearAllConfigurations@CChainingHelper@@QEAAXXZ @ 0x1802663BC (-ClearAllConfigurations@CChainingHelper@@QEAAXXZ.c)
 */

void __fastcall InteractionSourceManager::CleanupManipulationMap(InteractionSourceManager *this, _QWORD **a2)
{
  __int64 **v2; // r13
  __int64 *v3; // rdi
  __int64 **v5; // rbx
  __int64 *v6; // rsi
  _QWORD *v7; // rax
  __int64 *v8; // r14
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 *v15; // rbx
  __int64 *v16; // r14
  void *v17[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 *v18; // [rsp+30h] [rbp-49h]
  _QWORD v19[3]; // [rsp+38h] [rbp-41h] BYREF
  __int64 v20[3]; // [rsp+68h] [rbp-11h] BYREF
  char v21[80]; // [rsp+80h] [rbp+7h] BYREF
  char *v22; // [rsp+E0h] [rbp+67h]
  _QWORD **v23; // [rsp+E8h] [rbp+6Fh]

  v23 = a2;
  v2 = (__int64 **)*((_QWORD *)this + 3);
  v22 = (char *)this + 16;
  v3 = 0LL;
  *(_OWORD *)v17 = 0LL;
  v5 = (__int64 **)*v2;
  v6 = 0LL;
  v18 = 0LL;
  while ( v5 != v2 )
  {
    v7 = *a2;
    v8 = (__int64 *)(v5 + 2);
    if ( *a2 == a2[1] )
    {
LABEL_6:
      if ( v6 == v3 )
      {
        std::vector<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const &>(
          (__int64 **)v17,
          v6,
          v5 + 2);
        v3 = v18;
        v6 = (__int64 *)v17[1];
      }
      else
      {
        wil::com_ptr_t<CManipulation,wil::err_returncode_policy>::com_ptr_t<CManipulation,wil::err_returncode_policy>(
          v6++,
          *v8);
        v17[1] = v6;
      }
      if ( InteractionSourceManager::IsManipulationActive(this, (const struct CManipulation *)*v8) )
      {
        CChainingHelper::ClearAllConfigurations((CChainingHelper *)v5[3]);
        v19[1] = 0LL;
        v9 = 0LL;
        v10 = *((_QWORD *)this + 13);
        v11 = *((_QWORD *)this + 10);
        v12 = *v8;
        v19[2] = v10;
        for ( v19[0] = v11; v9 < *((_QWORD *)this + 14); ++v9 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * ((*((_QWORD *)this + 12) - 1LL) & ((v10 + v9) >> 1)))
                         + 8LL * (((_DWORD)v10 + (_DWORD)v9) & 1)) == v12 )
            break;
        }
        v13 = std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>::operator+((__int64)v19);
        v14 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>(
                v20,
                v13);
        std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::erase((char *)this + 80, v21, v14);
        *((_BYTE *)this + 120) = 1;
      }
      CResource::UnRegisterNotifierInternal(*(CResource **)(*((_QWORD *)this + 1) + 16LL), (struct CResource *)*v8);
      a2 = v23;
    }
    else
    {
      while ( *v8 != *v7 )
      {
        if ( ++v7 == a2[1] )
          goto LABEL_6;
      }
    }
    v5 = (__int64 **)*v5;
  }
  v15 = (__int64 *)v17[0];
  v16 = (__int64 *)v17[0];
  if ( v17[0] != v6 )
  {
    do
      std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::erase(
        v22,
        v16++);
    while ( v16 != v6 );
    v15 = (__int64 *)v17[0];
  }
  if ( v15 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      v15,
      v6);
    std::_Deallocate<16,0>(v15, ((char *)v3 - (char *)v15) & 0xFFFFFFFFFFFFFFF8uLL);
  }
}
