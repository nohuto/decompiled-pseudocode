/*
 * XREFs of ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0088504
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006A500 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C006B870 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007BF40 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C00AF6C4 (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AFB88 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C008537C (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C008539C (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UncommitLocalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2, char a3)
{
  __int64 v3; // rbp
  __int64 v5; // rsi
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  VIDMM_PROCESS *v17; // rcx
  struct _KAPC_STATE v18; // [rsp+20h] [rbp-68h] BYREF
  __int64 v19; // [rsp+50h] [rbp-38h]

  v3 = *((_QWORD *)a2 + 1);
  v5 = *(_QWORD *)a2;
  v19 = v3;
  VIDMM_PROCESS::SafeAttach((PRKPROCESS *)v3, &v18);
  v8 = *(_DWORD *)(v5 + 80);
  v9 = v8;
  if ( (v8 & 0x2000) == 0
    && ((v8 & 0x44000) != 0x44000 || (v10 = *(_QWORD *)(v3 + 32)) == 0 || (*(_BYTE *)(v10 + 347) & 0x20) == 0) )
  {
    v9 = v8;
    if ( (v8 & 0x400) == 0 && ((v8 & 0x40000) != 0 || (**(_DWORD **)(v5 + 496) & 0x40000) != 0) )
    {
      v9 = v8;
      if ( a3 )
      {
        v11 = *((_QWORD *)a2 + 2);
        if ( v11 )
        {
          CurrentProcess = PsGetCurrentProcess(278528LL);
          MmUnmapViewOfSection(CurrentProcess, v11);
          v9 = *(unsigned int *)(v5 + 80);
        }
      }
    }
  }
  v13 = **(unsigned int **)(v5 + 496);
  if ( (v9 & 0x40000) != 0 )
  {
    if ( (v13 & 0x400000) == 0 && *((_QWORD *)a2 + 12) )
    {
      v14 = WdLogNewEntry5_WdEvent(v13, v9);
      v15 = *((_QWORD *)a2 + 12);
      v16 = v14;
      *(_QWORD *)(v14 + 24) = v15;
      *(_QWORD *)(v14 + 32) = PsGetCurrentProcess(v15);
      WdLogEvent5_WdEvent(v16);
      ObCloseHandle(*((HANDLE *)a2 + 12), (*((_QWORD *)a2 + 12) & 0xFFFFFFFF80000000uLL) == 0);
      *((_QWORD *)a2 + 12) = 0LL;
    }
  }
  else if ( (v13 & 8) == 0
         && (v13 & 0x20000) == 0
         && (v13 & 0x10) == 0
         && (v13 & 0x20) == 0
         && *((_QWORD *)a2 + 3)
         && a3 )
  {
    (*(void (__fastcall **)(_QWORD, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(v3 + 24) + 24LL))(
      *(_QWORD *)(v3 + 24),
      a2);
    *((_QWORD *)a2 + 3) = 0LL;
  }
  v17 = (VIDMM_PROCESS *)(296LL * (*(_DWORD *)(v5 + 76) & 0x3F));
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)((char *)v17
                              + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16)
                                                      + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 232LL))
                                          + 48LL)
                              + 224),
    -*(_QWORD *)(v5 + 8));
  *((_QWORD *)a2 + 2) = 0LL;
  VIDMM_PROCESS::SafeDetach(v17, &v18);
}
