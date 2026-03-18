/*
 * XREFs of ?ExecuteTimer@CAccessibilityTimer@@SAXW4_ACCESSIBILITY_TIMERS@@@Z @ 0x1C01A30F0
 * Callers:
 *     NtMITAccessibilityTimerNotification @ 0x1C012BC60 (NtMITAccessibilityTimerNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int16 __fastcall CAccessibilityTimer::ExecuteTimer(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int16 result; // ax
  void (__fastcall *v6)(struct tagWND *, __int64, __int64); // rbx

  v4 = (int)a1;
  result = 1 << a1;
  if ( ((unsigned __int16)(1 << a1) & CAccessibilityTimer::_timersState) != 0 )
  {
    v6 = 0LL;
    switch ( a1 )
    {
      case 1u:
        v6 = FKActivationTimer;
        break;
      case 2u:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))xxxFKRepeatRateTimer)(0LL, 0LL, 2LL, 0LL);
      case 3u:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))FKBounceKeyTimer)(0LL, 0LL, 3LL, 0LL);
      case 4u:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))xxxFKAcceptanceDelayTimer)(0LL, 0LL, 4LL, 0LL);
      case 5u:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))xxxMKMoveAccelCursorTimer)(0LL, 0LL, 5LL, 0LL);
      case 6u:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))xxxMKMoveConstCursorTimer)(0LL, 0LL, 6LL, 0LL);
      case 7u:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))xxxToggleKeysTimer)(0LL, 0LL, 7LL, 0LL);
      case 8u:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))xxxAccessTimeOutTimer)(0LL, 0LL, (int)a1, 0LL);
      default:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a1 - 7, a3, a4);
        break;
    }
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))v6)(0LL, 0LL, v4, 0LL);
  }
  return result;
}
