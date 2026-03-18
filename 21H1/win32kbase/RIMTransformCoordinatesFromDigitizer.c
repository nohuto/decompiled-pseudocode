/*
 * XREFs of RIMTransformCoordinatesFromDigitizer @ 0x1C016DAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00A3C0C (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00A413C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMTransformCoordinates @ 0x1C016D79C (RIMTransformCoordinates.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C016DCC8 (RIMTransformPhysicalPointToScreen.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C016DD3C (RIMTransformPointerDevicePointToPhysical.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMTransformCoordinatesFromDigitizer(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  _BYTE v9[16]; // [rsp+38h] [rbp-10h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v10 = 0;
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL);
  if ( (*(_DWORD *)(a1 + 288) & 0x80u) != 0 && *(_QWORD *)(a1 + 568) )
  {
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)v9,
      (struct _KTHREAD **)(*(_QWORD *)(a1 + 424) + 104LL));
    if ( a2 )
    {
      RIMTransformCoordinates(*(_QWORD *)(a1 + 568), 0, a2, &v8, &v10);
      RIMTransformPointerDevicePointToPhysical(*(_QWORD *)(a1 + 568), *(_QWORD *)a2, a3);
    }
    RIMTransformPhysicalPointToScreen(*(_QWORD *)(a1 + 568), a3, a4);
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v9);
  }
}
