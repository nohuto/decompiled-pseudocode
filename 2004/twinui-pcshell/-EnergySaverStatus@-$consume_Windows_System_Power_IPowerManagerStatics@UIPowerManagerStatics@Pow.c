/*
 * XREFs of ?EnergySaverStatus@?$consume_Windows_System_Power_IPowerManagerStatics@UIPowerManagerStatics@Power@System@Windows@winrt@@@impl@winrt@@QEBA?AW40Power@System@Windows@3@XZ @ 0x18009983C
 * Callers:
 *     ??$call@AEAV_lambda_64579cffbd4724e9a4ba09ce2deae2f2_@@@?$factory_cache_entry@UPowerManager@Power@System@Windows@winrt@@UIPowerManagerStatics@2345@@impl@winrt@@QEAA?AW4EnergySaverStatus@Power@System@Windows@2@AEAV_lambda_64579cffbd4724e9a4ba09ce2deae2f2_@@@Z @ 0x1800988CC (--$call@AEAV_lambda_64579cffbd4724e9a4ba09ce2deae2f2_@@@-$factory_cache_entry@UPowerManager@Powe.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180095E84 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_System_Power_IPowerManagerStatics<winrt::Windows::System::Power::IPowerManagerStatics>::EnergySaverStatus(
        _QWORD *a1)
{
  unsigned int v1; // eax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 48LL))(*a1, &v3);
  winrt::check_hresult(v1);
  return v3;
}
