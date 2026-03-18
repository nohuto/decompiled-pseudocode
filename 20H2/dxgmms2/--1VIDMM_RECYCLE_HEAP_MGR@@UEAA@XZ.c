/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C006AEC8
 * Callers:
 *     ??_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z @ 0x1C00116E0 (--_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004124 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004150 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011A88 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0011AC8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0011AF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0012350 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00123C8 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1C005FE4C (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0060D3C (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0063698 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C0063BF0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1C006B2D0 (--1VIDMM_RECYCLE_HEAP@@QEAA@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::~VIDMM_RECYCLE_HEAP_MGR(VIDMM_RECYCLE_HEAP_MGR *this)
{
  PRKPROCESS *v2; // rcx
  char *v3; // rdx
  __int64 v4; // rax
  char **v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v8; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v9; // rdi
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  struct _SLIST_ENTRY **v12; // rsi
  __int64 v13; // r15
  struct _SLIST_ENTRY *v14; // r14
  __int64 v15; // rdi
  struct _SLIST_ENTRY *v16; // r14
  __int64 v17; // rdi
  struct _LOOKASIDE_LIST_EX *v18; // rcx
  struct _LOOKASIDE_LIST_EX *v19; // rcx
  void *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  VIDMM_RECYCLE_RANGE *v23; // rsi
  struct VIDMM_RECYCLE_RANGE *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rdx
  bool v27; // [rsp+30h] [rbp-39h] BYREF
  int v28; // [rsp+34h] [rbp-35h] BYREF
  _BYTE v29[16]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v30[8]; // [rsp+48h] [rbp-21h] BYREF
  DXGPUSHLOCK *v31; // [rsp+50h] [rbp-19h]
  int v32; // [rsp+58h] [rbp-11h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-9h] BYREF

  *(_QWORD *)this = &VIDMM_RECYCLE_HEAP_MGR::`vftable';
  v2 = (PRKPROCESS *)*((_QWORD *)this + 1);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*v2, &ApcState);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
    (DXGAUTOPUSHLOCK *)v30,
    (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock,
    0LL);
  DXGPUSHLOCK::AcquireExclusive(v31);
  v3 = (char *)this + 1592;
  v32 = 2;
  v4 = *((_QWORD *)this + 199);
  if ( v4 )
  {
    if ( *(char **)(v4 + 8) != v3 || (v5 = (char **)*((_QWORD *)this + 200), *v5 != v3) )
      __fastfail(3u);
    *v5 = (char *)v4;
    *(_QWORD *)(v4 + 8) = v5;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328), v6);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29, v7);
  _InterlockedExchange((volatile __int32 *)this + 394, 1);
  v8 = (VIDMM_RECYCLE_HEAP_MGR *)*((unsigned int *)this + 382);
  if ( (_DWORD)v8 && !KeCancelTimer((PKTIMER)((char *)this + 1368)) )
  {
    KeFlushQueuedDpcs();
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29, v25);
    KeWaitForSingleObject(*((PVOID *)this + 198), Executive, 0, 0, 0LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29, v26);
  }
  v9 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 192);
  while ( v9 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1536) )
  {
    v24 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v9 - 104);
    v9 = *(VIDMM_RECYCLE_HEAP_MGR **)v9;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v8, v24);
    v27 = 0;
    VIDMM_RECYCLE_RANGE::FinalizedUnlock(v24, &v27);
    if ( !v27 )
    {
      v8 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v24 + 17);
      if ( v8 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v8);
    }
  }
  v10 = (_QWORD *)((char *)this + 1552);
  while ( 1 )
  {
    v11 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 == v10 )
      break;
    v23 = (VIDMM_RECYCLE_RANGE *)(v11 - 13);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v8, (struct VIDMM_RECYCLE_RANGE *)(v11 - 13));
    v28 = 0;
    VIDMM_RECYCLE_RANGE::DebouncedDecommit(v23, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v28);
    if ( !v28 )
    {
      v8 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v23 + 17);
      if ( v8 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v8);
    }
  }
  v12 = (struct _SLIST_ENTRY **)((char *)this + 1648);
  v13 = 4LL;
  do
  {
    v14 = *(v12 - 4);
    if ( v14 )
    {
      v15 = *((_QWORD *)this + 164);
      ++*(_DWORD *)(v15 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v15) >= *(_WORD *)(v15 + 16) )
      {
        ++*(_DWORD *)(v15 + 32);
        (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v15 + 56))(v14, v15);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v15, v14);
      }
    }
    v16 = *v12;
    if ( *v12 )
    {
      v17 = *((_QWORD *)this + 165);
      ++*(_DWORD *)(v17 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v17) >= *(_WORD *)(v17 + 16) )
      {
        ++*(_DWORD *)(v17 + 32);
        (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v17 + 56))(v16, v17);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v17, v16);
      }
    }
    ++v12;
    --v13;
  }
  while ( v13 );
  v18 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 164);
  if ( v18 )
  {
    ExDeleteLookasideListEx(v18);
    operator delete(*((void **)this + 164));
  }
  v19 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 165);
  if ( v19 )
  {
    ExDeleteLookasideListEx(v19);
    operator delete(*((void **)this + 165));
  }
  v20 = (void *)*((_QWORD *)this + 198);
  if ( v20 )
    operator delete(v20);
  KeUnstackDetachProcess(&ApcState);
  if ( v29[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29, v21);
  DXGFASTMUTEX::~DXGFASTMUTEX((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328), v21, v22);
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1240));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1168));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1096));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1024));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 952));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 880));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 808));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 736));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 664));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 592));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 520));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 448));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 376));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 304));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 232));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 160));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 88));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 16));
  *(_QWORD *)this = &VIDMM_PROCESS_HEAP_INTERFACE::`vftable';
}
