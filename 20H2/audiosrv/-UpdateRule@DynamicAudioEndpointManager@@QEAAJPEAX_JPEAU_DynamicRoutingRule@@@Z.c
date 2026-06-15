/*
 * XREFs of ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z @ 0x180113620
 * Callers:
 *     PolicyConfigUpdateDynamicRoutingRule @ 0x1800DA250 (PolicyConfigUpdateDynamicRoutingRule.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CB034 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z @ 0x1801132E8 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z.c)
 */

__int64 __fastcall DynamicAudioEndpointManager::UpdateRule(
        DynamicAudioEndpointManager *this,
        void *a2,
        __int64 a3,
        struct _DynamicRoutingRule *a4)
{
  DynamicAudioEndpointManager *v7; // rbp
  int v8; // eax
  int updated; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IAudioProcess *v12; // [rsp+30h] [rbp+8h] BYREF

  v7 = g_DynamicAudioEndpointManager;
  v12 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v12);
  v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                + 32LL))(
         g_PolicyManager,
         a2,
         &v12);
  updated = v8;
  if ( v8 >= 0 )
  {
    updated = DynamicAudioEndpointManager::UpdateRule(v7, v12, a3, a4);
    if ( updated >= 0 )
      updated = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E5,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v8);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
  return (unsigned int)updated;
}
