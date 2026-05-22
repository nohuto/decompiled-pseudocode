/*
 * XREFs of ??$As@UIMagnifierControllerProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMagnifierControllerProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F20C4
 * Callers:
 *     ??$GetAttachedObject@UIMagnifierControllerProxy@@VMagnifierControllerProxy@@@InputSite@@QEAA?AV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@XZ @ 0x18017C4BC (--$GetAttachedObject@UIMagnifierControllerProxy@@VMagnifierControllerProxy@@@InputSite@@QEAA-AV-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IMagnifierControllerProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2);
  return v4(v2, &GUID_b5135dce_13f2_00ca_8db4_0bd6f94fc834, a2);
}
