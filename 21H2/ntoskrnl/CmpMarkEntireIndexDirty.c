/*
 * XREFs of CmpMarkEntireIndexDirty @ 0x14087AFE8
 * Callers:
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmpLightWeightDuplicateParentLists @ 0x14087F43C (CmpLightWeightDuplicateParentLists.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
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
    ExfTryToWakePushLock(BugCheckParameter2 + 80);
  KeAbPostRelease(BugCheckParameter2 + 80);
  if ( v5 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
  return v6;
}
