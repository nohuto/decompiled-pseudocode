/*
 * XREFs of CmpMarkEntireIndexDirty @ 0x14087D4FC
 * Callers:
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmpLightWeightDuplicateParentLists @ 0x140881DC4 (CmpLightWeightDuplicateParentLists.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x140707C20 (HvpMarkCellDirty.c)
 */

char __fastcall CmpMarkEntireIndexDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // ebx
  volatile signed __int64 *v4; // rbp
  _WORD *v5; // rdi
  char v6; // bl
  int v7; // esi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0xFFFFFFFFLL;
  v2 = BugCheckParameter3;
  v4 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  v5 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64 *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  BugCheckParameter3,
                  &v9);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v4, 0LL);
  v6 = HvpMarkCellDirty(BugCheckParameter2, v2, 1);
  if ( v6 )
  {
    if ( *v5 == 26994 && (v7 = 0, v5[1]) )
    {
      while ( 1 )
      {
        v6 = HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)&v5[2 * v7 + 2], 1);
        if ( !v6 )
          break;
        if ( ++v7 >= (unsigned int)(unsigned __int16)v5[1] )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v6 = 1;
    }
  }
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
  KeAbPostRelease(BugCheckParameter2 + 80);
  if ( v5 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
  return v6;
}
