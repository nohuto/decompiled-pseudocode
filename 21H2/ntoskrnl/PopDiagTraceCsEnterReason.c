/*
 * XREFs of PopDiagTraceCsEnterReason @ 0x1408E8E1C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceCsEnterReason(int a1)
{
  char result; // al
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  int v5; // r14d
  int v6; // r15d
  REGHANDLE v7; // r12
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+44h] [rbp-BCh] BYREF
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+4Ch] [rbp-B4h] BYREF
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  int *v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  int *v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  __int64 *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  int *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  int *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  __int64 *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  int *v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  int *v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]
  int *v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  int *v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  int *v45; // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  int v47; // [rsp+1B0h] [rbp+B0h] BYREF

  v47 = a1;
  result = PopWnfCsEnterScenarioId;
  v2 = a1;
  v3 = (unsigned __int8)PopConsoleExternalDisplayConnected;
  v4 = (unsigned __int8)PopLidOpened;
  v5 = PopCsConsumption;
  v6 = dword_140C50010;
  v17 = PopWnfCsEnterScenarioId;
  v10 = (unsigned __int8)PopConsoleExternalDisplayConnected;
  v11 = (unsigned __int8)PopLidOpened;
  v9 = PopCsConsumption;
  v8 = dword_140C50010;
  if ( PopDiagHandleRegistered )
  {
    v7 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_ENTER_REASON);
    if ( result )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v47;
      v21 = 4LL;
      v20 = &v11;
      v23 = 4LL;
      v22 = &v10;
      v25 = 1LL;
      v24 = &v17;
      v27 = 4LL;
      v26 = &v9;
      v28 = &v8;
      v30 = &PopWnfCsEnterScenarioId;
      v32 = 0xFFFFF780000002C4uLL;
      v29 = 4LL;
      v31 = 8LL;
      v33 = 4LL;
      result = EtwWrite(v7, &POP_ETW_EVENT_CS_ENTER_REASON, 0LL, 8u, &UserData);
      v2 = v47;
      v6 = v8;
      v5 = v9;
      v3 = v10;
      v4 = v11;
    }
  }
  if ( (unsigned int)dword_140C02228 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL);
    if ( result )
    {
      v18 = PopWnfCsEnterScenarioId;
      v36 = 8LL;
      v35 = &v18;
      v12 = v2;
      v37 = &v12;
      v38 = 4LL;
      v39 = &v13;
      v41 = &v14;
      v43 = &v15;
      v45 = &v16;
      v13 = v4;
      v40 = 4LL;
      v14 = v3;
      v42 = 4LL;
      v15 = v5;
      v44 = 4LL;
      v16 = v6;
      v46 = 4LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140C02228,
               (unsigned __int8 *)byte_140028B98,
               0LL,
               0LL,
               8u,
               &v34);
    }
  }
  return result;
}
