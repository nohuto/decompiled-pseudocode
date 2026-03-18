/*
 * XREFs of ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C01A4390
 * Callers:
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01862D0 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01A3640 (DxgkGetAdapterDeviceDesc.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BF100 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgIsSessionUsingWddmMonitors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  struct DXGTHREAD *Current; // rax
  int v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v12 = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v8 = *((_QWORD *)Current + 3)) == 0 )
  {
    v8 = v7;
    if ( !v7 )
      return 1LL;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( !v9 )
    return 1LL;
  if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(v9 + 224))(0LL, 0LL, &v12) || v12 )
    return 1;
  return v4;
}
