/*
 * XREFs of ?Init@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0083430
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Init(VIDMM_RECYCLE_HEAP_MGR *this, struct VIDMM_PROCESS *a2)
{
  struct _KEVENT *v3; // rax
  struct _LOOKASIDE_LIST_EX *v4; // rax
  NTSTATUS v5; // edi
  unsigned __int64 v6; // rbp
  PSLIST_ENTRY *v7; // rsi
  __int64 v8; // rdi
  PSLIST_ENTRY v9; // rax
  struct _LOOKASIDE_LIST_EX *v10; // rax
  NTSTATUS v11; // eax
  unsigned __int64 v12; // rbp
  PSLIST_ENTRY *v13; // rsi
  __int64 v14; // rdi
  PSLIST_ENTRY v15; // rax
  struct _KTHREAD **v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _BYTE v22[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v23; // [rsp+58h] [rbp-30h]
  int v24; // [rsp+60h] [rbp-28h]

  *((_QWORD *)this + 1) = a2;
  v3 = (struct _KEVENT *)operator new(24LL, 0x30316956u, 64LL);
  *((_QWORD *)this + 199) = v3;
  if ( !v3 )
  {
    _InterlockedIncrement(&dword_1C006E7F4);
    WdLogSingleEntry1(6LL, 9881LL);
LABEL_27:
    DxgkLogInternalTriageEvent(v20, 262145LL);
    return 3221225495LL;
  }
  KeInitializeEvent(v3, NotificationEvent, 0);
  v4 = (struct _LOOKASIDE_LIST_EX *)operator new(96LL, 0x30316956u, 64LL);
  *((_QWORD *)this + 164) = v4;
  if ( !v4 )
  {
    _InterlockedIncrement(&dword_1C006E7F4);
    WdLogSingleEntry1(6LL, 9895LL);
    goto LABEL_27;
  }
  v5 = ExInitializeLookasideListEx(v4, 0LL, 0LL, PagedPool, 0, 0xB0uLL, 0x32316956u, 0);
  if ( v5 < 0 )
  {
    _InterlockedIncrement(&dword_1C006E7F4);
    WdLogSingleEntry1(6LL, 9904LL);
LABEL_22:
    DxgkLogInternalTriageEvent(v21, 262145LL);
    return (unsigned int)v5;
  }
  else
  {
    v6 = 0LL;
    v7 = (PSLIST_ENTRY *)((char *)this + 1624);
    do
    {
      v8 = *((_QWORD *)this + 164);
      ++*(_DWORD *)(v8 + 20);
      v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v8);
      if ( !v9 )
      {
        ++*(_DWORD *)(v8 + 24);
        v9 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v8 + 48))(
                             *(unsigned int *)(v8 + 36),
                             *(unsigned int *)(v8 + 44),
                             *(unsigned int *)(v8 + 40),
                             v8);
      }
      *v7 = v9;
      if ( !v9 )
      {
        _InterlockedIncrement(&dword_1C006E7F4);
        WdLogSingleEntry1(6LL, 9916LL);
        goto LABEL_27;
      }
      ++v6;
      ++v7;
    }
    while ( v6 < 4 );
    *((_DWORD *)this + 404) = 4;
    v10 = (struct _LOOKASIDE_LIST_EX *)operator new(96LL, 0x30316956u, 64LL);
    *((_QWORD *)this + 165) = v10;
    if ( !v10 )
    {
      _InterlockedIncrement(&dword_1C006E7F4);
      WdLogSingleEntry1(6LL, 9927LL);
      goto LABEL_27;
    }
    v11 = ExInitializeLookasideListEx(v10, 0LL, 0LL, PagedPool, 0, 0xF0uLL, 0x32316956u, 0);
    v5 = v11;
    if ( v11 < 0 )
    {
      _InterlockedIncrement(&dword_1C006E7F4);
      WdLogSingleEntry1(6LL, v11);
      goto LABEL_22;
    }
    v12 = 0LL;
    v13 = (PSLIST_ENTRY *)((char *)this + 1656);
    do
    {
      v14 = *((_QWORD *)this + 165);
      ++*(_DWORD *)(v14 + 20);
      v15 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v14);
      if ( !v15 )
      {
        ++*(_DWORD *)(v14 + 24);
        v15 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v14 + 48))(
                              *(unsigned int *)(v14 + 36),
                              *(unsigned int *)(v14 + 44),
                              *(unsigned int *)(v14 + 40),
                              v14);
      }
      *v13 = v15;
      if ( !v15 )
      {
        _InterlockedIncrement(&dword_1C006E7F4);
        WdLogSingleEntry1(6LL, 9948LL);
        goto LABEL_27;
      }
      ++v12;
      ++v13;
    }
    while ( v12 < 4 );
    v16 = (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock;
    *((_DWORD *)this + 405) = 4;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22, v16, 0);
    DXGPUSHLOCK::AcquireExclusive(v23);
    v17 = (_QWORD *)qword_1C006E8B8;
    v18 = (_QWORD *)((char *)this + 1600);
    v24 = 2;
    if ( *(struct _LIST_ENTRY **)qword_1C006E8B8 != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead )
      __fastfail(3u);
    *v18 = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
    v18[1] = v17;
    *v17 = v18;
    qword_1C006E8B8 = (__int64)v18;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
    return 0LL;
  }
}
