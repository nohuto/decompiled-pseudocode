/*
 * XREFs of EtwpEventWriteTemplateSessionEnd @ 0x14093A248
 * Callers:
 *     EtwpLogger @ 0x14063A500 (EtwpLogger.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

NTSTATUS EtwpEventWriteTemplateSessionEnd(
        _DWORD a1,
        _DWORD a2,
        _DWORD a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        char a6,
        ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-49h] BYREF
  __int64 *v8; // [rsp+40h] [rbp-39h]
  __int64 v9; // [rsp+48h] [rbp-31h]
  __int64 v10; // [rsp+50h] [rbp-29h]
  int v11; // [rsp+58h] [rbp-21h]
  int v12; // [rsp+5Ch] [rbp-1Dh]
  __int64 *v13; // [rsp+60h] [rbp-19h]
  __int64 v14; // [rsp+68h] [rbp-11h]
  char *v15; // [rsp+70h] [rbp-9h]
  __int64 v16; // [rsp+78h] [rbp-1h]
  va_list v17; // [rsp+80h] [rbp+7h]
  __int64 v18; // [rsp+88h] [rbp+Fh]
  va_list v19; // [rsp+90h] [rbp+17h]
  __int64 v20; // [rsp+98h] [rbp+1Fh]
  __int64 v21; // [rsp+F0h] [rbp+77h] BYREF
  va_list va; // [rsp+F0h] [rbp+77h]
  va_list va1; // [rsp+F8h] [rbp+7Fh] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v21 = va_arg(va1, _QWORD);
  UserData.Ptr = *((_QWORD *)a4 + 1);
  UserData.Size = *a4;
  v10 = *((_QWORD *)a5 + 1);
  v11 = *a5;
  v15 = &a6;
  va_copy(v17, va);
  va_copy(v19, va1);
  UserData.Reserved = 0;
  v8 = &EtwpNull;
  v12 = 0;
  v13 = &EtwpNull;
  v9 = 2LL;
  v14 = 2LL;
  v16 = 4LL;
  v18 = 4LL;
  v20 = 4LL;
  return EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_END_FAILED, 0LL, 7u, &UserData);
}
