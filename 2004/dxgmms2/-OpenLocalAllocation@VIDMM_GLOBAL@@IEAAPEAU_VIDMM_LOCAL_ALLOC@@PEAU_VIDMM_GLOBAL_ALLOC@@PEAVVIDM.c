/*
 * XREFs of ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C006B850
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C006AC00 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001208 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0063834 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00638E0 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006A4E0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAEPEAX@Z @ 0x1C006DB50 (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAEPEAX@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00884E4 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00B52E8 (-TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@.c)
 */

struct _VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::OpenLocalAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_PROCESS *a3,
        void *a4,
        unsigned __int8 *a5)
{
  struct VIDMM_PROCESS *v6; // rbp
  _DWORD *v9; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v10; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v11; // rcx
  PVOID v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  struct _VIDMM_GLOBAL_ALLOC **v15; // rax
  struct _VIDMM_LOCAL_ALLOC *v17; // r8
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  enum _LOCK_OPERATION v35; // [rsp+28h] [rbp-90h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  v6 = a3;
  if ( !a3 )
    v6 = (struct VIDMM_PROCESS *)*((_QWORD *)this + 5048);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( !v6 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v24 + 24) = 12602LL;
    WdLogEvent5_WdAssertion(v24);
    return 0LL;
  }
  v9 = (_DWORD *)*((_QWORD *)a2 + 62);
  v10 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 288);
  v11 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 36);
  if ( v11 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 288) && (*v9 & 0x20000000) == 0 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v11, v9, a3);
    *(_QWORD *)(v25 + 24) = 12612LL;
    goto LABEL_46;
  }
  if ( (*v9 & 0x20000010) == 0x20000010 )
  {
    v26 = *((_QWORD *)a2 + 12);
    if ( v26 )
    {
      if ( *(struct VIDMM_PROCESS **)(v26 + 8) != v6 )
      {
        if ( v6 == *((struct VIDMM_PROCESS **)this + 5048) )
          return 0LL;
        v25 = WdLogNewEntry5_WdAssertion(v11, v9, a3);
        *(_QWORD *)(v25 + 24) = 12631LL;
LABEL_46:
        WdLogEvent5_WdAssertion(v25);
        return 0LL;
      }
    }
  }
  if ( v11 == v10 )
  {
LABEL_9:
    v12 = operator new[](0x68uLL, 0x32306956u, PagedPool);
    v14 = (__int64)v12;
    if ( !v12 )
    {
      _InterlockedIncrement(&dword_1C0051670);
      v30 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v30 + 24) = 12693LL;
      WdLogEvent5_WdLowResource(v30);
      return 0LL;
    }
    memset(v12, 0, 0x68uLL);
    *(_QWORD *)v14 = a2;
    *(_QWORD *)(v14 + 48) = v14 + 40;
    *(_QWORD *)(v14 + 40) = v14 + 40;
    v15 = (struct _VIDMM_GLOBAL_ALLOC **)(v14 + 56);
    *(_QWORD *)(v14 + 8) = v6;
    ++*((_DWORD *)a2 + 76);
    v11 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
    if ( *(struct _VIDMM_GLOBAL_ALLOC **)v11 != v10 )
