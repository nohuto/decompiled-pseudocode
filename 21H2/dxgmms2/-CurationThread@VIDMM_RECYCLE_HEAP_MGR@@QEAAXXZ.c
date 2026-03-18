/*
 * XREFs of ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C007E9F0
 * Callers:
 *     ?VidMmRangeCurationThread@@YAXPEAX@Z @ 0x1C007E9D0 (-VidMmRangeCurationThread@@YAXPEAX@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001344 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001400 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00014D4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C007EECC (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::CurationThread(VIDMM_RECYCLE_HEAP_MGR *this)
{
  PRKPROCESS *v2; // rcx
  bool v3; // zf
  _BYTE v4[16]; // [rsp+28h] [rbp-50h] BYREF
  _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  v2 = (PRKPROCESS *)*((_QWORD *)this + 1);
  ++*((_QWORD *)this + 197);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*v2, &ApcState);
  VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(this, 1, 0);
  KeUnstackDetachProcess(&ApcState);
  if ( *((VIDMM_RECYCLE_HEAP_MGR **)this + 195) == (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1560)
    && *((VIDMM_RECYCLE_HEAP_MGR **)this + 193) == (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1544) )
  {
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)this + 396, 2, 1) == 1;
    _InterlockedExchange((volatile __int32 *)this + 384, 0);
    if ( !v3 )
      goto LABEL_4;
  }
  else
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 396, 2, 1) != 1 )
    {
      KeSetTimer((PKTIMER)((char *)this + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 1440));
      goto LABEL_4;
    }
    _InterlockedExchange((volatile __int32 *)this + 384, 0);
  }
  KeSetEvent(*((PRKEVENT *)this + 199), 0, 0);
LABEL_4:
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
