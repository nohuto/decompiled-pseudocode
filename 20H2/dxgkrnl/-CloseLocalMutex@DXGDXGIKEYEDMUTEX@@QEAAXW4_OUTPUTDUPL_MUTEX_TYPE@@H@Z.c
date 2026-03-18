/*
 * XREFs of ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C029798C
 * Callers:
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C02975E4 (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C02976BC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C02A0794 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C02A0884 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C028F1BC (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C028F3B0 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseLocalMutex(__int64 a1, int a2, __int64 a3)
{
  int v3; // esi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  char v17; // [rsp+30h] [rbp-18h]

  v15 = -1;
  v3 = a3;
  v16 = 0LL;
  v5 = a2;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 11001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 11001);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 11001LL);
  v7 = 3 * v5;
  v8 = *(unsigned int *)(a1 + 8 * v7 + 16);
  if ( v3 )
  {
    if ( (int)DXGKEYEDMUTEX::DestroyLocal(v8, v6) >= 0 )
      goto LABEL_11;
    v11 = WdLogNewEntry5_WdAssertion(v12, v9);
    *(_QWORD *)(v11 + 24) = 661LL;
  }
  else
  {
    if ( DXGKEYEDMUTEX::DestroyHandle(v8, v6) )
      goto LABEL_11;
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v11 + 24) = 656LL;
  }
  WdLogEvent5_WdAssertion(v11);
LABEL_11:
  *(_DWORD *)(a1 + 8 * v7 + 16) = 0;
  *(_QWORD *)(a1 + 8 * v7 + 24) = 0LL;
  *(_QWORD *)(a1 + 8 * v7 + 32) = 0LL;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15, v9);
  if ( v17 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v15);
  }
}
