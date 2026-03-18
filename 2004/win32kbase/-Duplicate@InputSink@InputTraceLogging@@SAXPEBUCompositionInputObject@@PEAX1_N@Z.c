/*
 * XREFs of ?Duplicate@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAX1_N@Z @ 0x1C00A8518
 * Callers:
 *     ?OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z @ 0x1C00A8090 (-OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z.c)
 *     NtDuplicateCompositionInputSink @ 0x1C00A8420 (NtDuplicateCompositionInputSink.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::InputSink::Duplicate(const struct CompositionInputObject *a1, void *a2, void *a3)
{
  int v3; // edx
  __int64 v4; // r8
  unsigned __int8 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  int v8; // [rsp+30h] [rbp-39h] BYREF
  __int64 v9; // [rsp+38h] [rbp-31h] BYREF
  __int64 v10; // [rsp+40h] [rbp-29h] BYREF
  __int64 v11; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v13; // [rsp+70h] [rbp+7h]
  int v14; // [rsp+78h] [rbp+Fh]
  int v15; // [rsp+7Ch] [rbp+13h]
  __int64 *v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+88h] [rbp+1Fh]
  int v18; // [rsp+8Ch] [rbp+23h]
  __int64 *v19; // [rsp+90h] [rbp+27h]
  int v20; // [rsp+98h] [rbp+2Fh]
  int v21; // [rsp+9Ch] [rbp+33h]
  int *v22; // [rsp+A0h] [rbp+37h]
  int v23; // [rsp+A8h] [rbp+3Fh]
  int v24; // [rsp+ACh] [rbp+43h]

  if ( (unsigned int)dword_1C0246A70 > 5 && tlgKeywordOn((__int64)&dword_1C0246A70, 4LL) )
  {
    v24 = 0;
    v21 = 0;
    v18 = 0;
    v15 = 0;
    v8 = v5;
    v22 = &v8;
    v19 = &v9;
    v16 = &v10;
    v23 = v3;
    v13 = &v11;
    v9 = v4;
    v20 = 8;
    v17 = 8;
    v14 = 8;
    v10 = v6;
    v11 = v7;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0246A70, (unsigned __int8 *)dword_1C021C4FC, 0LL, 0LL, 6u, &v12);
  }
}
