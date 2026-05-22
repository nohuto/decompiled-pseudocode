/*
 * XREFs of ??$As@UIInputForwardTargetInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputForwardTargetInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F1CA4
 * Callers:
 *     ??$GetAttachedObject@UIInputForwardTargetInputObjectProxy@@VBamoInputForwardTargetInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoInputForwardTargetInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x180176020 (--$GetAttachedObject@UIInputForwardTargetInputObjectProxy@@VBamoInputForwardTargetInputObjectPro.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IInputForwardTargetInputObjectProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2);
  return v4(v2, &GUID_d4ef4959_f5fd_4cf7_9e90_49eefb52f5a4, a2);
}
