/*
 * XREFs of CmpGlobalLockKeyForWrite @ 0x1407ADD40
 * Callers:
 *     CmLockKeyForWrite @ 0x1407ADB50 (CmLockKeyForWrite.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407ADE5C (CmpCreateGlobalKeyLockEntry.c)
 */

__int64 __fastcall CmpGlobalLockKeyForWrite(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 GlobalKeyLockEntry; // rbx
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
  GlobalKeyLockEntry = qword_140C47E08;
  v6 = 0;
  while ( 1 )
  {
    if ( (__int64 *)GlobalKeyLockEntry == &qword_140C47E08 )
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
    ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
    return v6;
  }
LABEL_5:
  ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  GlobalKeyLockEntry = CmpCreateGlobalKeyLockEntry(a1);
  if ( GlobalKeyLockEntry )
  {
    *(_WORD *)(a1 + 8) |= 0x80u;
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
    v11 = (__int64 *)qword_140C47E10;
    if ( *(__int64 **)qword_140C47E10 != &qword_140C47E08 )
      __fastfail(3u);
    *(_QWORD *)GlobalKeyLockEntry = &qword_140C47E08;
    *(_QWORD *)(GlobalKeyLockEntry + 8) = v11;
    *v11 = GlobalKeyLockEntry;
    qword_140C47E10 = GlobalKeyLockEntry;
    goto LABEL_8;
  }
  return (unsigned int)-1073741670;
}
