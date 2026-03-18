/*
 * XREFs of ?Duplicate@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAX1_N@Z @ 0x1C0063B58
 * Callers:
 *     NtDuplicateCompositionInputSink @ 0x1C0063A60 (NtDuplicateCompositionInputSink.c)
 *     ?OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z @ 0x1C0066DC0 (-OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::InputSink::Duplicate(
        const struct CompositionInputObject *a1,
        void *a2,
        void *a3,
        __int64 a4)
{
  int v4; // edx
  __int64 v5; // r8
  unsigned __int8 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  int v9; // [rsp+30h] [rbp-39h] BYREF
  __int64 v10; // [rsp+38h] [rbp-31h] BYREF
  __int64 v11; // [rsp+40h] [rbp-29h] BYREF
  __int64 v12; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  __int64 *v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh]
  int v19; // [rsp+8Ch] [rbp+23h]
  __int64 *v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]
  int *v23; // [rsp+A0h] [rbp+37h]
  int v24; // [rsp+A8h] [rbp+3Fh]
  int v25; // [rsp+ACh] [rbp+43h]

  if ( (unsigned int)dword_1C0244A70 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 4LL, a3, a4) )
    {
      v25 = 0;
      v22 = 0;
      v19 = 0;
      v16 = 0;
      v9 = v6;
      v23 = &v9;
      v20 = &v10;
      v17 = &v11;
      v24 = v4;
      v14 = &v12;
      v10 = v5;
      v21 = 8;
      v18 = 8;
      v15 = 8;
      v11 = v7;
      v12 = v8;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C021A68D, 0, 0, 6u, &v13);
    }
  }
}
