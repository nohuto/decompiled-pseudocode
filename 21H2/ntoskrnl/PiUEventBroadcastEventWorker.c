/*
 * XREFs of PiUEventBroadcastEventWorker @ 0x1407F4BB0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     MmGetSessionById @ 0x1402DF880 (MmGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x140947DA4 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140947E30 (PiUEventBroadcastPortsChangedEvent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventBroadcastEventWorker(PVOID P)
{
  char v2; // si
  _DWORD *v3; // rdi
  char v4; // bl
  int v5; // ecx
  unsigned int v6; // ecx
  __int64 *v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  unsigned int v10; // ecx
  void *SessionById; // rbx
  __int64 *v12; // rcx
  int v13; // ecx

  v2 = 0;
  do
  {
    ExAcquireFastMutex(&PiUEventBroadcastEventQueueLock);
    v3 = PiUEventBroadcastEventQueue;
    v4 = *((_BYTE *)PiUEventBroadcastEventQueue + 16);
    KeReleaseGuardedMutex(&PiUEventBroadcastEventQueueLock);
    if ( v4 )
    {
      v5 = v3[5];
      if ( !v5 )
      {
        v6 = v3[6];
        if ( v6 == -1 )
        {
          v7 = &WNF_PNPA_DEVNODES_CHANGED;
LABEL_6:
          ZwUpdateWnfStateData((__int64)v7, 0LL);
          goto LABEL_7;
        }
        SessionById = (void *)MmGetSessionById(v6);
        if ( !SessionById )
          goto LABEL_7;
        v12 = &WNF_PNPA_DEVNODES_CHANGED_SESSION;
        goto LABEL_18;
      }
      v9 = v5 - 1;
      if ( !v9 )
      {
        v10 = v3[6];
        if ( v10 == -1 )
        {
          v7 = &WNF_PNPA_VOLUMES_CHANGED;
          goto LABEL_6;
        }
        SessionById = (void *)MmGetSessionById(v10);
        if ( !SessionById )
          goto LABEL_7;
        v12 = &WNF_PNPA_VOLUMES_CHANGED_SESSION;
LABEL_18:
        ZwUpdateWnfStateData((__int64)v12, 0LL);
        ObfDereferenceObject(SessionById);
        goto LABEL_7;
      }
      v13 = v9 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
          PiUEventBroadcastPortsChangedEvent((unsigned int)v3[6], v3 + 7, v3 + 11);
      }
      else
      {
        PiUEventBroadcastHardwareProfilesChangedEvent((unsigned int)v3[6], v3 + 7);
      }
    }
LABEL_7:
    ExAcquireFastMutex(&PiUEventBroadcastEventQueueLock);
    if ( *((PVOID **)PiUEventBroadcastEventQueue + 1) != &PiUEventBroadcastEventQueue
      || (v8 = *(_QWORD *)PiUEventBroadcastEventQueue,
          *(PVOID *)(*(_QWORD *)PiUEventBroadcastEventQueue + 8LL) != PiUEventBroadcastEventQueue) )
    {
      __fastfail(3u);
    }
    PiUEventBroadcastEventQueue = *(PVOID *)PiUEventBroadcastEventQueue;
    *(_QWORD *)(v8 + 8) = &PiUEventBroadcastEventQueue;
    if ( PiUEventBroadcastEventQueue == &PiUEventBroadcastEventQueue )
      v2 = 1;
    KeReleaseGuardedMutex(&PiUEventBroadcastEventQueueLock);
    ExFreePoolWithTag(v3, 0x59706E50u);
  }
  while ( !v2 );
  ExFreePoolWithTag(P, 0x59706E50u);
}
