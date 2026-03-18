/*
 * XREFs of ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00927A8
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00929E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0002298 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C007BC1C (-TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0085D80 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0085F74 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0089AE0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C008A158 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAEPEAX@Z @ 0x1C00A169C (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAEPEAX@Z.c)
 */

struct _VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::OpenLocalAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_PROCESS *a3,
        __int64 a4,
        unsigned __int8 *a5)
{
  void *v5; // r15
  struct VIDMM_PROCESS *v6; // rbp
  int *v9; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v10; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rax
  struct _VIDMM_GLOBAL_ALLOC **v17; // rax
  struct _VIDMM_LOCAL_ALLOC *v19; // r8
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r9
  enum _LOCK_OPERATION v33; // [rsp+28h] [rbp-B0h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-88h] BYREF

  v5 = (void *)a4;
  v6 = a3;
  if ( !a3 )
    v6 = (struct VIDMM_PROCESS *)*((_QWORD *)this + 5048);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  if ( !v6 )
  {
    WdLogSingleEntry1(1LL, 12949LL);
    goto LABEL_36;
  }
  v9 = (int *)*((_QWORD *)a2 + 66);
  v10 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272);
  v11 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 34);
  if ( v11 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272) && (*v9 & 0x20000000) == 0 )
  {
    WdLogSingleEntry1(1LL, 12959LL);
LABEL_36:
    v24 = 0x40000LL;
LABEL_38:
    DxgkLogInternalTriageEvent(v25, v24);
    return 0LL;
  }
  v12 = *v9;
  v13 = 536870928LL;
  if ( (v12 & 0x20000010) == 0x20000010 )
  {
    v26 = *((_QWORD *)a2 + 11);
    if ( v26 )
    {
      if ( *(struct VIDMM_PROCESS **)(v26 + 8) != v6 )
      {
        if ( v6 == *((struct VIDMM_PROCESS **)this + 5048) )
          return 0LL;
        WdLogSingleEntry1(1LL, 12978LL);
        goto LABEL_36;
      }
    }
  }
  while ( 1 )
  {
    if ( v11 == v10 )
    {
      v14 = (_QWORD *)operator new(104LL, 0x32306956u, 256LL);
      v15 = (__int64)v14;
      if ( !v14 )
      {
        _InterlockedIncrement(&dword_1C006E730);
        WdLogSingleEntry1(6LL, 13040LL);
        v24 = 262145LL;
        goto LABEL_38;
      }
      *v14 = a2;
      v14[1] = v6;
      v16 = v14 + 5;
      v16[1] = v16;
      *v16 = v16;
      v17 = (struct _VIDMM_GLOBAL_ALLOC **)(v15 + 56);
      ++*((_DWORD *)a2 + 72);
      v11 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 35);
      if ( *(struct _VIDMM_GLOBAL_ALLOC **)v11 != v10 )
LABEL_54:
        __fastfail(3u);
      *v17 = v10;
      *(_QWORD *)(v15 + 64) = v11;
      *(_QWORD *)v11 = v17;
      *((_QWORD *)a2 + 35) = v17;
      if ( (*((_DWORD *)a2 + 19) & 0x20) == 0
        || VIDMM_GLOBAL::CommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)v15, a5, v5) >= 0 )
      {
        goto LABEL_13;
      }
