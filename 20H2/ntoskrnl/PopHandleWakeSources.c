/*
 * XREFs of PopHandleWakeSources @ 0x14099B220
 * Callers:
 *     PoBroadcastSystemState @ 0x1409952E0 (PoBroadcastSystemState.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x140247520 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x1402D6620 (KeInitializeTimerEx.c)
 *     PopWakeInfoReference @ 0x140331DA8 (PopWakeInfoReference.c)
 *     KeInitializeDpc @ 0x14033E040 (KeInitializeDpc.c)
 *     PopReleaseWakeSourceSpinLock @ 0x14038B5C4 (PopReleaseWakeSourceSpinLock.c)
 *     PopAcquireWakeSourceSpinLock @ 0x14038B5F8 (PopAcquireWakeSourceSpinLock.c)
 *     ExCopyWakeTimerInfo @ 0x1405B4640 (ExCopyWakeTimerInfo.c)
 *     PopFinalizeWakeInfo @ 0x140774984 (PopFinalizeWakeInfo.c)
 *     PopNewWakeSource @ 0x1408E9314 (PopNewWakeSource.c)
 *     PopUnlinkWakeSources @ 0x1408E94D8 (PopUnlinkWakeSources.c)
 *     PopValidateRTCWake @ 0x14099B40C (PopValidateRTCWake.c)
 */

void PopHandleWakeSources()
{
  int v0; // esi
  int v1; // edi
  __int64 v2; // rbx
  SIZE_T *v3; // rbp
  _DWORD *v4; // rdi
  _QWORD *v5; // rcx
  __int64 *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  char v8; // [rsp+70h] [rbp+8h] BYREF

  v0 = 0;
  v8 = 0;
  v1 = 4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (PopSimulate & 0x200000) == 0 && (PopFixedWakeSourceMask & 1) == 0 )
  {
    if ( (PopSimulate & 0x400000) == 0 && (PopFixedWakeSourceMask & 2) == 0 )
    {
      if ( (unsigned __int8)PopValidateRTCWake(&v8) && (PopSimulate & 0x100000) == 0 )
        v0 = 4;
    }
    else
    {
      v0 = 2;
    }
  }
  else
  {
    v0 = 1;
  }
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v2 = PopCurrentWakeInfo;
  if ( PopCurrentWakeInfo && !v0 )
    PopWakeInfoReference(PopCurrentWakeInfo);
  PopReleaseWakeSourceSpinLock(&LockHandle);
  if ( !v2 )
  {
    KeSetEvent(&PopWakeSourceAvailable, 0, 0);
    return;
  }
  if ( !v0 )
  {
    KeInitializeDpc((PRKDPC)(v2 + 48), (PKDEFERRED_ROUTINE)PopWakeSourceTimeoutDpc, 0LL);
    KeInitializeTimerEx((PKTIMER)(v2 + 112), NotificationTimer);
    KiSetTimerEx(v2 + 112, -20000000LL, 0, 0, v2 + 48);
    return;
  }
  if ( dword_140C23360 < 0 || (unsigned __int64)dword_140C23360 >= 3 )
    v3 = 0LL;
  else
    v3 = (SIZE_T *)qword_140C23378[3 * dword_140C23360];
  if ( v0 == 4 )
  {
    if ( (unsigned __int64)v3 <= 0xFFFFFFFFFFFFFFFCuLL )
      v1 = (v8 != 0) + 2;
  }
  else
  {
    v1 = 1;
  }
  v4 = PopNewWakeSource(v1);
  PopAcquireWakeSourceSpinLock(&LockHandle);
  PopCurrentWakeInfo = 0LL;
  PopReleaseWakeSourceSpinLock(&LockHandle);
  PopUnlinkWakeSources(v2);
  if ( v4 )
  {
    if ( (unsigned int)(v4[4] - 2) <= 1 )
    {
      ExCopyWakeTimerInfo(v3, (_QWORD *)v4 + 3);
    }
    else if ( v3 == (SIZE_T *)-1LL )
    {
      v4[6] = 0;
    }
    else if ( v3 == (SIZE_T *)-2LL )
    {
      v4[6] = 1;
    }
    else
    {
      if ( v3 == (SIZE_T *)-3LL )
        v0 = 2;
      v4[6] = v0;
    }
    v5 = *(_QWORD **)(v2 + 32);
    if ( *v5 != v2 + 24 )
LABEL_37:
      __fastfail(3u);
    *(_QWORD *)v4 = v2 + 24;
    *((_QWORD *)v4 + 1) = v5;
    *v5 = v4;
    *(_QWORD *)(v2 + 32) = v4;
    *(_DWORD *)(v2 + 40) = 1;
  }
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v6 = (__int64 *)qword_140C24208;
  if ( *(__int64 **)qword_140C24208 != &PopWakeInfoList )
    goto LABEL_37;
  ++PopWakeInfoCount;
  *(_QWORD *)v2 = &PopWakeInfoList;
  *(_QWORD *)(v2 + 8) = v6;
  *v6 = v2;
  qword_140C24208 = v2;
  PopReleaseWakeSourceSpinLock(&LockHandle);
  PopFinalizeWakeInfo(v2);
}
