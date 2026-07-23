/*
 * XREFs of PopDiagTraceIrpFinish @ 0x14037A6C4
 * Callers:
 *     PopRequestCompletion @ 0x14037A450 (PopRequestCompletion.c)
 *     PopDequeueQuerySetIrp @ 0x14039829C (PopDequeueQuerySetIrp.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x140282184 (PopFxAddLogEntry.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x14037A87C (PopDiagTraceIrpFinishTelemetry.c)
 *     IoFindDeviceThatFailedIrp @ 0x14037A944 (IoFindDeviceThatFailedIrp.c)
 *     PopDiagGetDriverName @ 0x1403890CC (PopDiagGetDriverName.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceIrpFinish(__int64 a1)
{
  BOOLEAN result; // al
  const size_t *v2; // rbx
  __int64 v3; // rdi
  int v4; // edx
  char v5; // r14
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 DeviceThatFailedIrp; // rax
  int DriverName; // eax
  const size_t *v12; // rcx
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v16; // [rsp+68h] [rbp-A0h]
  __int64 v17; // [rsp+70h] [rbp-98h]
  const size_t *v18; // [rsp+78h] [rbp-90h]
  int v19; // [rsp+80h] [rbp-88h]
  int v20; // [rsp+84h] [rbp-84h]
  _BYTE v21[128]; // [rsp+88h] [rbp-80h] BYREF

  v14 = a1;
  result = PopDiagTraceIrpFinishTelemetry();
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRPFINISH);
    if ( result )
    {
      v2 = &cchOriginalDestLength;
      v3 = *(_QWORD *)(v14 + 72LL * *(char *)(v14 + 66) + 200);
      v4 = *(_DWORD *)(v14 + 48);
      LODWORD(v13) = v4;
      v5 = *(_BYTE *)(v3 + 184);
      v6 = *(_DWORD *)(v3 + 188);
      if ( v4 < 0 && !v6 )
      {
        DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(v14);
        DriverName = PopDiagGetDriverName(DeviceThatFailedIrp, v21);
        v4 = v13;
        v12 = (const size_t *)v21;
        if ( DriverName < 0 )
          v12 = &cchOriginalDestLength;
        v2 = v12;
      }
      if ( v6 == 1 && v5 == 2 )
      {
        v8 = *(_QWORD *)(v3 + 24);
        if ( v8 )
          v9 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
        else
          v9 = 0LL;
        PopFxAddLogEntry(v9, 0, 23, v4);
      }
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v14;
      v16 = &v13;
      v7 = -1LL;
      v17 = 4LL;
      v18 = v2;
      do
        ++v7;
      while ( *((_WORD *)v2 + v7) );
      v19 = 2 * v7 + 2;
      v20 = 0;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_IRPFINISH, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return result;
}
