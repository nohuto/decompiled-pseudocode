/*
 * XREFs of ?Unlock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C006DA10
 * Callers:
 *     ?VidMmUnlock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00019F0 (-VidMmUnlock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001A10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0024310 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C008537C (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C008539C (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00879B8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B5768 (-UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Unlock(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  VIDMM_PROCESS *v7; // rcx
  bool v8; // bp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  VIDMM_PROCESS *v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 CurrentProcess; // rax
  _QWORD v18[12]; // [rsp+20h] [rbp-C8h] BYREF
  struct _KAPC_STATE v19; // [rsp+80h] [rbp-68h] BYREF
  VIDMM_PROCESS *v20; // [rsp+B0h] [rbp-38h]

  v2 = *a2;
  v5 = **a2;
  if ( DXGPROCESS::GetCurrent() && (v6 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
    v7 = *(VIDMM_PROCESS **)(v6 + 8);
  else
    v7 = 0LL;
  v20 = v7;
  VIDMM_PROCESS::SafeAttach(v7, &v19);
  v8 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5 + 472, 0LL);
  if ( *((_DWORD *)v2 + 19) )
  {
    if ( (*(_DWORD *)(v5 + 84) & 0x20) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 336));
      if ( (*((_DWORD *)v2 + 19))-- == 1 )
      {
        if ( (*(_DWORD *)(v5 + 80) & 0x2000) != 0 )
        {
          UnlockParavirtualizedAllocationOnHost((struct _VIDMM_GLOBAL_ALLOC *)v5);
        }
        else
        {
          v10 = **(unsigned int **)(v5 + 496);
          if ( (v10 & 0x40000) != 0 )
          {
            if ( (v10 & 0x20000000) != 0 )
            {
              CurrentProcess = PsGetCurrentProcess(v10);
              MmUnmapViewOfSection(CurrentProcess, v2[2]);
            }
            else
            {
              (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v2[1] + 24) + 80LL))(
                *(_QWORD *)(v2[1] + 24),
                v2[3],
                v2[2]);
            }
            v2[2] = 0LL;
          }
          else
          {
            v8 = *(_QWORD *)(v5 + 440) != 0LL;
          }
        }
      }
      if ( !*(_DWORD *)(v5 + 336) )
        *(_DWORD *)(v5 + 84) &= ~0x20u;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0p_EtwWriteTransfer(v10, &EventUnlock2, v11, a2);
    }
    else
    {
      v16 = WdLogNewEntry5_WdAssertion(v10, v9, v11);
      *(_QWORD *)(v16 + 24) = 23355LL;
      WdLogEvent5_WdAssertion(v16);
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdAssertion(v10, v9, v11);
    *(_QWORD *)(v15 + 24) = a2;
    WdLogEvent5_WdAssertion(v15);
  }
  ExReleasePushLockExclusiveEx(v5 + 472, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    memset(v18, 0, 0x58uLL);
    LODWORD(v18[0]) = 129;
    v18[5] = v5;
    VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v18, 1);
  }
  VIDMM_PROCESS::SafeDetach(v13, &v19);
  return 0LL;
}
