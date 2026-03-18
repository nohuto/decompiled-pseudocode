/*
 * XREFs of PopFxDeliverDevicePowerRequired @ 0x1403A3E7C
 * Callers:
 *     PopFxProcessWork @ 0x1402C962C (PopFxProcessWork.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x1403A3430 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopFxDeviceWork @ 0x140565430 (PopFxDeviceWork.c)
 * Callees:
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1402C99F8 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1402CA25C (PopFxCompleteDevicePowerRequired.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

char __fastcall PopFxDeliverDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  void (__fastcall *v4)(_QWORD); // rax

  if ( *(_DWORD *)(BugCheckParameter2 + 36) == 2 )
  {
    PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(BugCheckParameter2 + 48), 0, 1u);
    v4 = *(void (__fastcall **)(_QWORD))(BugCheckParameter2 + 136);
    if ( v4 )
      v4(*(_QWORD *)(BugCheckParameter2 + 192));
    else
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFBF);
  }
  return PopFxCompleteDevicePowerRequired(BugCheckParameter2, a2);
}
