/*
 * XREFs of AcpiDiagTraceTemperatureTelemetry @ 0x1C0011D50
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0012A28 (ACPIThermalLoopEx.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000FB50 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C000FB80 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0010920 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceTemperatureTelemetry(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  int v6; // [rsp+30h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+50h] [rbp-29h] BYREF
  int *v9; // [rsp+70h] [rbp-9h]
  int v10; // [rsp+78h] [rbp-1h]
  int v11; // [rsp+7Ch] [rbp+3h]
  _DWORD *v12; // [rsp+80h] [rbp+7h]
  int v13; // [rsp+88h] [rbp+Fh]
  int v14; // [rsp+8Ch] [rbp+13h]
  wchar_t *Buffer; // [rsp+90h] [rbp+17h]
  _DWORD v16[2]; // [rsp+98h] [rbp+1Fh] BYREF
  _DWORD *v17; // [rsp+A0h] [rbp+27h]
  int v18; // [rsp+A8h] [rbp+2Fh]
  int v19; // [rsp+ACh] [rbp+33h]
  __int64 v20; // [rsp+B0h] [rbp+37h]
  _DWORD v21[2]; // [rsp+B8h] [rbp+3Fh] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( AcpiDiagThermalTelemetryEnabled )
  {
    v2 = *(_QWORD *)(a1 + 200);
    if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 720), (__int64)&DestinationString) >= 0
      && (unsigned int)dword_1C007F0E8 > 5
      && tlgKeywordOn((__int64)&dword_1C007F0E8) )
    {
      v5 = *(_DWORD *)(v2 + 328);
      v11 = 0;
      v14 = 0;
      v16[1] = 0;
      v19 = 0;
      v21[1] = 0;
      v6 = v5;
      v9 = &v6;
      v12 = v16;
      Buffer = DestinationString.Buffer;
      v16[0] = DestinationString.Length;
      v17 = v21;
      v20 = *(_QWORD *)(v2 + 312);
      v21[0] = *(unsigned __int16 *)(v2 + 304);
      v13 = 2;
      v18 = 2;
      v10 = 4;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C007F0E8, (unsigned __int8 *)dword_1C0072601, v3, v4, 7u, &v8);
    }
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}
