/*
 * XREFs of ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18001B650
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcess::InactivityTimerCallback(
        PTP_CALLBACK_INSTANCE Instance,
        volatile signed __int32 *Context,
        PTP_TIMER Timer)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v5; // rbx
  int v6; // edi

  _InterlockedIncrement(Context + 2);
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
  if ( v5 )
  {
    v5[1] = Context;
    *v5 = &CProcessCategoryDowngradedWorkItem::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5 == 0LL ? 0x8007000E : 0;
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    if ( v6 >= 0 )
      v5 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 8LL))(v5, 1LL);
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, &WPP_c6f978e82fd73817a9c6bd1960ca45a6_Traceguids, v6);
    }
    AudPolicyLogError("CProcessCategoryDowngradedWorkItem::CreateInstance", 613, v6);
  }
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x30u, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids, v6);
    }
    AudPolicyLogError("CProcess::InactivityTimerCallback", 3601, v6);
  }
}
