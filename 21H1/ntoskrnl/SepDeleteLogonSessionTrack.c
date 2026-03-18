/*
 * XREFs of SepDeleteLogonSessionTrack @ 0x140765CD0
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x140765A80 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x140766740 (SepRmDeleteLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x140917A10 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x14091EF2C (SepDeleteUnreferencedLogonSessionsInSilo.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     SepDeleteSessionLowboxEntries @ 0x14030D754 (SepDeleteSessionLowboxEntries.c)
 *     ObfDereferenceDeviceMap @ 0x1405DFD44 (ObfDereferenceDeviceMap.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406D2B64 (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteLogonSessionClaims @ 0x1406D2BD0 (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D2BF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObRevokeHandles @ 0x140764EFC (ObRevokeHandles.c)
 *     SepDeleteLogonSessionSidValues @ 0x14091E708 (SepDeleteLogonSessionSidValues.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDeleteLogonSessionTrack(_DWORD *a1, char a2)
{
  void *v2; // rsi
  __int64 v5; // r8
  _DWORD **v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v8; // rdi
  _DWORD *i; // rbx
  __int64 v10; // rcx
  void *v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  unsigned int v15; // ebx

  v2 = 0LL;
  v5 = (unsigned int)(1529154084 * *a1) >> 28;
  v6 = (_DWORD **)(SepLogonSessions + 8 * v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = &SepRmDbLock + (v5 & 3);
  ExAcquireResourceExclusiveLite(v8, 1u);
  for ( i = *v6; ; i = *(_DWORD **)i )
  {
    if ( !i )
    {
      v15 = -1073741729;
      goto LABEL_26;
    }
    if ( *((struct _LIST_ENTRY **)i + 20) == PsGetCurrentServerSilo() && *a1 == i[2] && a1[1] == i[3] )
      break;
    v6 = (_DWORD **)i;
  }
  if ( a2 )
  {
    i[8] |= 0x10u;
    ObRevokeHandles((_QWORD **)i + 16);
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  v10 = *((_QWORD *)i + 3);
  if ( !v10 || (i[8] & 8) == 0 && v10 == 1 )
  {
    *v6 = *(_DWORD **)i;
    v11 = (void *)*((_QWORD *)i + 5);
    if ( v11 )
    {
      *((_QWORD *)i + 5) = 0LL;
      v2 = v11;
    }
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegion();
    if ( v2 )
    {
      SepCleanupLUIDDeviceMapDirectory(a1, *((struct _LIST_ENTRY **)i + 20));
      ObfDereferenceDeviceMap(v2);
    }
    v12 = (void *)*((_QWORD *)i + 20);
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x734C6553u);
    v13 = (void *)*((_QWORD *)i + 8);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    SepDeleteLogonSessionClaims((__int64)i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock((struct _EX_RUNDOWN_REF *)i + 16);
    ExFreePoolWithTag(i, 0);
    SepDeleteSessionLowboxEntries();
    return 0LL;
  }
  v15 = -1073741564;
LABEL_26:
  ExReleaseResourceLite(v8);
  KeLeaveCriticalRegion();
  return v15;
}
