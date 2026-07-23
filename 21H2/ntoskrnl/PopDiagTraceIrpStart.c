/*
 * XREFs of PopDiagTraceIrpStart @ 0x14036E594
 * Callers:
 *     PopRequestPowerIrp @ 0x14036DED0 (PopRequestPowerIrp.c)
 *     PopDequeueQuerySetIrp @ 0x14039829C (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x140398494 (PopQueueQuerySetIrp.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x140282184 (PopFxAddLogEntry.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIrpStart(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  char v4; // r15
  int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rbx
  __int16 v8; // di
  REGHANDLE v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rax
  char v13; // [rsp+40h] [rbp-79h] BYREF
  char v14; // [rsp+41h] [rbp-78h] BYREF
  __int16 v15; // [rsp+44h] [rbp-75h] BYREF
  int v16; // [rsp+48h] [rbp-71h] BYREF
  __int64 v17; // [rsp+50h] [rbp-69h] BYREF
  __int64 v18; // [rsp+58h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-49h] BYREF
  int *v21; // [rsp+80h] [rbp-39h]
  __int64 v22; // [rsp+88h] [rbp-31h]
  char *v23; // [rsp+90h] [rbp-29h]
  __int64 v24; // [rsp+98h] [rbp-21h]
  __int64 *v25; // [rsp+A0h] [rbp-19h]
  __int64 v26; // [rsp+A8h] [rbp-11h]
  __int16 *v27; // [rsp+B0h] [rbp-9h]
  __int64 v28; // [rsp+B8h] [rbp-1h]
  __int64 v29; // [rsp+C0h] [rbp+7h]
  int v30; // [rsp+C8h] [rbp+Fh]
  int v31; // [rsp+CCh] [rbp+13h]

  v17 = a2;
  v2 = *(char *)(a2 + 66);
  DestinationString = 0LL;
  v3 = *(_QWORD *)(a2 + 72 * v2 + 200);
  v4 = *(_BYTE *)(v3 + 184);
  v13 = v4;
  v5 = *(_DWORD *)(v3 + 188);
  v16 = v5;
  v14 = *(_BYTE *)(v3 + 192) - 1;
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v7 = 0LL;
  v18 = v7;
  v8 = *(_WORD *)(v7 + 40) >> 1;
  v15 = v8;
  if ( !*(_QWORD *)(v7 + 16) )
    RtlInitUnicodeString(&DestinationString, (PCWSTR)&cchOriginalDestLength);
  if ( v5 == 1 && v4 == 2 )
  {
    PopFxAddLogEntry(v7, 0, 22, *(int *)(v3 + 192));
    v8 = v15;
  }
  if ( PopDiagHandleRegistered )
  {
    v9 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRPSTART) )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v17;
      v21 = &v16;
      v23 = &v13;
      v25 = &v18;
      v27 = &v15;
      v10 = 5;
      v22 = 4LL;
      v24 = 1LL;
      v26 = 8LL;
      v28 = 2LL;
      if ( v8 )
      {
        v11 = *(_QWORD *)(v7 + 48);
        v30 = *(unsigned __int16 *)(v7 + 40);
        v10 = 6;
        v29 = v11;
        v31 = 0;
      }
      v12 = 2LL * v10;
      *(&UserData.Ptr + v12) = (ULONGLONG)&v14;
      *((_QWORD *)&UserData.Size + v12) = 1LL;
      EtwWriteEx(v9, &POP_ETW_EVENT_IRPSTART, 0LL, 0, 0LL, 0LL, v10 + 1, &UserData);
    }
  }
}
