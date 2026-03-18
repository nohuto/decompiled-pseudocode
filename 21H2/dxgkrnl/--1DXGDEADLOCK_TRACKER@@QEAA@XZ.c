/*
 * XREFs of ??1DXGDEADLOCK_TRACKER@@QEAA@XZ @ 0x1C01E1A34
 * Callers:
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@_N@Z @ 0x1C016ECD8 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1C01E1AEC (-Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 */

void __fastcall DXGDEADLOCK_TRACKER::~DXGDEADLOCK_TRACKER(DXGDEADLOCK_TRACKER *this)
{
  __int64 v1; // rbx
  DXGDEADLOCK_TRACKER **v3; // rdx
  DXGDEADLOCK_TRACKER **v4; // rcx
  __int64 v5; // rcx

  v1 = *((_QWORD *)this + 3);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 4600, 0LL);
  *(_QWORD *)(v1 + 4608) = KeGetCurrentThread();
  v3 = (DXGDEADLOCK_TRACKER **)*((_QWORD *)this + 28);
  if ( v3[1] != (DXGDEADLOCK_TRACKER *)((char *)this + 224)
    || (v4 = (DXGDEADLOCK_TRACKER **)*((_QWORD *)this + 29), *v4 != (DXGDEADLOCK_TRACKER *)((char *)this + 224)) )
  {
    __fastfail(3u);
  }
  *v4 = (DXGDEADLOCK_TRACKER *)v3;
  v3[1] = (DXGDEADLOCK_TRACKER *)v4;
  v5 = *((_QWORD *)this + 3) + 4600LL;
  *(_QWORD *)(v5 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  DXGDEADLOCK_TRACKER::Cancel(this);
  DXGADAPTER::ReleaseReference(*((DXGADAPTER **)this + 3));
}
