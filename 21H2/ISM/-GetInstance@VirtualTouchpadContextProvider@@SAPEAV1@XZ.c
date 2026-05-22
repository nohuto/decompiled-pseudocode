/*
 * XREFs of ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x180145E3C
 * Callers:
 *     ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1800444B0 (-Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1800F0940 (-OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnTouchpadRectChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1800F0AA0 (-OnTouchpadRectChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x18012CEE0 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 * Callees:
 *     atexit @ 0x18003BC9C (atexit.c)
 *     _Init_thread_footer @ 0x18003C608 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18003C670 (_Init_thread_header.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___ @ 0x180145848 (wil--init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___.c)
 */

struct VirtualTouchpadContextProvider *VirtualTouchpadContextProvider::GetInstance(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int inited; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = 16LL;
  v1 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_18020A504 > *(_DWORD *)(v1 + 16) )
  {
    Init_thread_header(&dword_18020A504);
    if ( dword_18020A504 == -1 )
    {
      atexit(VirtualTouchpadContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_18020A504);
    }
  }
  inited = wil::init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___(v1, v0, &v5);
  if ( inited < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      555LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h",
      (const char *)(unsigned int)inited);
    __debugbreak();
  }
  return qword_1802098D0;
}
