/*
 * XREFs of PspChangeProcessExecutionState @ 0x14065E324
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x1402D9670 (PspExecuteJobFreezeThawCallback.c)
 *     PspRemoveProcessFromJobChain @ 0x14065DF9C (PspRemoveProcessFromJobChain.c)
 *     PspAssignProcessToJob @ 0x1406741DC (PspAssignProcessToJob.c)
 *     PspInsertThread @ 0x1406F3184 (PspInsertThread.c)
 *     PsSwapProcessWorkingSet @ 0x140903330 (PsSwapProcessWorkingSet.c)
 * Callees:
 *     MmGetSessionById @ 0x14022BBB0 (MmGetSessionById.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MmInSwapWorkingSet @ 0x1402CBE58 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1402CC124 (MmOutSwapWorkingSet.c)
 *     ExReleaseExtensionTable @ 0x1402D3FCC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1402D3FE8 (ExGetExtensionTable.c)
 *     MmDetachSession @ 0x14035DA40 (MmDetachSession.c)
 *     MmAttachSession @ 0x14035DAE0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PsThawProcess @ 0x1406CF790 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x1406CF908 (PsFreezeProcess.c)
 */

__int64 __fastcall PspChangeProcessExecutionState(PEPROCESS Process, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // r15d
  char v5; // r13
  unsigned __int32 DirectoryTableBase; // eax
  struct _DMA_ADAPTER *v8; // rbp
  __int64 DirectoryTableBase_low; // rdx
  unsigned int v10; // ebx
  unsigned int v11; // esi
  unsigned __int32 v13; // ett
  char v14; // r12
  char v15; // r14
  unsigned int SessionId; // eax
  _KPROCESS *SessionById; // rax
  char v18; // r14
  __int64 v19; // r8
  bool v20; // zf
  unsigned __int32 v21; // eax
  void (__fastcall **ExtensionTable)(PEPROCESS); // rax
  int v23; // eax
  char v24; // [rsp+20h] [rbp-98h]
  _OWORD v25[3]; // [rsp+28h] [rbp-90h] BYREF
  _OWORD v26[3]; // [rsp+58h] [rbp-60h] BYREF

  v24 = 0;
  v4 = 0;
  memset(v26, 0, sizeof(v26));
  v5 = 0;
  memset(v25, 0, sizeof(v25));
  _m_prefetchw(&Process[1].DirectoryTableBase);
  DirectoryTableBase = Process[1].DirectoryTableBase;
  v8 = 0LL;
  DirectoryTableBase_low = 0x40000000LL;
  while ( (DirectoryTableBase & 0x40000000) == 0 )
  {
    v10 = (DirectoryTableBase >> 28) & 3;
    v11 = (DirectoryTableBase >> 22) & 3;
    if ( v10 == v11 )
      break;
    v13 = DirectoryTableBase;
    DirectoryTableBase = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                           DirectoryTableBase | 0x40000000,
                           DirectoryTableBase);
    if ( v13 == DirectoryTableBase )
    {
LABEL_6:
      v14 = 0;
      v15 = v11 ^ v10;
      if ( !v5 )
      {
        KiStackAttachProcess(Process, 0LL, (__int64)v26, a4);
        SessionId = MmGetSessionIdEx((__int64)Process);
        if ( SessionId != -1 )
        {
          SessionById = (_KPROCESS *)MmGetSessionById(SessionId);
          v8 = (struct _DMA_ADAPTER *)SessionById;
          if ( SessionById )
          {
            if ( (int)MmAttachSession(SessionById, (__int64)v25) < 0 )
            {
              HalPutDmaAdapter(v8);
              v8 = 0LL;
            }
          }
        }
        v5 = 1;
      }
      if ( (v15 & 2) != 0 )
      {
        if ( (v10 & 2) != 0 )
          v14 = 1;
        else
          MmInSwapWorkingSet(Process);
      }
      if ( (v15 & 1) != 0 )
      {
        v18 = 1;
        v24 = 1;
        LOBYTE(DirectoryTableBase_low) = 1;
        if ( (v10 & 1) != 0 )
          PsFreezeProcess(Process, DirectoryTableBase_low);
        else
          PsThawProcess(Process, DirectoryTableBase_low);
      }
      else
      {
        v18 = v24;
      }
      v11 = v10;
      if ( v14 )
      {
        v23 = MmOutSwapWorkingSet(Process, PspOutSwapSharedPages != 0);
        if ( v23 < 0 )
        {
          if ( v23 == -1073741671 )
            v4 = -1073741671;
          v11 = v10 & 0xFFFFFFFD;
        }
      }
      _m_prefetchw(&Process[1].DirectoryTableBase);
      DirectoryTableBase_low = LODWORD(Process[1].DirectoryTableBase);
      v19 = v10;
      do
      {
        v10 = ((unsigned int)DirectoryTableBase_low >> 28) & 3;
        if ( v10 != (_DWORD)v19 && v10 != v11 )
          goto LABEL_6;
        v21 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                DirectoryTableBase_low & 0x8F3FFFFF | ((v11 | (v11 << 6)) << 22),
                DirectoryTableBase_low);
        v20 = (_DWORD)DirectoryTableBase_low == v21;
        DirectoryTableBase_low = v21;
      }
      while ( !v20 );
      if ( v8 )
      {
        MmDetachSession((__int64)v8, (__int64)v25);
        HalPutDmaAdapter(v8);
      }
      KiUnstackDetachProcess((__int64)v26, 0LL, v19, a4);
      if ( v18 )
      {
        ExtensionTable = (void (__fastcall **)(PEPROCESS))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
        if ( ExtensionTable )
        {
          (*ExtensionTable)(Process);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
        }
      }
      return v4;
    }
  }
  return v4;
}
