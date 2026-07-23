/*
 * XREFs of PopDiagTraceFxGlobalDeviceAccounting @ 0x14057276C
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x14056D27C (PopFxStopDeviceAccounting.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxGlobalDeviceAccounting(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // [rsp+30h] [rbp-49h] BYREF
  __int64 v6; // [rsp+38h] [rbp-41h] BYREF
  __int64 v7; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v9; // [rsp+70h] [rbp-9h]
  int v10; // [rsp+78h] [rbp-1h]
  int v11; // [rsp+7Ch] [rbp+3h]
  __int64 *v12; // [rsp+80h] [rbp+7h]
  int v13; // [rsp+88h] [rbp+Fh]
  int v14; // [rsp+8Ch] [rbp+13h]
  __int64 v15; // [rsp+90h] [rbp+17h]
  int v16; // [rsp+98h] [rbp+1Fh]
  int v17; // [rsp+9Ch] [rbp+23h]
  __int64 v18; // [rsp+A0h] [rbp+27h]
  int v19; // [rsp+A8h] [rbp+2Fh]
  int v20; // [rsp+ACh] [rbp+33h]
  __int64 *v21; // [rsp+B0h] [rbp+37h]
  int v22; // [rsp+B8h] [rbp+3Fh]
  int v23; // [rsp+BCh] [rbp+43h]

  if ( !PopDiagFxAccountingTelemetryDisabled && (unsigned int)dword_140C02228 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
    {
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v5 = PopWnfCsEnterScenarioId;
      v9 = &v5;
      v12 = &v6;
      v16 = 40;
      v19 = 40;
      v21 = &v7;
      v10 = 8;
      v13 = 8;
      v18 = v2;
      v22 = 8;
      v6 = a1;
      v15 = v3;
      v7 = v4;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02228, (unsigned __int8 *)byte_140028640, 0LL, 0LL, 7u, &v8);
    }
  }
}
