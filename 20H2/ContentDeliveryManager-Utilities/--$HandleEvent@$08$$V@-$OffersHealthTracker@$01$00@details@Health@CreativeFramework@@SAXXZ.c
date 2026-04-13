/*
 * XREFs of ??$HandleEvent@$08$$V@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXXZ @ 0x18003D5D8
 * Callers:
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x18003C7C0 (_anonymous_namespace_--PlacementHealth--HandleEvent_9_.c)
 * Callees:
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x18002A6E4 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@I@Z.c)
 *     ?ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002C580 (-ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?WritePlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002C620 (-WritePlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$02$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x180041488 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$02$00@details@Health@CreativeF.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<9,>()
{
  unsigned __int64 v0; // rdi
  CreativeFramework::Health::details::BaseScenarioEvents *v1; // rbx
  volatile signed __int32 *v2; // rbx
  struct _FILETIME SystemTimeAsFileTime; // [rsp+20h] [rbp-58h] BYREF
  CreativeFramework::Health::details::BaseScenarioEvents *v4; // [rsp+28h] [rbp-50h] BYREF
  volatile signed __int32 *v5; // [rsp+30h] [rbp-48h]
  __int64 v6; // [rsp+38h] [rbp-40h]
  void *v7[4]; // [rsp+40h] [rbp-38h] BYREF

  v6 = -2LL;
  std::to_wstring(v7, 2u);
  CreativeFramework::Health::details::GenericOffersHealthTracker<3,1>::GetOrCreateBaseEventForPlacementId(&v4, v7);
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v0 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  v1 = v4;
  if ( !*((_BYTE *)v4 + 252) )
    CreativeFramework::Health::details::BaseScenarioEvents::ReadPlacementReportedInfo(v4);
  if ( v0 != *((_QWORD *)v1 + 14) )
  {
    *((_QWORD *)v1 + 14) = v0;
    *((_BYTE *)v1 + 251) = 1;
    CreativeFramework::Health::details::BaseScenarioEvents::WritePlacementReportedInfo(v1);
  }
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      v2 = v5;
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( !_InterlockedDecrement(v2 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  if ( v7[3] >= (void *)8 )
    operator delete(v7[0]);
}
