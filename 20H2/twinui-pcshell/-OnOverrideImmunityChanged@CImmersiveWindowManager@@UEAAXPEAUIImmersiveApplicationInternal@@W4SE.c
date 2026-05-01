/*
 * XREFs of ?OnOverrideImmunityChanged@CImmersiveWindowManager@@UEAAXPEAUIImmersiveApplicationInternal@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@@Z @ 0x18015EDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18000C9B8 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18015A108 (WPP_SF_.c)
 *     WPP_SF_d @ 0x18015A238 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveWindowManager::OnOverrideImmunityChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 result; // rax
  unsigned int v8; // ebx
  void (__fastcall *v9)(__int64, struct IImmersiveMonitor **); // rbx
  struct IImmersiveMonitor *v10; // [rsp+48h] [rbp+10h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 400LL))(a2);
  if ( (_BYTE)result )
  {
    if ( a4 == 1 )
    {
      v8 = 2;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_07b3670f9f4439827ac38cdc0ee4b4bb_Traceguids);
    }
    else
    {
      v10 = 0LL;
      v9 = *(void (__fastcall **)(__int64, struct IImmersiveMonitor **))(*(_QWORD *)a2 + 464LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
      v9(a2, &v10);
      v8 = (CReportWindowVisibilityChange::IsReportingEnabled(
              (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
              (struct IUnknown *)v10,
              0LL) != 0)
         + 1;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_07b3670f9f4439827ac38cdc0ee4b4bb_Traceguids, v8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    }
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)a2 + 264LL))(a2, v8, a3, a4, 1);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 272LL))(a2, a3, a4);
  }
  return result;
}
