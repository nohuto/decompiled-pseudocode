/*
 * XREFs of ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C012BC78
 * Callers:
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD5D0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C012A464 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C012B9C0 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C012BD58 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 */

void __fastcall ADAPTER_RENDER::ResumeScheduler(ADAPTER_RENDER *this, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rcx
  unsigned __int8 v6; // si
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rcx

  *((_DWORD *)this + 159) = 0;
  v4 = *((_QWORD *)this + 78);
  v6 = a2;
  if ( v4 )
  {
    LOBYTE(a2) = a3;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 77) + 8LL) + 768LL))(v4, a2);
    v10 = v7;
    if ( v7 < 0 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
      v11[3] = 275LL;
      v11[4] = 19LL;
      v12 = *((_QWORD *)this + 2);
      v11[7] = 0LL;
      v11[5] = v12;
      v11[6] = v10;
      WdLogEvent5_WdCriticalError(v11);
    }
    ADAPTER_RENDER::ResumeVidMmWorkerThread(this, v6, a3);
  }
}
