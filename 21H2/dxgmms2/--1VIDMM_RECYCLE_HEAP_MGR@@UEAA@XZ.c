/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0081C04
 * Callers:
 *     ??_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z @ 0x1C0018100 (--_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001344 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001400 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00014D4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00027C4 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1C007C924 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C007D0FC (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C007F7CC (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008108C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1C008200C (--1VIDMM_RECYCLE_HEAP@@QEAA@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::~VIDMM_RECYCLE_HEAP_MGR(VIDMM_RECYCLE_HEAP_MGR *this)
{
  PRKPROCESS *v2; // rcx
  char *v3; // rdx
  __int64 v4; // rax
  char **v5; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v6; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v7; // rdi
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  struct _SLIST_ENTRY **v10; // rsi
  __int64 v11; // r15
  struct _SLIST_ENTRY *v12; // r14
  __int64 v13; // rdi
  struct _SLIST_ENTRY *v14; // r14
  __int64 v15; // rdi
  struct _LOOKASIDE_LIST_EX *v16; // rcx
  struct _LOOKASIDE_LIST_EX *v17; // rcx
  void *v18; // rcx
  struct VIDMM_RECYCLE_RANGE *v19; // r14
  VIDMM_RECYCLE_BLOCK **v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // [rsp+30h] [rbp-39h] BYREF
  int v24; // [rsp+34h] [rbp-35h] BYREF
  _BYTE v25[16]; // [rsp+38h] [rbp-31h] BYREF
  char v26[8]; // [rsp+48h] [rbp-21h] BYREF
  DXGPUSHLOCK *v27; // [rsp+50h] [rbp-19h]
  int v28; // [rsp+58h] [rbp-11h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-9h] BYREF

  *(_QWORD *)this = &VIDMM_RECYCLE_HEAP_MGR::`vftable';
  v2 = (PRKPROCESS *)*((_QWORD *)this + 1);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*v2, &ApcState);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
    (DXGAUTOPUSHLOCK *)v26,
    (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock,
    0);
  DXGPUSHLOCK::AcquireExclusive(v27);
  v3 = (char *)this + 1600;
  v28 = 2;
  v4 = *((_QWORD *)this + 200);
  if ( v4 )
  {
    if ( *(char **)(v4 + 8) != v3 || (v5 = (char **)*((_QWORD *)this + 201), *v5 != v3) )
      __fastfail(3u);
    *v5 = (char *)v4;
    *(_QWORD *)(v4 + 8) = v5;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  _InterlockedExchange((volatile __int32 *)this + 396, 1);
  v6 = (VIDMM_RECYCLE_HEAP_MGR *)*((unsigned int *)this + 384);
  if ( (_DWORD)v6 && !KeCancelTimer((PKTIMER)((char *)this + 1376)) )
  {
    KeFlushQueuedDpcs();
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
    KeWaitForSingleObject(*((PVOID *)this + 199), Executive, 0, 0, 0LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  }
  v7 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 193);
  while ( v7 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1544) )
  {
    v19 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v7 - 104);
    v7 = *(VIDMM_RECYCLE_HEAP_MGR **)v7;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v6, v19);
    v23 = 0;
    VIDMM_RECYCLE_RANGE::FinalizedUnlock(v19, &v23);
    if ( !v23 )
    {
      v6 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v19 + 17);
      if ( v6 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v6);
    }
  }
  v8 = (_QWORD *)((char *)this + 1560);
  while ( 1 )
  {
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
      break;
    v20 = (VIDMM_RECYCLE_BLOCK **)(v9 - 13);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v6, (struct VIDMM_RECYCLE_RANGE *)(v9 - 13));
    v24 = 0;
    VIDMM_RECYCLE_RANGE::DebouncedDecommit(v20, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v24, v21, v22);
    if ( !v24 )
    {
      v6 = v20[17];
      if ( v6 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v6);
    }
  }
  v10 = (struct _SLIST_ENTRY **)((char *)this + 1656);
  v11 = 4LL;
  do
  {
    v12 = *(v10 - 4);
    if ( v12 )
    {
      v13 = *((_QWORD *)this + 164);
      ++*(_DWORD *)(v13 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v13) >= *(_WORD *)(v13 + 16) )
      {
        ++*(_DWORD *)(v13 + 32);
        (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v13 + 56))(v12, v13);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v13, v12);
      }
    }
    v14 = *v10;
    if ( *v10 )
    {
      v15 = *((_QWORD *)this + 165);
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
    ++v10;
    --v11;
  }
  while ( v11 );
  v16 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 164);
  if ( v16 )
  {
    ExDeleteLookasideListEx(v16);
    operator delete(*((void **)this + 164));
  }
  v17 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 165);
  if ( v17 )
  {
    ExDeleteLookasideListEx(v17);
    operator delete(*((void **)this + 165));
  }
  v18 = (void *)*((_QWORD *)this + 199);
  if ( v18 )
    operator delete(v18);
  KeUnstackDetachProcess(&ApcState);
  if ( v25[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
  DXGFASTMUTEX::~DXGFASTMUTEX((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
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
