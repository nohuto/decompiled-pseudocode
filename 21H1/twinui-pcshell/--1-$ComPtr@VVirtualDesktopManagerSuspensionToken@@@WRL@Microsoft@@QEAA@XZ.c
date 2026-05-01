/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopManagerSuspensionToken@@@WRL@Microsoft@@QEAA@XZ @ 0x180415E94
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopManagerSuspensionToken_IUnknown_CVirtualDesktopManager____::_1_::dtor$1 @ 0x180414F28 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopManagerSuspensionToken_IU_ea_180414F28.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801C7070 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopManagerSuspensionToken>::~ComPtr<VirtualDesktopManagerSuspensionToken>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release(
             result,
             a2);
  }
  return result;
}
