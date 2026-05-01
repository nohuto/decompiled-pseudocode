/*
 * XREFs of ??$_Move_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x18043D87C
 * Callers:
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$82 @ 0x18043D6EC (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_18043D6EC.c)
 * Callees:
 *     ??4?$com_ptr@UIUnknown@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18043E7A0 (--4-$com_ptr@UIUnknown@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::_Move_unchecked<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi
  int v6; // eax

  for ( i = a1; i != a2; a3 += 32LL )
  {
    *(_OWORD *)a3 = *(_OWORD *)i;
    winrt::com_ptr<IUnknown>::operator=(a3 + 16, i + 16);
    v6 = *(_DWORD *)(i + 24);
    i += 32LL;
    *(_DWORD *)(a3 + 24) = v6;
  }
  return a3;
}
