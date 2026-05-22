/*
 * XREFs of ?LogUnexpectedUsage@LampArrayTelemetry@@QEAAXGG@Z @ 0x1800A4A88
 * Callers:
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800AA450 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

void __fastcall LampArrayTelemetry::LogUnexpectedUsage(LampArrayTelemetry *this)
{
  __int16 v1; // r8
  __int16 v2; // r9
  __int16 v3; // [rsp+30h] [rbp-68h] BYREF
  __int16 v4; // [rsp+32h] [rbp-66h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-58h] BYREF
  __int16 *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  __int16 *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1802063F0 > 5 && tlgKeywordOn((__int64)&dword_1802063F0, 0x400000000000LL) )
  {
    v11 = 0;
    v8 = 0;
    v9 = &v3;
    v3 = v1;
    v6 = &v4;
    v4 = v2;
    v10 = 2;
    v7 = 2;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1802063F0,
      (unsigned __int8 *)dword_1801CB046,
      0LL,
      0LL,
      4u,
      &v5);
  }
}
