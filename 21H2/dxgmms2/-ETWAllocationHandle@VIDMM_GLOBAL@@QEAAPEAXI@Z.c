/*
 * XREFs of ?ETWAllocationHandle@VIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C00690A0
 * Callers:
 *     VidMmETWAllocationHandle @ 0x1C0001560 (VidMmETWAllocationHandle.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001098 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001690 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void *__fastcall VIDMM_GLOBAL::ETWAllocationHandle(VIDMM_GLOBAL *this, unsigned int a2)
{
  struct DXGPROCESS *Current; // rbx
  char *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rbx
  __int64 v9; // rax

  Current = DXGPROCESS::GetCurrent();
  v4 = (char *)Current + 208;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v5 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v5 < *((_DWORD *)Current + 64) )
  {
    v6 = *((_QWORD *)Current + 30);
    v7 = *(_DWORD *)(v6 + 16 * v5 + 8);
    if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v6 + 16 * v5 + 8) & 0x60) && (v7 & 0x2000) == 0 && (v7 & 0x1F) != 0 )
    {
      if ( (v7 & 0x1F) == 5 )
      {
        v8 = *(_QWORD *)(v6 + 16LL * (unsigned int)v5);
        goto LABEL_9;
      }
      v9 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v9 + 24) = 316LL;
      WdLogEvent5_WdError(v9);
    }
  }
  v8 = 0LL;
LABEL_9:
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
    return *(void **)(v8 + 24);
  else
    return 0LL;
}
