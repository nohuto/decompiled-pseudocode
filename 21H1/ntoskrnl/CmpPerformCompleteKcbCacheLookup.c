/*
 * XREFs of CmpPerformCompleteKcbCacheLookup @ 0x140624630
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14061C310 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 * Callees:
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14061CE00 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpRecordParseFailure @ 0x140622100 (CmpRecordParseFailure.c)
 *     CmpUnlockHashEntryByKcb @ 0x140622370 (CmpUnlockHashEntryByKcb.c)
 *     CmpGetComponentNameAtIndex @ 0x140623290 (CmpGetComponentNameAtIndex.c)
 *     CmpDereferenceKeyControlBlock @ 0x140624030 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbShared @ 0x140626200 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1406265A0 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14068E788 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLockHashEntrySharedByKcb @ 0x140695DD0 (CmpLockHashEntrySharedByKcb.c)
 *     CmpIsHiveLoadingOnOtherThread @ 0x1406BC880 (CmpIsHiveLoadingOnOtherThread.c)
 *     CmpWaitForHiveMount @ 0x1407AE9E4 (CmpWaitForHiveMount.c)
 */

__int64 __fastcall CmpPerformCompleteKcbCacheLookup(
        ULONG_PTR BugCheckParameter2,
        int a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        ULONG_PTR *a6,
        _BYTE *a7,
        _WORD *a8)
{
  unsigned int v8; // r15d
  __int16 v10; // r14
  ULONG_PTR v13; // rbx
  ULONG_PTR v14; // rdi
  char v15; // bp
  int v17; // edx
  _DWORD *v18; // rdi
  __int64 ComponentNameAtIndex; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  char v22; // bl
  ULONG_PTR BugCheckParameter4[9]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+90h] [rbp+8h] BYREF
  __int64 v25; // [rsp+98h] [rbp+10h] BYREF
  int v26; // [rsp+A0h] [rbp+18h]

  v26 = a3;
  v8 = 0;
  LOWORD(v24) = 0;
  v10 = 0;
  BugCheckParameter4[0] = 0LL;
  LOBYTE(v25) = 0;
  v13 = BugCheckParameter2;
  while ( 1 )
  {
    CmpPerformSingleKcbCacheLookup(
      v13,
      *(_QWORD *)(v13 + 32),
      a4,
      (__int64)BugCheckParameter4,
      (__int64)&v25,
      (__int64)&v24);
    if ( v13 != BugCheckParameter2 )
      CmpDereferenceKeyControlBlockUnsafe(v13);
    v14 = BugCheckParameter4[0];
    a2 += (__int16)v24;
    v15 = v25;
    v10 += v24;
    if ( (*(_DWORD *)(BugCheckParameter4[0] + 184) & 0x20000) == 0 )
      goto LABEL_5;
    CmpLockKcbShared(BugCheckParameter4[0]);
    if ( (*(_DWORD *)(v14 + 184) & 0x20000) == 0 )
      goto LABEL_14;
    v13 = *(_QWORD *)(v14 + 104);
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v13);
    if ( (unsigned __int8)CmpIsHiveLoadingOnOtherThread(*(_QWORD *)(v13 + 32)) )
      break;
    if ( (*(_DWORD *)(v13 + 8) & 0x40000) != 0 )
    {
      v17 = 394496;
      v8 = -1073740763;
      goto LABEL_23;
    }
    CmpUnlockKcb(v14);
    if ( v15 )
      CmpUnlockHashEntryByKcb(v14);
    CmpDereferenceKeyControlBlock(v14);
    BugCheckParameter4[0] = 0LL;
    if ( v15 )
    {
      v14 = v13;
      CmpLockHashEntrySharedByKcb(v13);
      CmpLockKcbShared(v13);
LABEL_14:
      CmpUnlockKcb(v14);
LABEL_5:
      *a6 = v14;
      *a7 = v15;
      *a8 = v10;
      return v8;
    }
  }
  v8 = -1073741772;
  if ( !CmpLoadingSystemHivesActive )
    goto LABEL_22;
  if ( (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread()
    || (v18 = a5) == 0LL
    || (ComponentNameAtIndex = CmpGetComponentNameAtIndex(a4, a2 - 1),
        !(unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v20, v21, v18 + 34)) )
  {
    v14 = BugCheckParameter4[0];
LABEL_22:
    v17 = 394240;
    goto LABEL_23;
  }
  *v18 |= 0x100u;
  v17 = 393984;
  v14 = BugCheckParameter4[0];
  v8 = 259;
LABEL_23:
  CmpRecordParseFailure((__int64)a5, v17, v8);
  CmpDereferenceKeyControlBlockUnsafe(v13);
  v22 = v25;
  CmpUnlockKcb(v14);
  if ( v22 )
    CmpUnlockHashEntryByKcb(v14);
  if ( v14 )
    CmpDereferenceKeyControlBlock(v14);
  return v8;
}
