/*
 * XREFs of PspChangeProcessExecutionState @ 0x14062E290
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x14023CC90 (PspExecuteJobFreezeThawCallback.c)
 *     PspAssignProcessToJob @ 0x14062CE24 (PspAssignProcessToJob.c)
 *     PspRemoveProcessFromJobChain @ 0x140663918 (PspRemoveProcessFromJobChain.c)
 *     PspInsertThread @ 0x1406867E0 (PspInsertThread.c)
 *     PsSwapProcessWorkingSet @ 0x14090A230 (PsSwapProcessWorkingSet.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     MmDetachSession @ 0x14023C8A0 (MmDetachSession.c)
 *     MmAttachSession @ 0x14023C940 (MmAttachSession.c)
 *     ExReleaseExtensionTable @ 0x140262BAC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140262BC8 (ExGetExtensionTable.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     MmGetSessionById @ 0x140297320 (MmGetSessionById.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     MmInSwapWorkingSet @ 0x140339228 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1403394F4 (MmOutSwapWorkingSet.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PsThawProcess @ 0x14071C6B0 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x14071C828 (PsFreezeProcess.c)
 */

__int64 __fastcall PspChangeProcessExecutionState(PEPROCESS Process)
{
  unsigned int v1; // r15d
  char v2; // r13
  unsigned __int32 DirectoryTableBase; // eax
  struct _DMA_ADAPTER *v5; // rbp
  __int64 DirectoryTableBase_low; // rdx
  unsigned int v7; // ebx
  unsigned int v8; // esi
  unsigned __int32 v10; // ett
  char v11; // r12
  char v12; // r14
  unsigned int SessionId; // eax
  ULONG_PTR SessionById; // rax
  char v15; // r14
  unsigned int v16; // r8d
  bool v17; // zf
  unsigned __int32 v18; // eax
  void (__fastcall **ExtensionTable)(PEPROCESS); // rax
  int v20; // eax
  char v21; // [rsp+20h] [rbp-98h]
  _OWORD v22[3]; // [rsp+28h] [rbp-90h] BYREF
  _OWORD v23[3]; // [rsp+58h] [rbp-60h] BYREF

  v21 = 0;
  v1 = 0;
  memset(v23, 0, sizeof(v23));
  v2 = 0;
  memset(v22, 0, sizeof(v22));
  _m_prefetchw(&Process[1].DirectoryTableBase);
  DirectoryTableBase = Process[1].DirectoryTableBase;
  v5 = 0LL;
  DirectoryTableBase_low = 0x40000000LL;
  while ( (DirectoryTableBase & 0x40000000) == 0 )
  {
    v7 = (DirectoryTableBase >> 28) & 3;
    v8 = (DirectoryTableBase >> 22) & 3;
    if ( v7 == v8 )
      break;
    v10 = DirectoryTableBase;
    DirectoryTableBase = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                           DirectoryTableBase | 0x40000000,
                           DirectoryTableBase);
    if ( v10 == DirectoryTableBase )
    {
LABEL_6:
      v11 = 0;
      v12 = v8 ^ v7;
      if ( !v2 )
      {
        KiStackAttachProcess(Process, 0, (__int64)v23);
        SessionId = MmGetSessionIdEx((__int64)Process);
        if ( SessionId != -1 )
        {
          SessionById = MmGetSessionById(SessionId, DirectoryTableBase_low);
          v5 = (struct _DMA_ADAPTER *)SessionById;
          if ( SessionById )
          {
            if ( (int)MmAttachSession(SessionById) < 0 )
            {
              HalPutDmaAdapter(v5);
              v5 = 0LL;
            }
          }
        }
        v2 = 1;
      }
      if ( (v12 & 2) != 0 )
      {
        if ( (v7 & 2) != 0 )
          v11 = 1;
        else
          MmInSwapWorkingSet(Process);
      }
      if ( (v12 & 1) != 0 )
      {
        v15 = 1;
        v21 = 1;
        LOBYTE(DirectoryTableBase_low) = 1;
        if ( (v7 & 1) != 0 )
          PsFreezeProcess(Process, DirectoryTableBase_low);
        else
          PsThawProcess(Process, DirectoryTableBase_low);
      }
      else
      {
        v15 = v21;
      }
      v8 = v7;
      if ( v11 )
      {
        v20 = MmOutSwapWorkingSet(Process, PspOutSwapSharedPages != 0);
        if ( v20 < 0 )
        {
          if ( v20 == -1073741671 )
            v1 = -1073741671;
          v8 = v7 & 0xFFFFFFFD;
        }
      }
      _m_prefetchw(&Process[1].DirectoryTableBase);
      DirectoryTableBase_low = LODWORD(Process[1].DirectoryTableBase);
      v16 = v7;
      do
      {
        v7 = ((unsigned int)DirectoryTableBase_low >> 28) & 3;
        if ( v7 != v16 && v7 != v8 )
          goto LABEL_6;
        v18 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                DirectoryTableBase_low & 0x8F3FFFFF | ((v8 | (v8 << 6)) << 22),
                DirectoryTableBase_low);
        v17 = (_DWORD)DirectoryTableBase_low == v18;
        DirectoryTableBase_low = v18;
      }
      while ( !v17 );
      if ( v5 )
      {
        MmDetachSession((__int64)v5, (__int64)v22);
        HalPutDmaAdapter(v5);
      }
      KiUnstackDetachProcess((__int64)v23, 0);
      if ( v15 )
      {
        ExtensionTable = (void (__fastcall **)(PEPROCESS))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
        if ( ExtensionTable )
        {
          (*ExtensionTable)(Process);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
        }
      }
      return v1;
    }
  }
  return v1;
}
