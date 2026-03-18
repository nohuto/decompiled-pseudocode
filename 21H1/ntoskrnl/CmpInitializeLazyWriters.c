/*
 * XREFs of CmpInitializeLazyWriters @ 0x140788418
 * Callers:
 *     CmpCmdInit @ 0x140787AC4 (CmpCmdInit.c)
 * Callees:
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x140355110 (KeInitializeTimerEx.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     PoRegisterPowerSettingCallback @ 0x140711220 (PoRegisterPowerSettingCallback.c)
 *     CmpCreateRegistryThread @ 0x140788804 (CmpCreateRegistryThread.c)
 */

NTSTATUS CmpInitializeLazyWriters()
{
  _QWORD *v0; // r14
  __int64 v1; // rsi
  __int64 v2; // rdx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  v0 = &unk_140C003E8;
  Handle = 0LL;
  dword_140C00400 = CmpLazyFlushIntervalInSeconds;
  v1 = 0LL;
  dword_140C004C0 = CmpLazyReconcileIntervalInSeconds;
  dword_140C00580 = CmpLazyLocalizeIntervalInSeconds;
  do
  {
    KeInitializeTimerEx(&CmpLazyWriterData + 3 * v1, NotificationTimer);
    KeInitializeEvent((PRKEVENT)(&CmpLazyWriterData + 3 * v1 + 2), SynchronizationEvent, 0);
    KeInitializeDpc(
      (PRKDPC)&CmpLazyWriterData + 3 * v1 + 1,
      (PKDEFERRED_ROUTINE)CmpLazyFlushDpcRoutine,
      &CmpLazyWriterData + 3 * v1);
    *v0 = 0LL;
    if ( (int)CmpCreateRegistryThread(&Handle, v2, CmpLazyWriteWorker, &CmpLazyWriterData + 3 * v1) < 0 )
      KeBugCheckEx(0x51u, 0x18uLL, (unsigned int)v1, 0LL, 0LL);
    NtClose(Handle);
    v1 = (unsigned int)(v1 + 1);
    v0 += 24;
  }
  while ( (unsigned int)v1 < 3 );
  CmpUserPresent = 1;
  return PoRegisterPowerSettingCallback(
           0LL,
           &GUID_GLOBAL_USER_PRESENCE,
           (PPOWER_SETTING_CALLBACK)CmpUserPresenceCallback,
           0LL,
           0LL);
}
