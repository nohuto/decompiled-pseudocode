/*
 * XREFs of AcpiDiagRequeueThermalPollingTimer @ 0x1C004943C
 * Callers:
 *     AcpiDiagThermalPollingTimerRoutine @ 0x1C0049500 (AcpiDiagThermalPollingTimerRoutine.c)
 *     AcpiDiagThermalPollingTraceControlCallback @ 0x1C0049580 (AcpiDiagThermalPollingTraceControlCallback.c)
 *     AcpiDiagInitialize @ 0x1C00BDD28 (AcpiDiagInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 */

void AcpiDiagRequeueThermalPollingTimer()
{
  KIRQL v0; // al
  __int64 Reserved; // rdx
  KIRQL v2; // bl
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  Reserved = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
  v2 = v0;
  if ( !*((_QWORD *)&WPP_MAIN_CB.Reserved + 1)
    || WPP_MAIN_CB.Reserved && (__int64)WPP_MAIN_CB.Reserved < *((__int64 *)&WPP_MAIN_CB.Reserved + 1) )
  {
    Reserved = (__int64)WPP_MAIN_CB.Reserved;
  }
  if ( Reserved )
  {
    *((_QWORD *)&v3 + 1) = -1LL;
    ((void (__fastcall *)(void *, __int64, _QWORD, __int128 *))KeSetTimer2)(
      &AcpiDiagThermalPollingTimer,
      -Reserved,
      0LL,
      &v3);
  }
  else
  {
    KeCancelTimer2(&AcpiDiagThermalPollingTimer);
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
}
