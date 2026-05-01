/*
 * XREFs of ?HandleRotationOrResolutionChange@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180330260
 * Callers:
 *     s_HandleRotationOrResolutionChange @ 0x180330750 (s_HandleRotationOrResolutionChange.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180036718 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ImmersiveMonitorHelper::HandleRotationOrResolutionChange(__int64 a1, struct IUnknown *a2, char a3)
{
  char v6; // bl
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 5) == 0 )
    return 0;
  v6 = 0;
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, int *))a2->lpVtbl[2].QueryInterface)(a2, &v9);
  if ( v7 >= 0 )
  {
    if ( v9 )
    {
      if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(a1 + 64), a2) )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 144LL))(*(_QWORD *)(a1 + 80));
        return 1;
      }
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1A1,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v7);
  }
  return v6;
}
