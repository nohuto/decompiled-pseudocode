/*
 * XREFs of ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C0006A00
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002A00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C00069B4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0006C64 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C0117814 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

void __fastcall DxgkProcessNotify(unsigned __int64 Process, __int64 ProcessId, PPS_CREATE_NOTIFY_INFO CreateInfo)
{
  unsigned int v3; // r14d
  struct DXGTHREAD *v4; // rbx
  PEPROCESS v6; // rdi
  __int64 v7; // r15
  struct DXGTHREAD *Current; // rax
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGPROCESS *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  DXGFASTMUTEX *v22; // [rsp+20h] [rbp-10h] BYREF
  char v23; // [rsp+28h] [rbp-8h]

  v3 = -1;
  v4 = 0LL;
  v6 = (PEPROCESS)Process;
  v7 = qword_1C00B19B0 & 2;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v3 = 3;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(Process, &EventProfilerEnter, CreateInfo, 3LL);
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v4 = Current;
    if ( Current )
    {
      v9 = *((_DWORD *)Current + 9);
      if ( !v9 )
        *((_DWORD *)Current + 10) = 3;
      Process = (unsigned int)(v9 + 1);
      *((_DWORD *)Current + 9) = Process;
    }
  }
  if ( !CreateInfo )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v10 = WdLogNewEntry5_WdAssertion(Process, ProcessId);
      *(_QWORD *)(v10 + 24) = 2238LL;
      WdLogEvent5_WdAssertion(v10);
    }
    v23 = 0;
    v22 = (DXGFASTMUTEX *)((char *)DXGGLOBAL::m_pGlobal + 320);
    if ( DXGGLOBAL::m_pGlobal == (PVOID)-320LL )
    {
      v11 = WdLogNewEntry5_WdAssertion(Process, ProcessId);
      *(_QWORD *)(v11 + 24) = 762LL;
      WdLogEvent5_WdAssertion(v11);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v22 + 2) == CurrentThread )
    {
      v13 = WdLogNewEntry5_WdAssertion(CurrentThread, ProcessId);
      *(_QWORD *)(v13 + 24) = 769LL;
      WdLogEvent5_WdAssertion(v13);
    }
    if ( v23 )
    {
      v14 = WdLogNewEntry5_WdCriticalError(CurrentThread, ProcessId);
      *(_QWORD *)(v14 + 40) = &v22;
      *(_QWORD *)(v14 + 24) = 275LL;
      *(_QWORD *)(v14 + 32) = 4LL;
      *(_OWORD *)(v14 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v14);
    }
    DXGFASTMUTEX::Acquire(v22);
    v23 = 1;
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(v6);
    v16 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      *((_BYTE *)ProcessDxgProcess + 347) |= 0x80u;
      DXGPROCESS::AcquireReference(ProcessDxgProcess);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v22, v17);
      DXGPROCESS::DestroyDxgProcess(v16);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v22);
      DXGPROCESS::ReleaseReference(v16, v18);
    }
    if ( v23 )
    {
      v23 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v22, ProcessId);
    }
  }
  if ( v4 )
  {
    v19 = *((_DWORD *)v4 + 9);
    if ( !v19 )
    {
      v20 = WdLogNewEntry5_WdAssertion(Process, ProcessId);
      *(_QWORD *)(v20 + 24) = 320LL;
      WdLogEvent5_WdAssertion(v20);
      v19 = *((_DWORD *)v4 + 9);
    }
    v21 = v19 - 1;
    *((_DWORD *)v4 + 9) = v21;
    if ( !v21 )
      *((_DWORD *)v4 + 10) = -1;
  }
  if ( v7 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(Process, &EventProfilerExit, CreateInfo, v3);
  if ( !CreateInfo )
    PsSetThreadProperty(KeGetCurrentThread(), 1750366276LL, 0LL);
}
