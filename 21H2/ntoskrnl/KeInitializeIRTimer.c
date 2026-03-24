/*
 * XREFs of KeInitializeIRTimer @ 0x1403813E0
 * Callers:
 *     ExAllocateTimerInternal2 @ 0x140280440 (ExAllocateTimerInternal2.c)
 *     PopInitializeIRTimer @ 0x1403AE390 (PopInitializeIRTimer.c)
 *     PopPowerButtonWorkCallback @ 0x140578850 (PopPowerButtonWorkCallback.c)
 *     NtCreateTimer2 @ 0x1406D4930 (NtCreateTimer2.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14078F230 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopThermalZoneAdd @ 0x1407907E0 (PopThermalZoneAdd.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1402E927C (KiInitializeTimer2.c)
 *     ExCheckValidIRTimerId @ 0x140381434 (ExCheckValidIRTimerId.c)
 */

__int64 __fastcall KeInitializeIRTimer(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, int a5)
{
  unsigned __int16 v7; // r8
  __int64 v8; // rdx
  __int64 result; // rax

  KiInitializeTimer2(a1, a2, a3, a5 | 2);
  v7 = *a4;
  *(_BYTE *)(a1 + 2) = v7;
  v8 = a4[2];
  *(_BYTE *)(a1 + 3) = a4[2];
  result = ExCheckValidIRTimerId(v7, v8);
  if ( !(_BYTE)result )
    __fastfail(5u);
  return result;
}
