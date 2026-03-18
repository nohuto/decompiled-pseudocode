/*
 * XREFs of ?Activate@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1C01E096C
 * Callers:
 *     ?StartDeadlockTrackers@DXGADAPTER@@QEAAXXZ @ 0x1C01B42C4 (-StartDeadlockTrackers@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z @ 0x1C01E07D0 (--0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDEADLOCK_TRACKER::Activate(DXGDEADLOCK_TRACKER *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 9, 1, 0) )
  {
    *(_QWORD *)this = KeQueryUnbiasedInterruptTime();
    v2 = *((_QWORD *)this + 3);
    v3 = -10000LL * *(int *)(v2 + 4576);
    *((_DWORD *)this + 2) = *(_DWORD *)(v2 + 4576);
    if ( KeSetTimer((PKTIMER)((char *)this + 248), (LARGE_INTEGER)v3, (PKDPC)((char *)this + 312)) )
    {
      WdLogSingleEntry1(1LL, 12174LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Status == FALSE", 12174LL, 0LL, 0LL, 0LL, 0LL);
    }
    v4 = *((_QWORD *)this + 3);
    v5 = *(int *)(v4 + 4580);
    *((_DWORD *)this + 3) = v5;
    *((_DWORD *)this + 4) = *(_DWORD *)(v4 + 4584);
    if ( KeSetTimer((PKTIMER)((char *)this + 40), (LARGE_INTEGER)(-10000 * v5), (PKDPC)((char *)this + 104)) )
    {
      WdLogSingleEntry1(1LL, 12181LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Status == FALSE", 12181LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
}
