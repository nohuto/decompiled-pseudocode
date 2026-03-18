/*
 * XREFs of CmpInitializeLazyWriters @ 0x1408334E4
 * Callers:
 *     CmpCmdInit @ 0x140832270 (CmpCmdInit.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
 *     CmpCreateRegistryThread @ 0x1408339FC (CmpCreateRegistryThread.c)
 */

NTSTATUS CmpInitializeLazyWriters()
{
  _QWORD *v0; // r14
  __int64 v1; // rsi
  __int64 v2; // rdx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  v0 = &unk_140C01A38;
  Handle = 0LL;
  dword_140C01A50 = CmpLazyFlushIntervalInSeconds;
  v1 = 0LL;
  dword_140C01B10 = CmpLazyReconcileIntervalInSeconds;
  dword_140C01BD0 = CmpLazyLocalizeIntervalInSeconds;
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
