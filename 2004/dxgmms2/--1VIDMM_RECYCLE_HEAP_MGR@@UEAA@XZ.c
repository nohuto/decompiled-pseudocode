/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0076440
 * Callers:
 *     ??_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z @ 0x1C0001FD0 (--_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001CC0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002354 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0002394 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00023C0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004B84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1C005E5FC (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1C0076848 (--1VIDMM_RECYCLE_HEAP@@QEAA@XZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0077E18 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007A758 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C007AD40 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::~VIDMM_RECYCLE_HEAP_MGR(VIDMM_RECYCLE_HEAP_MGR *this)
{
  PRKPROCESS *v2; // rcx
  char *v3; // rdx
  __int64 v4; // rax
  char **v5; // rcx
  __int64 v6; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v7; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v8; // rdi
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  struct _SLIST_ENTRY **v11; // rsi
  __int64 v12; // r15
  struct _SLIST_ENTRY *v13; // r14
  __int64 v14; // rdi
  struct _SLIST_ENTRY *v15; // r14
  __int64 v16; // rdi
  struct _LOOKASIDE_LIST_EX *v17; // rcx
  struct _LOOKASIDE_LIST_EX *v18; // rcx
  void *v19; // rcx
  __int64 v20; // rdx
  VIDMM_RECYCLE_RANGE *v21; // rsi
  unsigned __int8 v22; // dl
  struct VIDMM_RECYCLE_RANGE *v23; // r14
  unsigned __int8 v24; // dl
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
    0);
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
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29, v6);
  _InterlockedExchange((volatile __int32 *)this + 394, 1);
  v7 = (VIDMM_RECYCLE_HEAP_MGR *)*((unsigned int *)this + 382);
  if ( (_DWORD)v7 && !KeCancelTimer((PKTIMER)((char *)this + 1368)) )
  {
    KeFlushQueuedDpcs();
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29, v25);
    KeWaitForSingleObject(*((PVOID *)this + 198), Executive, 0, 0, 0LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29, v26);
  }
  v8 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 192);
  while ( v8 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1536) )
  {
    v23 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v8 - 104);
    v8 = *(VIDMM_RECYCLE_HEAP_MGR **)v8;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v7, v23);
    v27 = 0;
    VIDMM_RECYCLE_RANGE::FinalizedUnlock(v23, &v27);
    if ( !v27 )
    {
      v7 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v23 + 17);
      if ( v7 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v7, v24);
    }
  }
  v9 = (_QWORD *)((char *)this + 1552);
  while ( 1 )
  {
    v10 = (_QWORD *)*v9;
    if ( (_QWORD *)*v9 == v9 )
      break;
    v21 = (VIDMM_RECYCLE_RANGE *)(v10 - 13);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v7, (struct VIDMM_RECYCLE_RANGE *)(v10 - 13));
    v28 = 0;
    VIDMM_RECYCLE_RANGE::DebouncedDecommit(v21, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v28);
    if ( !v28 )
    {
      v7 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v21 + 17);
      if ( v7 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v7, v22);
    }
  }
  v11 = (struct _SLIST_ENTRY **)((char *)this + 1648);
  v12 = 4LL;
  do
  {
    v13 = *(v11 - 4);
    if ( v13 )
    {
      v14 = *((_QWORD *)this + 164);
      ++*(_DWORD *)(v14 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v14) >= *(_WORD *)(v14 + 16) )
      {
        ++*(_DWORD *)(v14 + 32);
        (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v14 + 56))(v13, v14);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v14, v13);
      }
    }
    v15 = *v11;
    if ( *v11 )
    {
      v16 = *((_QWORD *)this + 165);
      ++*(_DWORD *)(v16 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v16) >= *(_WORD *)(v16 + 16) )
      {
        ++*(_DWORD *)(v16 + 32);
        (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v16 + 56))(v15, v16);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v16, v15);
      }
    }
    ++v11;
    --v12;
  }
  while ( v12 );
  v17 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 164);
  if ( v17 )
  {
    ExDeleteLookasideListEx(v17);
    operator delete(*((void **)this + 164));
  }
  v18 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 165);
  if ( v18 )
  {
    ExDeleteLookasideListEx(v18);
    operator delete(*((void **)this + 165));
  }
  v19 = (void *)*((_QWORD *)this + 198);
  if ( v19 )
    operator delete(v19);
  KeUnstackDetachProcess(&ApcState);
  if ( v29[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29, v20);
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