LABEL_52:
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)v15, 1);
      --*((_DWORD *)a2 + 72);
      v29 = *(_QWORD *)(v15 + 56);
      if ( *(_QWORD *)(v29 + 8) == v15 + 56 )
      {
        v30 = *(_QWORD **)(v15 + 64);
        if ( *v30 == v15 + 56 )
        {
          *v30 = v29;
          *(_QWORD *)(v29 + 8) = v30;
          operator delete((void *)v15);
          return 0LL;
        }
      }
      goto LABEL_54;
    }
    v15 = (__int64)v11 - 56;
    if ( *((struct VIDMM_PROCESS **)v11 - 6) == v6 )
      break;
    v11 = *(struct _VIDMM_GLOBAL_ALLOC **)v11;
  }
  v23 = *(_BYTE *)(v15 + 32);
  if ( (v23 & 2) != 0 )
  {
    *(_BYTE *)(v15 + 32) = v23 & 0xFD;
    WdLogSingleEntry1(4LL, (char *)v11 - 56);
    v27 = *((_QWORD *)a2 + 11);
    if ( !v27 || (*(_BYTE *)(v27 + 32) & 2) != 0 )
    {
      a4 = *((_QWORD *)a2 + 15);
      *((_QWORD *)a2 + 11) = v15;
      if ( a4 )
        VidMmRecordAlloc(this, (__int64)a2, v15, a4, *((_QWORD *)a2 + 2), 0);
    }
  }
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v13, a3, a4) + 24) = v15;
LABEL_13:
  ++*(_DWORD *)(v15 + 36);
  if ( (**((_DWORD **)a2 + 66) & 0x20000000) == 0 )
  {
    *((_QWORD *)a2 + 11) = v15;
    goto LABEL_15;
  }
  v19 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 11);
  if ( !v19 || (*((_DWORD *)a2 + 19) & 4) != 0 )
  {
    if ( (*((_BYTE *)a2 + 76) & 0x60) == 0x60 )
      VIDMM_GLOBAL::TransferAllocationDecommit(v11, a2, v19, (struct _VIDMM_LOCAL_ALLOC *)v15);
    *(_QWORD *)(v15 + 8) = v6;
    if ( *((_QWORD *)a2 + 11) )
    {
      *(_QWORD *)v15 = a2;
      if ( *((int *)a2 + 91) > 0 )
      {
        if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                    this,
                    (struct _VIDMM_LOCAL_ALLOC *)v15,
                    a2,
                    0LL,
                    *((_QWORD *)a2 + 1),
                    v33,
                    *((struct VIDMM_SEGMENT **)a2 + 15),
                    0) < 0 )
        {
          _InterlockedIncrement(&dword_1C006E724);
          WdLogSingleEntry2(6LL, a2, *((_QWORD *)a2 + 1));
          DxgkLogInternalTriageEvent(v28, 262145LL);
          goto LABEL_52;
        }
        VIDMM_GLOBAL::UnlockAllocation(this, *((struct _VIDMM_LOCAL_ALLOC **)a2 + 11), 0LL, *((_QWORD *)a2 + 1), 0, 0);
      }
      v31 = *((_QWORD *)a2 + 11);
      if ( (*(_BYTE *)(v31 + 32) & 2) == 0 )
      {
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(**(PRKPROCESS **)(v31 + 8), &ApcState);
        VIDMM_GLOBAL::CloseOneAllocation(
          this,
          (struct _KEVENT *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 40LL) - 40LL),
          0LL,
          0LL,
          0,
          0LL);
        KeUnstackDetachProcess(&ApcState);
      }
    }
    v20 = *((_DWORD *)a2 + 19);
    if ( (v20 & 4) != 0 )
    {
      v32 = *((_QWORD *)a2 + 15);
      if ( v32 )
      {
        VidMmRecordAlloc(this, (__int64)a2, v15, v32, *((_QWORD *)a2 + 2), 0);
        v20 = *((_DWORD *)a2 + 19);
      }
    }
    *((_QWORD *)a2 + 11) = v15;
    *((_DWORD *)a2 + 19) = v20 & 0xFFFFFFFB;
  }
  *a5 = 1;
LABEL_15:
  if ( *((_DWORD *)a2 + 28) )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)) + 48LL)
        + 296LL * (*((_DWORD *)a2 + 17) & 0x3F);
    v22 = *((_QWORD *)a2 + 2);
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 15) + 80LL) & 0x1001) != 0 )
      *(_QWORD *)(v21 + 240) += v22;
    else
      *(_QWORD *)(v21 + 232) += v22;
  }
  return (struct _VIDMM_LOCAL_ALLOC *)v15;
}
