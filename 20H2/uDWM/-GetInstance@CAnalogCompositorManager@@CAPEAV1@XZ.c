/*
 * XREFs of ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x1800388FC
 * Callers:
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x1800098D4 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x180035FC0 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180037958 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18003887C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     wistd::__function::__func__lambda_1fe009015b5481886de644cd00cd9360__void___cdecl(void)_::operator() @ 0x180080130 (wistd--__function--__func__lambda_1fe009015b5481886de644cd00cd9360__void___cdecl(void)_--operato.c)
 *     wistd::__function::__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_::operator() @ 0x180080150 (wistd--__function--__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_--operato.c)
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x180080720 (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 * Callees:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x18004A854 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 *     atexit @ 0x18005379C (atexit.c)
 *     _Init_thread_footer @ 0x1800537CC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18005383C (_Init_thread_header.c)
 */

struct CAnalogCompositorManager *CAnalogCompositorManager::GetInstance(void)
{
  CAnalogCompositorManager *v1; // rcx

  if ( dword_1800E5AF0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800E5AF0);
    if ( dword_1800E5AF0 == -1 )
    {
      CAnalogCompositorManager::CAnalogCompositorManager(v1);
      atexit(CAnalogCompositorManager::GetInstance_::_2_::_dynamic_atexit_destructor_for__singletonAnalogCompositorManager__);
      Init_thread_footer(&dword_1800E5AF0);
    }
  }
  return (struct CAnalogCompositorManager *)&qword_1800E5C90;
}
