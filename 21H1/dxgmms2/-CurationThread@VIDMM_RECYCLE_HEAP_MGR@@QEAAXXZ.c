/*
 * XREFs of ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C007B4EC
 * Callers:
 *     ?VidMmRangeCurationThread@@YAXPEAX@Z @ 0x1C007B370 (-VidMmRangeCurationThread@@YAXPEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004B84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C007B390 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::CurationThread(VIDMM_RECYCLE_HEAP_MGR *this, __int64 a2, __int64 a3)
{
  PRKPROCESS *v4; // rcx
  __int64 v5; // rdx
  bool v6; // zf
  __int64 v7; // rax
  char *v8; // [rsp+28h] [rbp-50h] BYREF
  char v9; // [rsp+30h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  v9 = 0;
  v8 = (char *)this + 1328;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    v7 = WdLogNewEntry5_WdAssertion(-1328LL, a2, a3);
    *(_QWORD *)(v7 + 24) = 760LL;
    WdLogEvent5_WdAssertion(v7);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v8, a2);
  v4 = (PRKPROCESS *)*((_QWORD *)this + 1);
  ++*((_QWORD *)this + 196);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*v4, &ApcState);
  VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(this, 1, 0);
  KeUnstackDetachProcess(&ApcState);
  if ( *((VIDMM_RECYCLE_HEAP_MGR **)this + 194) == (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1552)
    && *((VIDMM_RECYCLE_HEAP_MGR **)this + 192) == (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1536) )
  {
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)this + 394, 2, 1) == 1;
    _InterlockedExchange((volatile __int32 *)this + 382, 0);
    if ( !v6 )
      goto LABEL_6;
  }
  else
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 394, 2, 1) != 1 )
    {
      KeSetTimer((PKTIMER)((char *)this + 1368), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 1432));
      goto LABEL_6;
    }
    _InterlockedExchange((volatile __int32 *)this + 382, 0);
  }
  KeSetEvent(*((PRKEVENT *)this + 198), 0, 0);
LABEL_6:
  if ( v9 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v8, v5);
}
