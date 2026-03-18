/*
 * XREFs of CmpGlobalLockKeyForWrite @ 0x1407BEDE0
 * Callers:
 *     CmLockKeyForWrite @ 0x1407BEBF0 (CmLockKeyForWrite.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407BEEFC (CmpCreateGlobalKeyLockEntry.c)
 */

__int64 __fastcall CmpGlobalLockKeyForWrite(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 GlobalKeyLockEntry; // rbx
  unsigned int v6; // edi
  struct _KTHREAD *v7; // rax
  __int64 *v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
  GlobalKeyLockEntry = qword_140C47D08;
  v6 = 0;
  while ( 1 )
  {
    if ( (__int64 *)GlobalKeyLockEntry == &qword_140C47D08 )
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v6;
  }
LABEL_5:
  ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  GlobalKeyLockEntry = CmpCreateGlobalKeyLockEntry(a1);
  if ( GlobalKeyLockEntry )
  {
    *(_WORD *)(a1 + 8) |= 0x80u;
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
    v8 = (__int64 *)qword_140C47D10;
    if ( *(__int64 **)qword_140C47D10 != &qword_140C47D08 )
      __fastfail(3u);
    *(_QWORD *)GlobalKeyLockEntry = &qword_140C47D08;
    *(_QWORD *)(GlobalKeyLockEntry + 8) = v8;
    *v8 = GlobalKeyLockEntry;
    qword_140C47D10 = GlobalKeyLockEntry;
    goto LABEL_8;
  }
  return (unsigned int)-1073741670;
}
