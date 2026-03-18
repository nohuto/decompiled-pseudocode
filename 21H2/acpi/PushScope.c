/*
 * XREFs of PushScope @ 0x1C0018570
 * Callers:
 *     Scope @ 0x1C0019A40 (Scope.c)
 *     Device @ 0x1C001A250 (Device.c)
 *     While @ 0x1C001C380 (While.c)
 *     ParseLoad @ 0x1C0028400 (ParseLoad.c)
 *     PowerRes @ 0x1C002B420 (PowerRes.c)
 *     Processor @ 0x1C002B9F0 (Processor.c)
 *     ThermalZone @ 0x1C002EBF0 (ThermalZone.c)
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall PushScope(
        __int64 a1,
        __int64 a2,
        _SLIST_ENTRY *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v11; // edi
  _SLIST_ENTRY *v13; // rax
  _SLIST_ENTRY *v14; // rcx
  char v15; // al

  v11 = 0;
  v13 = HeapAlloc((struct _SLIST_ENTRY *)(a1 + 480), 1297237576, 0x50u);
  v14 = v13;
  if ( v13 )
  {
    *((_QWORD *)&v13->Next + 1) = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v13;
    *((_QWORD *)&v13[1].Next + 1) = ParseScope;
    LODWORD(v13->Next) = 1347371859;
    *(_QWORD *)(a1 + 120) = a2;
    v13[2].Next = a3;
    *((_QWORD *)&v13[2].Next + 1) = a4;
    v13[3].Next = *(_SLIST_ENTRY **)(a1 + 80);
    v15 = gdwfAMLI;
    *(_QWORD *)(a1 + 80) = a5;
    if ( (v15 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a5 + 112));
    *((_QWORD *)&v14[3].Next + 1) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = a6;
    v14[4].Next = *(_SLIST_ENTRY **)(a1 + 320);
    *(_QWORD *)(a1 + 320) = a7;
    *((_QWORD *)&v14[4].Next + 1) = a8;
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
