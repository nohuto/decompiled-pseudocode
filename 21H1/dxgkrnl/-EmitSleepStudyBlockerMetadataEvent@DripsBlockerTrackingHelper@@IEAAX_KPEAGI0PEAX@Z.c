/*
 * XREFs of ?EmitSleepStudyBlockerMetadataEvent@DripsBlockerTrackingHelper@@IEAAX_KPEAGI0PEAX@Z @ 0x1C02BBC6C
 * Callers:
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z @ 0x1C02BB7BC (-EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 */

void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        unsigned __int16 *a3,
        int a4,
        ULONGLONG Value,
        LPCGUID ActivityId)
{
  const GUID *v6; // rdi
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // [rsp+38h] [rbp-D0h] BYREF
  int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  struct _UNICODE_STRING String; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD *v16; // [rsp+50h] [rbp-B8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  int *v18; // [rsp+68h] [rbp-A0h]
  __int64 v19; // [rsp+70h] [rbp-98h]
  const GUID *v20; // [rsp+78h] [rbp-90h]
  __int64 v21; // [rsp+80h] [rbp-88h]
  int *v22; // [rsp+88h] [rbp-80h]
  __int64 v23; // [rsp+90h] [rbp-78h]
  unsigned __int16 *v24; // [rsp+98h] [rbp-70h]
  int v25; // [rsp+A0h] [rbp-68h]
  int v26; // [rsp+A4h] [rbp-64h]
  struct _UNICODE_STRING *p_String; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  _OWORD *v29; // [rsp+B8h] [rbp-50h]
  int v30; // [rsp+C0h] [rbp-48h]
  int v31; // [rsp+C4h] [rbp-44h]
  __int64 *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  _OWORD v34[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v35; // [rsp+F8h] [rbp-10h]
  __int16 v36; // [rsp+100h] [rbp-8h]
  __int64 v37; // [rsp+140h] [rbp+38h] BYREF
  int v38; // [rsp+150h] [rbp+48h] BYREF

  v38 = a4;
  v37 = a2;
  v6 = ActivityId;
  v35 = 0LL;
  v36 = 0;
  String.Buffer = (wchar_t *)2752512;
  v16 = v34;
  memset(v34, 0, sizeof(v34));
  v8 = RtlInt64ToUnicodeString(Value, 0xAu, (PUNICODE_STRING)&String.Buffer);
  v11 = v8;
  if ( v8 >= 0 )
  {
    LOBYTE(v13) = v37;
    UserData.Ptr = (ULONGLONG)&v13;
    v18 = &v14;
    v22 = &v38;
    v14 = 1;
    v25 = 2 * v38;
    p_String = &String;
    v29 = v16;
    v30 = 2 * ((LOWORD(String.Buffer) >> 1) + 1);
    v32 = &v37;
    *(_DWORD *)&String.Length = (LOWORD(String.Buffer) >> 1) + 1;
    *(_QWORD *)&UserData.Size = 1LL;
    v26 = 0;
    v31 = 0;
    v19 = 4LL;
    v20 = v6;
    v21 = 16LL;
    v23 = 4LL;
    v24 = a3;
    v28 = 4LL;
    v33 = 8LL;
    EtwWrite(SLEEPSTUDY_ETW_PROVIDER_Context[0], &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, v6, 8u, &UserData);
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v10, v9, 0LL);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdWarning(v12);
  }
}
