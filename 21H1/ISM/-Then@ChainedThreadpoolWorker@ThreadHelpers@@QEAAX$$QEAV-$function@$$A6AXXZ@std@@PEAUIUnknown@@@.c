/*
 * XREFs of ?Then@ChainedThreadpoolWorker@ThreadHelpers@@QEAAX$$QEAV?$function@$$A6AXXZ@std@@PEAUIUnknown@@@Z @ 0x180166530
 * Callers:
 *     ?InvokeNodePoseValidityChangedCallbacksAsync@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_VALIDITY_FLAGS@@@Z @ 0x180160154 (-InvokeNodePoseValidityChangedCallbacksAsync@SpatialGraphDriverHandleWrapper@Holographic@Interna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA18 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Push_back_internal@?$deque@V?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@V?$allocator@V?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@@2@@std@@AEAAX$$QEAV?$shared_ptr@V?$function@$$A6AXXZ@std@@@2@@Z @ 0x1800D4218 (-_Push_back_internal@-$deque@V-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@V-$allocator@V-$share.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z @ 0x180156A1C (--0-$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z.c)
 *     ?Close@?$HandleT@VThreadpoolTimerTraitsImpl@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x18015A22C (-Close@-$HandleT@VThreadpoolTimerTraitsImpl@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@M.c)
 *     ?_Push_back_internal@?$deque@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@AEAAX$$QEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@Z @ 0x180167654 (-_Push_back_internal@-$deque@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIUnkno.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ThreadHelpers::ChainedThreadpoolWorker::Then(char *pv, __int64 a2, __int64 a3)
{
  RTL_SRWLOCK *v5; // rbp
  const char *v6; // r9
  std::_Ref_count_base *v7; // rdi
  PTP_WORK ThreadpoolWork; // rdi
  _DWORD *v9; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  std::_Ref_count_base *v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = (std::_Ref_count_base *)a3;
  v5 = (RTL_SRWLOCK *)(pv + 16);
  AcquireSRWLockExclusive((PSRWLOCK)pv + 2);
  if ( pv[122] )
  {
    if ( pv[121] )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        210LL,
        (__int64)"onecoreuap\\analog\\Common\\inc\\ThreadHelpers.h",
        v6);
      __debugbreak();
    }
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      211LL,
      (__int64)"onecoreuap\\analog\\Common\\inc\\ThreadHelpers.h",
      v6);
    __debugbreak();
  }
  v7 = (std::_Ref_count_base *)operator new(0x50uLL);
  v12 = v7;
  *((_DWORD *)v7 + 2) = 1;
  *((_DWORD *)v7 + 3) = 1;
  *(_QWORD *)v7 = &std::_Ref_count_obj<std::function<void (void)>>::`vftable';
  std::function<void (void)>::function<void (void)>((__int64)v7 + 16, a2);
  v9 = (_DWORD *)((char *)v7 + 16);
  v10 = v7;
  std::deque<std::shared_ptr<std::function<void (void)>>>::_Push_back_internal((_QWORD *)pv + 3, &v9);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  v12 = 0LL;
  std::deque<Microsoft::WRL::ComPtr<IUnknown>>::_Push_back_internal(pv + 64, &v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  if ( !pv[120] )
  {
    if ( !*((_QWORD *)pv + 14) )
    {
      ThreadpoolWork = CreateThreadpoolWork(ThreadHelpers::ChainedThreadpoolWorker::WorkCallback, pv, 0LL);
      if ( ThreadpoolWork != *((PTP_WORK *)pv + 14) )
      {
        Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::Close((__int64)(pv + 104));
        *((_QWORD *)pv + 14) = ThreadpoolWork;
      }
    }
    SubmitThreadpoolWork(*((PTP_WORK *)pv + 14));
    pv[120] = 1;
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
}
