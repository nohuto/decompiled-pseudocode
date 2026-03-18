/*
 * XREFs of ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C019A254
 * Callers:
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x1C00599F4 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C019A330 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT(DXGADAPTERSYNCOBJECT *this)
{
  __int64 v2; // rdi
  DXGADAPTERSYNCOBJECT *v3; // rcx
  DXGADAPTERSYNCOBJECT **v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx

  if ( *((_BYTE *)this + 24) )
  {
    v2 = *((_QWORD *)this + 2) + 192LL;
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)v2);
    v3 = *(DXGADAPTERSYNCOBJECT **)this;
    if ( *(DXGADAPTERSYNCOBJECT **)(*(_QWORD *)this + 8LL) != this
      || (v4 = (DXGADAPTERSYNCOBJECT **)*((_QWORD *)this + 1), *v4 != this) )
    {
      __fastfail(3u);
    }
    *v4 = v3;
    *((_QWORD *)v3 + 1) = v4;
    if ( *(struct _KTHREAD **)(v2 + 24) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v2, 0LL, 0LL);
    v5 = *(_DWORD *)(v2 + 32);
    if ( v5 <= 0 )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 516LL, 0LL, 0LL, 0LL, 0LL);
      v5 = *(_DWORD *)(v2 + 32);
    }
    v6 = v5 - 1;
    *(_DWORD *)(v2 + 32) = v6;
    if ( !v6 )
    {
      *(_QWORD *)(v2 + 24) = 0LL;
      ExReleasePushLockExclusiveEx(v2 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
    v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v7 + 16), (struct DXGADAPTER *)v7);
  }
  if ( *((_QWORD *)this + 4) )
  {
    WdLogSingleEntry1(1LL, 1607LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pVidSchSyncObject == NULL", 1607LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 2) = 0LL;
}
