/*
 * XREFs of ??1ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ @ 0x18015761C
 * Callers:
 *     ??1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x180157BE8 (--1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetWorkThreadId@ChainedThreadpoolWorker@ThreadHelpers@@QEAAKXZ @ 0x180048FC4 (-GetWorkThreadId@ChainedThreadpoolWorker@ThreadHelpers@@QEAAKXZ.c)
 *     ?Close@?$HandleT@VThreadpoolTimerTraitsImpl@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x180159CDC (-Close@-$HandleT@VThreadpoolTimerTraitsImpl@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@M.c)
 *     ?WaitForCompletion@ChainedThreadpoolWorker@ThreadHelpers@@QEAAXXZ @ 0x1801668D0 (-WaitForCompletion@ChainedThreadpoolWorker@ThreadHelpers@@QEAAXXZ.c)
 *     ?_Tidy@?$deque@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1801671D8 (-_Tidy@-$deque@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIUnknown@@@WRL@Micro.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@V?$allocator@V?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@@2@@std@@AEAAXXZ @ 0x180167280 (-_Tidy@-$deque@V-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@V-$allocator@V-$shared_ptr@V-$funct.c)
 */

void __fastcall ThreadHelpers::ChainedThreadpoolWorker::~ChainedThreadpoolWorker(RTL_SRWLOCK *this)
{
  struct _TP_WORK *Ptr; // rsi
  RTL_SRWLOCK *v3; // rbp
  int WorkThreadId; // ebx
  const char *v5; // r9
  PVOID v6; // rcx
  PVOID v7; // rcx
  std::_Ref_count_base *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Ptr = 0LL;
  v3 = this + 2;
  AcquireSRWLockExclusive(this + 2);
  BYTE1(this[15].Ptr) = 1;
  if ( BYTE2(this[15].Ptr) )
  {
    WorkThreadId = ThreadHelpers::ChainedThreadpoolWorker::GetWorkThreadId((ThreadHelpers::ChainedThreadpoolWorker *)this);
    if ( GetCurrentThreadId() == WorkThreadId )
    {
      if ( this[7].Ptr )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          188LL,
          (__int64)"onecoreuap\\analog\\Common\\inc\\ThreadHelpers.h",
          v5);
        JUMPOUT(0x180157744LL);
      }
      Ptr = (struct _TP_WORK *)this[14].Ptr;
      this[14].Ptr = 0LL;
    }
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( Ptr )
    CloseThreadpoolWork(Ptr);
  else
    ThreadHelpers::ChainedThreadpoolWorker::WaitForCompletion((ThreadHelpers::ChainedThreadpoolWorker *)this);
  this[13].Ptr = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolWorkTraits>::`vftable';
  Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::Close();
  std::deque<Microsoft::WRL::ComPtr<IUnknown>>::_Tidy(&this[8]);
  v6 = this[8].Ptr;
  this[8].Ptr = 0LL;
  std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x10);
  std::deque<std::shared_ptr<std::function<void (void)>>>::_Tidy(&this[3]);
  v7 = this[3].Ptr;
  this[3].Ptr = 0LL;
  std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x10);
  v8 = (std::_Ref_count_base *)this[1].Ptr;
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
}
