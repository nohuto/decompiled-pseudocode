/*
 * XREFs of ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C008B644
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006A030 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C0079510 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007C8F0 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C00AE504 (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AE9E4 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C008716C (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C008718C (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UncommitLocalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2, char a3)
{
  __int64 v3; // rbp
  __int64 v5; // rsi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 CurrentProcess; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  VIDMM_PROCESS *v18; // rcx
  struct _KAPC_STATE v19; // [rsp+20h] [rbp-68h] BYREF
  __int64 v20; // [rsp+50h] [rbp-38h]

  v3 = *((_QWORD *)a2 + 1);
  v5 = *(_QWORD *)a2;
  v20 = v3;
  VIDMM_PROCESS::SafeAttach((PRKPROCESS *)v3, &v19);
  v8 = *(unsigned int *)(v5 + 80);
  v9 = v8;
  if ( (v8 & 0x2000) == 0
    && ((v8 & 0x44000) != 0x44000 || (v10 = *(_QWORD *)(v3 + 32)) == 0 || (*(_BYTE *)(v10 + 347) & 0x20) == 0) )
  {
    v9 = (unsigned int)v8;
    if ( (v8 & 0x400) == 0 && ((v8 & 0x40000) != 0 || (**(_DWORD **)(v5 + 512) & 0x40000) != 0) )
    {
      v9 = (unsigned int)v8;
      if ( a3 )
      {
        if ( *((_QWORD *)a2 + 2) )
        {
          CurrentProcess = PsGetCurrentProcess(278528LL, (unsigned int)v8, v8);
          MmUnmapViewOfSection(CurrentProcess);
          v9 = *(unsigned int *)(v5 + 80);
        }
      }
    }
  }
  v12 = **(unsigned int **)(v5 + 512);
  if ( (v9 & 0x40000) != 0 )
  {
    if ( (v12 & 0x400000) == 0 && *((_QWORD *)a2 + 12) )
    {
      v13 = WdLogNewEntry5_WdEvent(v12, v9);
      v14 = *((_QWORD *)a2 + 12);
      v15 = v13;
      *(_QWORD *)(v13 + 24) = v14;
      *(_QWORD *)(v13 + 32) = PsGetCurrentProcess(v14, v16, v17);
      WdLogEvent5_WdEvent(v15);
      ObCloseHandle(*((HANDLE *)a2 + 12), (*((_QWORD *)a2 + 12) & 0xFFFFFFFF80000000uLL) == 0);
      *((_QWORD *)a2 + 12) = 0LL;
    }
  }
  else if ( (v12 & 8) == 0
         && (v12 & 0x20000) == 0
         && (v12 & 0x10) == 0
         && (v12 & 0x20) == 0
         && *((_QWORD *)a2 + 3)
         && a3 )
  {
    (*(void (__fastcall **)(_QWORD, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(v3 + 24) + 24LL))(
      *(_QWORD *)(v3 + 24),
      a2);
    *((_QWORD *)a2 + 3) = 0LL;
  }
  v18 = (VIDMM_PROCESS *)(296LL * (*(_DWORD *)(v5 + 76) & 0x3F));
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)((char *)v18
                              + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16)
                                                      + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 232LL))
                                          + 48LL)
                              + 224),
    -*(_QWORD *)(v5 + 8));
  *((_QWORD *)a2 + 2) = 0LL;
  VIDMM_PROCESS::SafeDetach(v18, &v19);
}
