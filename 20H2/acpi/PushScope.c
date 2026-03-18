/*
 * XREFs of PushScope @ 0x1C00227D8
 * Callers:
 *     Scope @ 0x1C0022690 (Scope.c)
 *     Device @ 0x1C0022720 (Device.c)
 *     Processor @ 0x1C00230D0 (Processor.c)
 *     ParseLoad @ 0x1C0023210 (ParseLoad.c)
 *     PowerRes @ 0x1C0023950 (PowerRes.c)
 *     ThermalZone @ 0x1C0024F40 (ThermalZone.c)
 * Callees:
 *     HeapAlloc @ 0x1C0008A70 (HeapAlloc.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 */

__int64 __fastcall PushScope(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v11; // edi
  __int64 v13; // rax
  _QWORD *v14; // rcx
  char v15; // al

  v11 = 0;
  v13 = HeapAlloc((struct _SLIST_ENTRY *)(a1 + 480), 1297237576, 0x50u);
  v14 = (_QWORD *)v13;
  if ( v13 )
  {
    *(_QWORD *)(v13 + 8) = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v13;
    *(_QWORD *)(v13 + 24) = ParseScope;
    *(_DWORD *)v13 = 1347371859;
    *(_QWORD *)(a1 + 120) = a2;
    *(_QWORD *)(v13 + 32) = a3;
    *(_QWORD *)(v13 + 40) = a4;
    *(_QWORD *)(v13 + 48) = *(_QWORD *)(a1 + 80);
    v15 = gdwfAMLI;
    *(_QWORD *)(a1 + 80) = a5;
    if ( (v15 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a5 + 112));
    v14[7] = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = a6;
    v14[8] = *(_QWORD *)(a1 + 320);
    *(_QWORD *)(a1 + 320) = a7;
    v14[9] = a8;
  }
  else
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v11;
}
