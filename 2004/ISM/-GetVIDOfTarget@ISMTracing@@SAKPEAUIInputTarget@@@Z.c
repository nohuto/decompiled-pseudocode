/*
 * XREFs of ?GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800B7CF8
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180019D80 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?MPCInputRouter_SupportedInputUpdatedForTarget_@ISMTracing@@QEAAXKPEAUIUnknown@@@Z @ 0x180029EF8 (-MPCInputRouter_SupportedInputUpdatedForTarget_@ISMTracing@@QEAAXKPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x180033780 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B6E78 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

__int64 __fastcall ISMTracing::GetVIDOfTarget(struct IInputTarget *a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  v3 = 0;
  if ( a1 )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1;
    Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef((__int64 *)&v5);
    v4 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(&v5, &v4) >= 0 && v4 )
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v4 + 48LL))(v4, &v3);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v5);
    return v3;
  }
  return v1;
}