LABEL_60:
      __fastfail(3u);
    *v15 = v10;
    *(_QWORD *)(v14 + 64) = v11;
    *(_QWORD *)v11 = v15;
    *((_QWORD *)a2 + 37) = v15;
    if ( (*((_DWORD *)a2 + 21) & 0x40) != 0
      && VIDMM_GLOBAL::CommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)v14, a5, a4) < 0 )
    {
LABEL_56:
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)v14, 1);
      --*((_DWORD *)a2 + 76);
      v33 = *(_QWORD *)(v14 + 56);
      if ( *(_QWORD *)(v33 + 8) == v14 + 56 )
      {
        v34 = *(_QWORD **)(v14 + 64);
        if ( *v34 == v14 + 56 )
        {
          *v34 = v33;
          *(_QWORD *)(v33 + 8) = v34;
          operator delete((void *)v14);
          return 0LL;
        }
      }
      goto LABEL_60;
    }
  }
  else
  {
    while ( 1 )
    {
      v14 = (__int64)v11 - 56;
      if ( *((struct VIDMM_PROCESS **)v11 - 6) == v6 )
        break;
      v11 = *(struct _VIDMM_GLOBAL_ALLOC **)v11;
      if ( v11 == v10 )
        goto LABEL_9;
    }
    v21 = *(_BYTE *)(v14 + 32);
    if ( (v21 & 2) != 0 )
    {
      *(_BYTE *)(v14 + 32) = v21 & 0xFD;
      v27 = WdLogNewEntry5_WdEvent(v11, v9);
      *(_QWORD *)(v27 + 24) = v14;
      WdLogEvent5_WdEvent(v27);
      v28 = *((_QWORD *)a2 + 12);
      if ( !v28 || (*(_BYTE *)(v28 + 32) & 2) != 0 )
      {
        v29 = *((_QWORD *)a2 + 16);
        *((_QWORD *)a2 + 12) = v14;
        if ( v29 )
          VidMmRecordAlloc(this, (__int64)a2, v14, v29, *((_QWORD *)a2 + 2), 0);
      }
    }
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v14;
  }
  ++*(_DWORD *)(v14 + 36);
  if ( (**((_DWORD **)a2 + 62) & 0x20000000) != 0 )
  {
    v17 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 12);
    if ( v17 && (*((_DWORD *)a2 + 21) & 4) == 0 )
    {
LABEL_19:
      *a5 = 1;
      goto LABEL_15;
    }
    if ( (*((_BYTE *)a2 + 84) & 0xC0) == 0xC0 )
      VIDMM_GLOBAL::TransferAllocationDecommit(v11, a2, v17, (struct _VIDMM_LOCAL_ALLOC *)v14);
    *(_QWORD *)(v14 + 8) = v6;
    if ( !*((_QWORD *)a2 + 12) )
    {
LABEL_28:
      v18 = *((_DWORD *)a2 + 21);
      if ( (v18 & 4) != 0 )
      {
        v23 = *((_QWORD *)a2 + 16);
        if ( v23 )
        {
          VidMmRecordAlloc(this, (__int64)a2, v14, v23, *((_QWORD *)a2 + 2), 0);
          v18 = *((_DWORD *)a2 + 21);
        }
      }
      *((_QWORD *)a2 + 12) = v14;
      *((_DWORD *)a2 + 21) = v18 & 0xFFFFFFFB;
      goto LABEL_19;
    }
    *(_QWORD *)v14 = a2;
    if ( *((int *)a2 + 85) <= 0 )
    {
LABEL_37:
      v22 = *((_QWORD *)a2 + 12);
      if ( (*(_BYTE *)(v22 + 32) & 2) == 0 )
      {
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(**(PRKPROCESS **)(v22 + 8), &ApcState);
        VIDMM_GLOBAL::CloseOneAllocation(
          this,
          (struct _KEVENT *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 40LL) - 40LL),
          0LL,
          0,
          0,
          0LL);
        KeUnstackDetachProcess(&ApcState);
      }
      goto LABEL_28;
    }
    if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                v11,
                (struct _VIDMM_LOCAL_ALLOC *)v14,
                a2,
                0LL,
                *((_QWORD *)a2 + 1),
                v35,
                *((struct VIDMM_SEGMENT **)a2 + 16),
                0) >= 0 )
    {
      VIDMM_GLOBAL::UnlockAllocation(this, *((struct _VIDMM_LOCAL_ALLOC **)a2 + 12), 0LL, *((_QWORD *)a2 + 1), 0, 0);
      goto LABEL_37;
    }
    _InterlockedIncrement(&dword_1C0051664);
    v32 = WdLogNewEntry5_WdLowResource(v31);
    *(_QWORD *)(v32 + 24) = a2;
    *(_QWORD *)(v32 + 32) = *((_QWORD *)a2 + 1);
    WdLogEvent5_WdLowResource(v32);
    goto LABEL_56;
  }
  *((_QWORD *)a2 + 12) = v14;
LABEL_15:
  if ( *((_DWORD *)a2 + 30) )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 232LL)) + 48LL)
        + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    v20 = *((_QWORD *)a2 + 2);
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 16) + 80LL) & 0x1001) != 0 )
      *(_QWORD *)(v19 + 240) += v20;
    else
      *(_QWORD *)(v19 + 232) += v20;
  }
  return (struct _VIDMM_LOCAL_ALLOC *)v14;
}
