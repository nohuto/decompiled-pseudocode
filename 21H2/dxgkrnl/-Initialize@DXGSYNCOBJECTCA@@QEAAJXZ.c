/*
 * XREFs of ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1C033FF08
 * Callers:
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z @ 0x1C0198FA0 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGSYNCOBJECTCA::Initialize(DXGSYNCOBJECTCA *this)
{
  _OWORD *PoolWithTag; // rax
  __int64 v3; // rbx
  _QWORD *v5; // rax
  int v6; // eax

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x4B677844u);
  v3 = 0LL;
  *((_QWORD *)this + 39) = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *((_QWORD *)PoolWithTag + 6) = 0LL;
    v5 = (_QWORD *)(*((_QWORD *)this + 39) + 16LL);
    v5[1] = v5;
    *v5 = v5;
    KeInitializeSpinLock((PKSPIN_LOCK)(*((_QWORD *)this + 39) + 8LL));
    _InterlockedIncrement(*((volatile signed __int32 **)this + 39));
    v6 = *((_DWORD *)this + 50);
    if ( v6 == 3 || v6 == 5 )
      v3 = *((_QWORD *)this + 26);
    *(_QWORD *)(*((_QWORD *)this + 39) + 40LL) = v3;
    *(_QWORD *)(*((_QWORD *)this + 39) + 32LL) = v3;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating VIDSCH_CROSS_ADAPTER_SYNC_OBJECT_INFO class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
