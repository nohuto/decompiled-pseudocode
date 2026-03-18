/*
 * XREFs of ?ETWAllocationHandle@VIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C0092250
 * Callers:
 *     VidMmETWAllocationHandle @ 0x1C0002D70 (VidMmETWAllocationHandle.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002DE0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0014F50 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

void *__fastcall VIDMM_GLOBAL::ETWAllocationHandle(VIDMM_GLOBAL *this, unsigned int a2)
{
  struct DXGPROCESS *Current; // rsi
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // ecx
  __int64 v7; // rbx
  __int64 v9; // rcx

  Current = DXGPROCESS::GetCurrent();
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v4 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v4 >= *((_DWORD *)Current + 74) )
    goto LABEL_9;
  v5 = *((_QWORD *)Current + 35);
  v6 = *(_DWORD *)(v5 + 16 * v4 + 8);
  if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(v5 + 16 * v4 + 8) & 0x60) || (v6 & 0x2000) != 0 || (v6 & 0x1F) == 0 )
    goto LABEL_9;
  if ( (v6 & 0x1F) != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
LABEL_9:
    ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  v7 = *(_QWORD *)(v5 + 16LL * (unsigned int)v4);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 )
    return *(void **)(v7 + 24);
  return 0LL;
}
