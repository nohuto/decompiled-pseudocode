/*
 * XREFs of ?ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180016560
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcess::ProcessTerminationWatcherCallback(
        PTP_CALLBACK_INSTANCE Instance,
        volatile signed __int32 *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v6; // rbx
  int v7; // edi

  _InterlockedIncrement(Context + 2);
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
  if ( v6 )
  {
    v6[1] = Context;
    *v6 = &CProcessTerminatedWorkItem::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  v7 = v6 == 0LL ? 0x8007000E : 0;
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
    if ( v7 >= 0 )
      v6 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 8LL))(v6, 1LL);
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_c6f978e82fd73817a9c6bd1960ca45a6_Traceguids, v7);
    }
    AudPolicyLogError("CProcessTerminatedWorkItem::CreateInstance", 679, v7);
  }
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids, v7);
    }
    AudPolicyLogError("CProcess::ProcessTerminationWatcherCallback", 3944, v7);
  }
}
