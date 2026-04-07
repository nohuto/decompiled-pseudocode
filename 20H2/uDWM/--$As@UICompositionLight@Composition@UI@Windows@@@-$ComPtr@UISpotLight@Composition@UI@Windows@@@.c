/*
 * XREFs of ??$As@UICompositionLight@Composition@UI@Windows@@@?$ComPtr@UISpotLight@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionLight@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004664C
 * Callers:
 *     ?AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@PEAUIExpressionAnimation@634@@Z @ 0x1800462A4 (-AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpotLight>::As<Windows::UI::Composition::ICompositionLight>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rcx

  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_41a6d7c2_2e5d_4bc1_b09e_8f0a03e3d8d3,
           a2);
}
