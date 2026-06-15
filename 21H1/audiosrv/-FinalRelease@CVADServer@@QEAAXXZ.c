/*
 * XREFs of ?FinalRelease@CVADServer@@QEAAXXZ @ 0x1800506C0
 * Callers:
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x180050560 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x180035CE8 (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052DD0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x18006D68C (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BBF40 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1800CC060 (WPP_SF_qq.c)
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x1800CCA80 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVADServer::FinalRelease(CVADServer *this)
{
  std::_Ref_count_base *v2; // rcx
  CServerAudioSessionControl *v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // rdx
  CAudioSessionManager *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // r10
  __int64 v10; // rcx
  bool i; // zf
  __int64 v12; // rdx

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids, this);
  }
  *((_QWORD *)this + 57) = 0LL;
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 58);
  *((_QWORD *)this + 58) = 0LL;
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (CServerAudioSessionControl *)*((_QWORD *)this + 20);
  if ( v3 )
    CServerAudioSessionControl::RemoveClientReference(v3);
  if ( *((_QWORD *)this + 24) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        13LL,
        &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids,
        *((_QWORD *)this + 24),
        *(_QWORD *)(*((_QWORD *)this + 24) + 56LL));
    }
    v5 = (_QWORD *)*((_QWORD *)this + 24);
    if ( v5[7] )
    {
      if ( *((_BYTE *)this + 188) )
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 304LL))(*((_QWORD *)this + 21));
        v5 = (_QWORD *)*((_QWORD *)this + 24);
      }
      LOBYTE(v4) = 1;
      (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**((_QWORD **)this + 21) + 312LL))(
        *((_QWORD *)this + 21),
        v5,
        v4);
      v5 = (_QWORD *)*((_QWORD *)this + 24);
    }
    (*(void (__fastcall **)(_QWORD *))(*v5 + 64LL))(v5);
    *((_QWORD *)this + 24) = 0LL;
    if ( this != (CVADServer *)-224LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  }
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids,
      *((_QWORD *)this + 21));
    v6 = WPP_GLOBAL_Control;
  }
  v7 = *((_QWORD *)this + 21);
  if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 21));
    *((_QWORD *)this + 21) = 0LL;
    v6 = WPP_GLOBAL_Control;
  }
  if ( v6 != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)v6 + 7) & 0x100) != 0 && *((_BYTE *)v6 + 25) >= 5u )
    {
      WPP_SF_(*((_QWORD *)v6 + 2), 15LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids);
      v6 = WPP_GLOBAL_Control;
    }
    if ( v6 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v6 + 7) & 0x100) != 0
      && *((_BYTE *)v6 + 25) >= 5u )
    {
      WPP_SF_q(*((_QWORD *)v6 + 2), 16LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids, *((_QWORD *)this + 19));
      v6 = WPP_GLOBAL_Control;
    }
  }
  v8 = *((_QWORD *)this + 19);
  if ( v8 )
  {
    if ( !ATL::SafeDecrementReferenceMultiThread((int *)(v8 + 12)) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 104LL))(v9, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                          + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    *((_QWORD *)this + 19) = 0LL;
    v6 = WPP_GLOBAL_Control;
  }
  if ( v6 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v6 + 7) & 0x100) != 0
    && *((_BYTE *)v6 + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)v6 + 2), 17LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids);
  }
  EnterCriticalSection(&g_csVadList);
  v10 = g_VADServerList;
  for ( i = g_VADServerList == 0; !i; i = v12 == 0 )
  {
    v12 = *(_QWORD *)v10;
    if ( *(CVADServer **)(v10 + 16) == this )
    {
      if ( v10 == g_VADServerList )
        g_VADServerList = *(_QWORD *)v10;
      else
        **(_QWORD **)(v10 + 8) = v12;
      if ( v10 == qword_18019E9F8 )
        qword_18019E9F8 = *(_QWORD *)(v10 + 8);
      else
        *(_QWORD *)(*(_QWORD *)v10 + 8LL) = *(_QWORD *)(v10 + 8);
      *(_QWORD *)v10 = qword_18019EA10;
      qword_18019EA10 = v10;
      if ( !--qword_18019EA00 )
        ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll((__int64)&g_VADServerList);
      break;
    }
    v10 = *(_QWORD *)v10;
  }
  LeaveCriticalSection(&g_csVadList);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids, this);
  }
}
