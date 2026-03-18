/*
 * XREFs of CmpGlobalLockKeyForWrite @ 0x14080FBCC
 * Callers:
 *     CmLockKeyForWrite @ 0x14080F9EC (CmLockKeyForWrite.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     CmpUnlockGlobalKeyLockTracker @ 0x14080FCA4 (CmpUnlockGlobalKeyLockTracker.c)
 *     CmpLockGlobalKeyLockTrackerExclusive @ 0x14080FCD0 (CmpLockGlobalKeyLockTrackerExclusive.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x14080FD00 (CmpCreateGlobalKeyLockEntry.c)
 */

__int64 __fastcall CmpGlobalLockKeyForWrite(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 GlobalKeyLockEntry; // rbx
  unsigned int v6; // edi
  __int64 *v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
  GlobalKeyLockEntry = qword_140C49228;
  v6 = 0;
  while ( 1 )
  {
    if ( (__int64 *)GlobalKeyLockEntry == &qword_140C49228 )
      goto LABEL_5;
    if ( *(_QWORD *)(GlobalKeyLockEntry + 24) == a1 )
      break;
    GlobalKeyLockEntry = *(_QWORD *)GlobalKeyLockEntry;
  }
  if ( GlobalKeyLockEntry )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(GlobalKeyLockEntry + 16)) <= 1 )
      __fastfail(0xEu);
LABEL_8:
    *a2 = GlobalKeyLockEntry;
    CmpUnlockGlobalKeyLockTracker();
    return v6;
  }
LABEL_5:
  CmpUnlockGlobalKeyLockTracker();
  GlobalKeyLockEntry = CmpCreateGlobalKeyLockEntry(a1);
  if ( GlobalKeyLockEntry )
  {
    *(_WORD *)(a1 + 8) |= 0x80u;
    CmpLockGlobalKeyLockTrackerExclusive();
    v7 = (__int64 *)qword_140C49230;
    if ( *(__int64 **)qword_140C49230 != &qword_140C49228 )
      __fastfail(3u);
    *(_QWORD *)GlobalKeyLockEntry = &qword_140C49228;
    *(_QWORD *)(GlobalKeyLockEntry + 8) = v7;
    *v7 = GlobalKeyLockEntry;
    qword_140C49230 = GlobalKeyLockEntry;
    goto LABEL_8;
  }
  return (unsigned int)-1073741670;
}
