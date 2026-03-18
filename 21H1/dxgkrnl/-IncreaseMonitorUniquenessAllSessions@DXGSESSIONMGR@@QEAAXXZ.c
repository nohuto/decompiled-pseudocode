/*
 * XREFs of ?IncreaseMonitorUniquenessAllSessions@DXGSESSIONMGR@@QEAAXXZ @ 0x1C016CE70
 * Callers:
 *     DxgkIncreaseMonitorUniqueness @ 0x1C016CE44 (DxgkIncreaseMonitorUniqueness.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 */

void __fastcall DXGSESSIONMGR::IncreaseMonitorUniquenessAllSessions(DXGSESSIONMGR *this)
{
  __int64 v2; // rdx
  __int64 i; // rbx
  __int64 v4; // rcx
  _BYTE v5[16]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (DXGSESSIONMGR *)((char *)this + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i);
    if ( v4 && *(_QWORD *)(v4 + 18520) )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(*(PRKPROCESS *)(v4 + 18632), &ApcState);
      _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * i) + 18520LL));
      KeUnstackDetachProcess(&ApcState);
    }
  }
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5, v2);
}
