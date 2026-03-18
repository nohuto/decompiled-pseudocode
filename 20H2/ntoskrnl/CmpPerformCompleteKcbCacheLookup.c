/*
 * XREFs of CmpPerformCompleteKcbCacheLookup @ 0x14061C460
 * Callers:
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061CB10 (CmpGetSymbolicLinkTarget.c)
 * Callees:
 *     CmpLockKcbShared @ 0x140613810 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x140613BB0 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
 *     CmpGetComponentNameAtIndex @ 0x14061C5F0 (CmpGetComponentNameAtIndex.c)
 *     CmpIsHiveLoadingOnOtherThread @ 0x14061CAC0 (CmpIsHiveLoadingOnOtherThread.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14061CAE0 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14061D4F4 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLockHashEntrySharedByKcb @ 0x140670A48 (CmpLockHashEntrySharedByKcb.c)
 *     CmpRecordParseFailure @ 0x1406B34E0 (CmpRecordParseFailure.c)
 *     CmpUnlockHashEntryByKcb @ 0x140702950 (CmpUnlockHashEntryByKcb.c)
 *     CmpWaitForHiveMount @ 0x1407BFA84 (CmpWaitForHiveMount.c)
 */

__int64 __fastcall CmpPerformCompleteKcbCacheLookup(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        ULONG_PTR *a6,
        _BYTE *a7,
        _WORD *a8)
{
  unsigned int v8; // r15d
  __int16 v10; // r14
  unsigned int v11; // eax
  ULONG_PTR v14; // rbx
  ULONG_PTR v15; // rdi
  char v16; // bp
  __int64 v18; // rdx
  _DWORD *v19; // rdi
  __int64 ComponentNameAtIndex; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  char v23; // bl
  ULONG_PTR BugCheckParameter4[9]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v25; // [rsp+90h] [rbp+8h] BYREF
  __int64 v26; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v27; // [rsp+A0h] [rbp+18h]

  v27 = a3;
  v8 = 0;
  LOWORD(v25) = 0;
  v10 = 0;
  BugCheckParameter4[0] = 0LL;
  v11 = a3;
  LOBYTE(v26) = 0;
  v14 = BugCheckParameter2;
  while ( 1 )
  {
    CmpPerformSingleKcbCacheLookup(
      (volatile signed __int64 *)v14,
      *(_QWORD *)(v14 + 32),
      a2,
      v11,
      a4,
      BugCheckParameter4,
      (char *)&v26,
      &v25);
    if ( v14 != BugCheckParameter2 )
      CmpDereferenceKeyControlBlockUnsafe(v14);
    v15 = BugCheckParameter4[0];
    a2 += (__int16)v25;
    v16 = v26;
    v10 += v25;
    if ( (*(_DWORD *)(BugCheckParameter4[0] + 184) & 0x20000) == 0 )
      goto LABEL_5;
    CmpLockKcbShared(BugCheckParameter4[0]);
    if ( (*(_DWORD *)(v15 + 184) & 0x20000) == 0 )
      goto LABEL_15;
    v14 = *(_QWORD *)(v15 + 104);
    CmpReferenceKeyControlBlockUnsafe(v14);
    if ( (unsigned __int8)CmpIsHiveLoadingOnOtherThread(*(_QWORD *)(v14 + 32)) )
      break;
    if ( (*(_DWORD *)(v14 + 8) & 0x40000) != 0 )
    {
      v18 = 394496LL;
      v8 = -1073740763;
      goto LABEL_24;
    }
    CmpUnlockKcb(v15);
    if ( v16 )
      CmpUnlockHashEntryByKcb(v15);
    CmpDereferenceKeyControlBlock(v15);
    BugCheckParameter4[0] = 0LL;
    if ( v16 )
    {
      v15 = v14;
      CmpLockHashEntrySharedByKcb(v14);
      CmpLockKcbShared(v14);
LABEL_15:
      CmpUnlockKcb(v15);
LABEL_5:
      *a6 = v15;
      *a7 = v16;
      *a8 = v10;
      return v8;
    }
    v11 = v27;
  }
  v8 = -1073741772;
  if ( !CmpLoadingSystemHivesActive )
    goto LABEL_23;
  if ( (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread()
    || (v19 = a5) == 0LL
    || (ComponentNameAtIndex = CmpGetComponentNameAtIndex(a4, a2 - 1),
        !(unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v21, v22, v19 + 34)) )
  {
    v15 = BugCheckParameter4[0];
LABEL_23:
    v18 = 394240LL;
    goto LABEL_24;
  }
  *v19 |= 0x100u;
  v18 = 393984LL;
  v15 = BugCheckParameter4[0];
  v8 = 259;
LABEL_24:
  CmpRecordParseFailure(a5, v18, v8);
  CmpDereferenceKeyControlBlockUnsafe(v14);
  v23 = v26;
  CmpUnlockKcb(v15);
  if ( v23 )
    CmpUnlockHashEntryByKcb(v15);
  if ( v15 )
    CmpDereferenceKeyControlBlock(v15);
  return v8;
}
