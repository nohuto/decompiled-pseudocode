/*
 * XREFs of CmpUpdateHiveRootCellFlags @ 0x1406150D4
 * Callers:
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpUpdateHiveRootCellFlags(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  signed __int64 *v2; // rdi
  unsigned int v3; // ebp
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = (signed __int64 *)(BugCheckParameter2 + 72);
  v3 = BugCheckParameter3;
  v9 = 0xFFFFFFFFLL;
  ExAcquirePushLockSharedEx(BugCheckParameter2 + 72, 0LL);
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(BugCheckParameter2, v3, &v9);
  v6 = v5;
  if ( v5 )
  {
    if ( (*(_BYTE *)(v5 + 2) & 0xC) != 0xC )
    {
      if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, v3) )
      {
        v7 = -1073741670;
        goto LABEL_6;
      }
      *(_WORD *)(v6 + 2) |= 0xCu;
    }
    v7 = 0;
LABEL_6:
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
    goto LABEL_7;
  }
  v7 = -1073741670;
LABEL_7:
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v7;
}
