/*
 * XREFs of PopDiagTraceDeviceAcquireIrp @ 0x140398978
 * Callers:
 *     PoDeviceAcquireIrp @ 0x14037C3B4 (PoDeviceAcquireIrp.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     PopDiagGetDriverName @ 0x1403890CC (PopDiagGetDriverName.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDeviceAcquireIrp(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  NTSTATUS DriverName; // eax
  wchar_t *v5; // rdx
  __int64 v6; // rax
  __int64 v8; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v10; // [rsp+60h] [rbp-A8h]
  __int64 v11; // [rsp+68h] [rbp-A0h]
  wchar_t *v12; // [rsp+70h] [rbp-98h]
  int v13; // [rsp+78h] [rbp-90h]
  int v14; // [rsp+7Ch] [rbp-8Ch]
  wchar_t v15[64]; // [rsp+88h] [rbp-80h] BYREF
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+18h] BYREF
  __int64 v17; // [rsp+128h] [rbp+20h] BYREF

  v2 = &retaddr;
  v17 = a1;
  v8 = a2;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRP_DRIVERACQUIRE);
    if ( (_BYTE)v2 )
    {
      DriverName = PopDiagGetDriverName(a2, v15);
      *(_QWORD *)&UserData.Size = 8LL;
      v11 = 8LL;
      v5 = v15;
      if ( DriverName < 0 )
        v5 = (wchar_t *)&cchOriginalDestLength;
      UserData.Ptr = (ULONGLONG)&v17;
      v10 = &v8;
      v6 = -1LL;
      v12 = v5;
      do
        ++v6;
      while ( v5[v6] );
      v13 = 2 * v6 + 2;
      v14 = 0;
      LOBYTE(v2) = EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_IRP_DRIVERACQUIRE, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v2;
}
