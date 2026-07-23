/*
 * XREFs of PopDiagTraceFxComponentAccounting @ 0x1408EA2B0
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x14056D27C (PopFxStopDeviceAccounting.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopDiagQueryDevicePropertyString @ 0x1408E8258 (PopDiagQueryDevicePropertyString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTraceFxComponentAccounting(__int64 a1, int a2, __int64 a3, unsigned __int16 *a4, char a5)
{
  REGHANDLE v7; // rbx
  struct _DEVICE_OBJECT *v8; // rbx
  bool v9; // di
  int DevicePropertyString; // eax
  wchar_t *Buffer; // r15
  bool v12; // bl
  wchar_t *v13; // r14
  int v14; // edx
  __int64 v15; // rcx
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  int *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  char *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  __int64 *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  _DWORD *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  __int64 v38; // [rsp+110h] [rbp+10h]
  _DWORD v39[2]; // [rsp+118h] [rbp+18h] BYREF
  int *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  __int64 *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  __int64 v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  __int64 v46; // [rsp+150h] [rbp+50h]
  __int64 v47; // [rsp+158h] [rbp+58h]
  __int64 *v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  _DWORD *v50; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]
  wchar_t *v52; // [rsp+180h] [rbp+80h]
  _DWORD v53[2]; // [rsp+188h] [rbp+88h] BYREF
  _DWORD *v54; // [rsp+190h] [rbp+90h]
  __int64 v55; // [rsp+198h] [rbp+98h]
  wchar_t *v56; // [rsp+1A0h] [rbp+A0h]
  _DWORD v57[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  _DWORD *v58; // [rsp+1B0h] [rbp+B0h]
  __int64 v59; // [rsp+1B8h] [rbp+B8h]
  __int64 v60; // [rsp+1C0h] [rbp+C0h]
  _DWORD v61[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  int v62; // [rsp+228h] [rbp+128h] BYREF

  v62 = a2;
  v18 = a1;
  DestinationString = 0LL;
  v20 = 0LL;
  RtlInitUnicodeString(&DestinationString, &word_1407D7CE0);
  RtlInitUnicodeString(&v20, &word_1407D7CE0);
  if ( PopDiagHandleRegistered )
  {
    v7 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_ACCOUNTING) )
    {
      v16 = PopWnfCsEnterScenarioId;
      *(_QWORD *)&UserData.Size = 1LL;
      UserData.Ptr = (ULONGLONG)&v16;
      v26 = 8LL;
      v25 = &v18;
      v28 = 4LL;
      v27 = &v62;
      v30 = 8LL;
      v29 = &a5;
      v32 = 8LL;
      v31 = &PopWnfCsEnterScenarioId;
      EtwWrite(v7, &POP_ETW_EVENT_COMPONENT_ACCOUNTING, 0LL, 5u, &UserData);
      if ( *(_DWORD *)(a3 + 12) != -1 && !PopDiagFxAccountingTelemetryDisabled )
      {
        v8 = *(struct _DEVICE_OBJECT **)(v18 + 32);
        v9 = (int)PopDiagQueryDevicePropertyString(v8, DevicePropertyClassName, (__int64)&DestinationString) >= 0;
        DevicePropertyString = PopDiagQueryDevicePropertyString(v8, DevicePropertyClassGuid, (__int64)&v20);
        Buffer = DestinationString.Buffer;
        v12 = DevicePropertyString >= 0;
        v13 = v20.Buffer;
        if ( (unsigned int)dword_140C02228 > 5 && tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
        {
          v21 = PopWnfCsEnterScenarioId;
          v35 = 8LL;
          v34 = &v21;
          v14 = *(unsigned __int16 *)(v18 + 40);
          v15 = *(_QWORD *)(v18 + 48);
          v36 = v39;
          v17 = v62;
          v40 = &v17;
          v22 = *(_QWORD *)(a3 + 32);
          v42 = &v22;
          v44 = a3 + 48;
          v46 = a3 + 88;
          v23 = *(_QWORD *)(a3 + 40);
          v48 = &v23;
          v50 = v53;
          v53[0] = DestinationString.Length;
          v54 = v57;
          v57[0] = v20.Length;
          v58 = v61;
          v60 = *((_QWORD *)a4 + 1);
          v61[0] = *a4;
          v38 = v15;
          v39[0] = v14;
          v37 = 2LL;
          v39[1] = 0;
          v41 = 4LL;
          v43 = 8LL;
          v45 = 40LL;
          v47 = 40LL;
          v49 = 8LL;
          v51 = 2LL;
          v52 = Buffer;
          v53[1] = 0;
          v55 = 2LL;
          v56 = v13;
          v57[1] = 0;
          v59 = 2LL;
          v61[1] = 0;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C02228,
            (unsigned __int8 *)word_14002879A,
            0LL,
            0LL,
            0x10u,
            &v33);
        }
        if ( v9 )
          ExFreePoolWithTag(Buffer, 0x67696450u);
        if ( v12 )
          ExFreePoolWithTag(v13, 0x67696450u);
      }
    }
  }
}
