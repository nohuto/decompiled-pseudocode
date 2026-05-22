/*
 * XREFs of ??$As@UIInputForwardAreaInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputForwardAreaInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F1BC4
 * Callers:
 *     ??$GetAttachedObject@UIInputForwardAreaInputObjectProxy@@VBamoInputForwardAreaInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoInputForwardAreaInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x180175EF8 (--$GetAttachedObject@UIInputForwardAreaInputObjectProxy@@VBamoInputForwardAreaInputObjectProxy@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IInputForwardAreaInputObjectProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2);
  return v4(v2, &GUID_9b6ce49a_112f_7a65_85c1_1bc9826244ec, a2);
}
