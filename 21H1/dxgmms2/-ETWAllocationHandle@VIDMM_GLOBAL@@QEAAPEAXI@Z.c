/*
 * XREFs of ?ETWAllocationHandle@VIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C006E950
 * Callers:
 *     VidMmETWAllocationHandle @ 0x1C0001B00 (VidMmETWAllocationHandle.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001A10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001F64 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void *__fastcall VIDMM_GLOBAL::ETWAllocationHandle(VIDMM_GLOBAL *this, unsigned int a2)
{
  struct DXGPROCESS *Current; // rbx
  char *v4; // rdi
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax

  Current = DXGPROCESS::GetCurrent();
  v4 = (char *)Current + 208;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v6 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < *((_DWORD *)Current + 64) )
  {
    v7 = *((_QWORD *)Current + 30);
    v8 = *(_DWORD *)(v7 + 16 * v6 + 8);
    if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v7 + 16 * v6 + 8) & 0x60) && (v8 & 0x2000) == 0 && (v8 & 0x1F) != 0 )
    {
      v9 = v8 & 0x1F;
      if ( (_BYTE)v9 == 5 )
      {
        v10 = *(_QWORD *)(v7 + 16LL * (unsigned int)v6);
        goto LABEL_9;
      }
      v11 = WdLogNewEntry5_WdError(v9, 2LL * (unsigned int)v6, v7, v5);
      *(_QWORD *)(v11 + 24) = 267LL;
      WdLogEvent5_WdError(v11);
    }
  }
  v10 = 0LL;
LABEL_9:
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( v10 )
    return *(void **)(v10 + 24);
  else
    return 0LL;
}
