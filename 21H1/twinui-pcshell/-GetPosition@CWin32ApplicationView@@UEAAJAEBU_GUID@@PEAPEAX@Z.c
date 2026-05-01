/*
 * XREFs of ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000AFD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_45f761d2d247477984b20cf6ec7ae807_::operator() @ 0x18000B5B8 (_lambda_45f761d2d247477984b20cf6ec7ae807_--operator().c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_f92d1ded2f5a789bc6502d5fa6951919___ @ 0x18000B904 (ShellPositionerHelpers--PerformCallbackOnView__lambda_f92d1ded2f5a789bc6502d5fa6951919___.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BA68 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18000DC90 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::GetPosition(CWin32ApplicationView *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // edi
  int v4; // ebx
  IUnknown *punk; // [rsp+70h] [rbp+30h] BYREF
  __int64 v7; // [rsp+78h] [rbp+38h] BYREF
  IUnknown **p_punk; // [rsp+80h] [rbp+40h] BYREF

  v3 = 0;
  *a3 = 0LL;
  punk = 0LL;
  p_punk = &punk;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v7);
  if ( v7 )
    lambda_45f761d2d247477984b20cf6ec7ae807_::operator()(&p_punk);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v7);
  v4 = ShellPositionerHelpers::PerformCallbackOnView__lambda_f92d1ded2f5a789bc6502d5fa6951919___(punk);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&punk);
  if ( v4 < 0 )
    return (unsigned int)v4;
  return v3;
}
