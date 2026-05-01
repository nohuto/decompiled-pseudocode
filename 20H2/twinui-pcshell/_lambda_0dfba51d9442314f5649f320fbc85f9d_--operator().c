/*
 * XREFs of _lambda_0dfba51d9442314f5649f320fbc85f9d_::operator() @ 0x1800AEC34
 * Callers:
 *     ??$Adapt@V_lambda_0dfba51d9442314f5649f320fbc85f9d_@@@?$CCLambdaAdapter@P6AHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z$03@@SAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x1800AEC20 (--$Adapt@V_lambda_0dfba51d9442314f5649f320fbc85f9d_@@@-$CCLambdaAdapter@P6AHPEAUHMONITOR__@@PEAU.c)
 * Callees:
 *     ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18005DA18 (-DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18032FC14 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_0dfba51d9442314f5649f320fbc85f9d_::operator()(ImmersiveMonitorHelper **a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IImmersiveMonitor *v10; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v10 = 0LL;
  v5 = *((_QWORD *)*a1 + 9);
  v6 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v5 + 72LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  v7 = v6(v5, a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v10);
  if ( v7 >= 0 )
  {
    if ( ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(*a1, v10) )
    {
      ImmersiveMonitorHelper::ConnectToMonitor(*a1, v10);
      goto LABEL_4;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDF,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v7);
  }
  v4 = 1;
LABEL_4:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return v4;
}
