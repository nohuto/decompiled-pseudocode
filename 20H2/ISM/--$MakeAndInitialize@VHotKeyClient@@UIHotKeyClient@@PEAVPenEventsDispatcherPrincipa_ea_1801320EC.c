/*
 * XREFs of ??$MakeAndInitialize@VHotKeyClient@@UIHotKeyClient@@PEAVPenEventsDispatcherPrincipal@@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIHotKeyClient@@@WRL@Microsoft@@@012@$$QEAPEAVPenEventsDispatcherPrincipal@@$$QEA_N@Z @ 0x1801320EC
 * Callers:
 *     ??0PenEventsDispatcherPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18002FCAC (--0PenEventsDispatcherPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotKeyClient,IHotKeyClient,PenEventsDispatcherPrincipal *,bool>(
        __int64 *a1,
        _QWORD *a2,
        bool *a3)
{
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<HotKeyClient,IHotKeyClient,PenEventsDispatcherPrincipal *,bool>(
           a1,
           a2,
           a3);
}
