/*
 * XREFs of ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0083294
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008B6F0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001CC0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002354 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0012368 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0024290 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C0083218 (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C008326C (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0083424 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0083564 (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00C0D2C (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C00C10A8 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::Resume(VIDMM_DEVICE *this, bool a2, bool *a3, struct VIDMM_ALLOC **a4)
{
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  VIDMM_GLOBAL *v12; // rcx
  __int64 v13; // rbx
  ULONG TimeIncrement; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  bool v17; // zf
  int v18; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rbx
  VIDMM_COMMIT_TELEMETRY *v24; // rcx
  _BYTE v25[8]; // [rsp+30h] [rbp-38h] BYREF
  DXGPUSHLOCK *v26; // [rsp+38h] [rbp-30h]
  int v27; // [rsp+40h] [rbp-28h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v20 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v20 + 24) = this;
    *(_QWORD *)(v20 + 32) = *((_DWORD *)this + 13) & 7;
  }
  *((_BYTE *)this + 50) |= 2u;
  v8 = 0;
  v9 = *((_QWORD *)this + 4);
  if ( v9 && (*(_BYTE *)(v9 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 200), 0, 0))
    || (v8 = VIDMM_GLOBAL::TryPageInDevice(*(VIDMM_GLOBAL **)this, this, a2, a3, a4), v8 >= 0) )
  {
    VIDMM_DEVICE::ResumePagingQueues(this);
    VIDMM_DEVICE::ResumeSchedulerDevice(this);
    VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
      *(VIDMM_GLOBAL **)this,
      *((struct VIDMM_PROCESS **)this + 1),
      this,
      1);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25, (struct _KTHREAD **)(*(_QWORD *)this + 44472LL), 0);
    DXGPUSHLOCK::AcquireExclusive(v26);
    v27 = 2;
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v12, (struct _LIST_ENTRY *)((char *)this + 184));
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
    v13 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    *((_BYTE *)this + 50) &= 0xEDu;
    *((_QWORD *)this + 30) = 0LL;
    v16 = *((_QWORD *)this + 29) + v13 * TimeIncrement;
    v17 = (*((_BYTE *)this + 50) & 4) == 0;
    *((_QWORD *)this + 28) = v16;
    *((_QWORD *)this + 29) = 0LL;
    if ( !v17 )
    {
      --*(_DWORD *)(*(_QWORD *)this + 44616LL);
      *((_BYTE *)this + 50) &= ~4u;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v16);
      v22[3] = this;
      v16 = *((_DWORD *)this + 13) & 7;
      v22[5] = 0LL;
      v22[4] = v16;
    }
    v18 = *((_DWORD *)this + 13);
    if ( (*((_BYTE *)this + 52) & 7) == 3 )
    {
      v16 = *(_QWORD *)(*((_QWORD *)this + 3) + 40LL);
      if ( *(_BYTE *)(v16 + 346) )
      {
        v23 = **(_QWORD **)this + 208LL;
        VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)v23, *(struct VIDMM_GLOBAL **)this, this, 0LL);
        VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(v24, this, 0);
        *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v23 + 16) = 0LL;
        *(_QWORD *)v23 = 0LL;
        *(_BYTE *)(v23 + 24) = 0;
        v18 = *((_DWORD *)this + 13);
      }
    }
    *((_DWORD *)this + 13) = v18 & 0xFFFFFFF8;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      McTemplateK0p_EtwWriteTransfer(v16, &EventVidMmResumeDevice, v15, *((_QWORD *)this + 3));
  }
  else
  {
    v21 = WdLogNewEntry5_WdWarning(v11, v10);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdWarning(v21);
    *((_BYTE *)this + 50) &= ~2u;
  }
  return (unsigned int)v8;
}
