/*
 * XREFs of ?Init@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C00775D0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001CC0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002354 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Init(VIDMM_RECYCLE_HEAP_MGR *this, struct VIDMM_PROCESS *a2)
{
  struct _KEVENT *v3; // rax
  __int64 v4; // rcx
  struct _LOOKASIDE_LIST_EX *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  PSLIST_ENTRY *v10; // rsi
  __int64 v11; // rdi
  PSLIST_ENTRY v12; // rax
  __int64 v13; // rcx
  struct _LOOKASIDE_LIST_EX *v14; // rax
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  unsigned __int64 v18; // rbp
  PSLIST_ENTRY *v19; // rsi
  __int64 v20; // rdi
  PSLIST_ENTRY v21; // rax
  __int64 v22; // rcx
  struct _KTHREAD **v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  _BYTE v29[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v30; // [rsp+48h] [rbp-20h]
  int v31; // [rsp+50h] [rbp-18h]

  *((_QWORD *)this + 1) = a2;
  v3 = (struct _KEVENT *)operator new[](0x18uLL, 0x30316956u, (POOL_TYPE)512);
  *((_QWORD *)this + 198) = v3;
  if ( !v3 )
  {
    _InterlockedIncrement(&dword_1C0051734);
    v27 = WdLogNewEntry5_WdLowResource(v4);
    *(_QWORD *)(v27 + 24) = 9882LL;
LABEL_27:
    WdLogEvent5_WdLowResource(v27);
    return 3221225495LL;
  }
  KeInitializeEvent(v3, NotificationEvent, 0);
  v5 = (struct _LOOKASIDE_LIST_EX *)operator new[](0x60uLL, 0x30316956u, (POOL_TYPE)512);
  *((_QWORD *)this + 164) = v5;
  if ( !v5 )
  {
    _InterlockedIncrement(&dword_1C0051734);
    v27 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v27 + 24) = 9896LL;
    goto LABEL_27;
  }
  LODWORD(v8) = ExInitializeLookasideListEx(v5, 0LL, 0LL, PagedPool, 0, 0xB0uLL, 0x32316956u, 0);
  if ( (int)v8 < 0 )
  {
    _InterlockedIncrement(&dword_1C0051734);
    v28 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v28 + 24) = 9905LL;
LABEL_22:
    WdLogEvent5_WdLowResource(v28);
    return (unsigned int)v8;
  }
  else
  {
    v9 = 0LL;
    v10 = (PSLIST_ENTRY *)((char *)this + 1616);
    do
    {
      v11 = *((_QWORD *)this + 164);
      ++*(_DWORD *)(v11 + 20);
      v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v11);
      if ( !v12 )
      {
        ++*(_DWORD *)(v11 + 24);
        v12 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v11 + 48))(
                              *(unsigned int *)(v11 + 36),
                              *(unsigned int *)(v11 + 44),
                              *(unsigned int *)(v11 + 40),
                              v11);
      }
      *v10 = v12;
      if ( !v12 )
      {
        _InterlockedIncrement(&dword_1C0051734);
        v27 = WdLogNewEntry5_WdLowResource(v13);
        *(_QWORD *)(v27 + 24) = 9917LL;
        goto LABEL_27;
      }
      ++v9;
      ++v10;
    }
    while ( v9 < 4 );
    *((_DWORD *)this + 402) = 4;
    v14 = (struct _LOOKASIDE_LIST_EX *)operator new[](0x60uLL, 0x30316956u, (POOL_TYPE)512);
    *((_QWORD *)this + 165) = v14;
    if ( !v14 )
    {
      _InterlockedIncrement(&dword_1C0051734);
      v27 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v27 + 24) = 9928LL;
      goto LABEL_27;
    }
    v16 = ExInitializeLookasideListEx(v14, 0LL, 0LL, PagedPool, 0, 0xF0uLL, 0x32316956u, 0);
    v8 = v16;
    if ( v16 < 0 )
    {
      _InterlockedIncrement(&dword_1C0051734);
      v28 = WdLogNewEntry5_WdLowResource(v17);
      *(_QWORD *)(v28 + 24) = v8;
      goto LABEL_22;
    }
    v18 = 0LL;
    v19 = (PSLIST_ENTRY *)((char *)this + 1648);
    do
    {
      v20 = *((_QWORD *)this + 165);
      ++*(_DWORD *)(v20 + 20);
      v21 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v20);
      if ( !v21 )
      {
        ++*(_DWORD *)(v20 + 24);
        v21 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v20 + 48))(
                              *(unsigned int *)(v20 + 36),
                              *(unsigned int *)(v20 + 44),
                              *(unsigned int *)(v20 + 40),
                              v20);
      }
      *v19 = v21;
      if ( !v21 )
      {
        _InterlockedIncrement(&dword_1C0051734);
        v27 = WdLogNewEntry5_WdLowResource(v22);
        *(_QWORD *)(v27 + 24) = 9949LL;
        goto LABEL_27;
      }
      ++v18;
      ++v19;
    }
    while ( v18 < 4 );
    v23 = (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock;
    *((_DWORD *)this + 403) = 4;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29, v23, 0);
    DXGPUSHLOCK::AcquireExclusive(v30);
    v24 = (_QWORD *)qword_1C00517F0;
    v25 = (_QWORD *)((char *)this + 1592);
    v31 = 2;
    if ( *(struct _LIST_ENTRY **)qword_1C00517F0 != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead )
      __fastfail(3u);
    *v25 = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
    v25[1] = v24;
    *v24 = v25;
    qword_1C00517F0 = (__int64)v25;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
    return 0LL;
  }
}
