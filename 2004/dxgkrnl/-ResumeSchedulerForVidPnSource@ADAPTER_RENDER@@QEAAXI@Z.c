/*
 * XREFs of ?ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C0216E44
 * Callers:
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C001A5C4 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0039504 (McTemplateK0pq_EtwWriteTransfer.c)
 */

void __fastcall ADAPTER_RENDER::ResumeSchedulerForVidPnSource(ADAPTER_RENDER *this, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8

  v3 = a2;
  v4 = *((unsigned int *)this + 159);
  if ( ((unsigned int)a2 & (unsigned int)v4) != (_DWORD)a2 )
  {
    __debugbreak();
    v5 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v5 + 24) = 2755LL;
    WdLogEvent5_WdAssertion(v5);
    LODWORD(v4) = *((_DWORD *)this + 159);
  }
  *((_DWORD *)this + 159) = v4 & ~v3;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 77) + 8LL) + 1000LL))(
    *((_QWORD *)this + 78),
    v3);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pq_EtwWriteTransfer(v6, &ResumeSchedulerForVidPnSource, v7, *((_QWORD *)this + 2), v3);
}
