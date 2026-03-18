/*
 * XREFs of ?NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z @ 0x1C0050D5C
 * Callers:
 *     NotifySetPointerGraphicDevice @ 0x1C0050D30 (NotifySetPointerGraphicDevice.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::NotifySetPointerGraphicDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v6; // rbx

  v4 = a2;
  if ( !(_DWORD)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v6 = a1 + 3816;
  RIMLockExclusive(v6);
  if ( *(_BYTE *)(v6 + 16) && v4 > 0 )
  {
    if ( v4 <= 2 )
    {
      if ( *(_BYTE *)(v6 + 17) )
        *(_BYTE *)(v6 + 17) = 0;
    }
    else if ( v4 == 3 )
    {
      *(_BYTE *)(v6 + 17) = 1;
    }
  }
  *(_QWORD *)(v6 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
}
