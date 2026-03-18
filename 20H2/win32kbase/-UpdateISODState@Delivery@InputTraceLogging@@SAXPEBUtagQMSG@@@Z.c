/*
 * XREFs of ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0001684
 * Callers:
 *     DeferSysPeekMsg @ 0x1C0001160 (DeferSysPeekMsg.c)
 *     HandleDeferredInput @ 0x1C0001270 (HandleDeferredInput.c)
 * Callees:
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C0001A38 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Delivery::UpdateISODState(const struct tagQMSG *a1)
{
  __int64 v1; // r8
  const struct tagQMSG *v2; // r9
  int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // r11
  int v6; // ecx
  int v7; // [rsp+30h] [rbp-59h] BYREF
  int v8; // [rsp+34h] [rbp-55h] BYREF
  int v9; // [rsp+38h] [rbp-51h] BYREF
  int v10; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v11; // [rsp+40h] [rbp-49h] BYREF
  __int64 v12; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v14; // [rsp+70h] [rbp-19h]
  __int64 v15; // [rsp+78h] [rbp-11h]
  int *v16; // [rsp+80h] [rbp-9h]
  __int64 v17; // [rsp+88h] [rbp-1h]
  int *v18; // [rsp+90h] [rbp+7h]
  __int64 v19; // [rsp+98h] [rbp+Fh]
  int *v20; // [rsp+A0h] [rbp+17h]
  __int64 v21; // [rsp+A8h] [rbp+1Fh]
  int *v22; // [rsp+B0h] [rbp+27h]
  __int64 v23; // [rsp+B8h] [rbp+2Fh]
  int *v24; // [rsp+C0h] [rbp+37h]
  __int64 v25; // [rsp+C8h] [rbp+3Fh]

  v1 = *((unsigned int *)a1 + 6);
  v2 = a1;
  if ( ((unsigned int)(v1 - 256) <= 9 || InputTraceLogging::IsMouseInputMessage(v1))
    && (unsigned int)dword_1C0244A70 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 16LL, v1, v2) )
    {
      v6 = *(_DWORD *)(v4 + 100);
      v11 = v3;
      v15 = 8LL;
      v25 = v5;
      v7 = -__CFSHR__(v6, 19);
      v23 = v5;
      v21 = v5;
      v8 = -__CFSHR__(v6, 18);
      v19 = v5;
      v17 = v5;
      v9 = -__CFSHR__(v6, 17);
      v12 = *(_QWORD *)(v4 + 136);
      v24 = &v7;
      v22 = &v8;
      v20 = &v9;
      v18 = &v10;
      v16 = &v11;
      v14 = &v12;
      v10 = -__CFSHR__(v6, 20);
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C02123C4, 0, 0, 8u, &v13);
    }
  }
}
