/*
 * XREFs of PopDiagTracePostSleepNotification @ 0x140999AC8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopDiagTracePostSleepNotification(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // eax
  int v8; // ecx
  NTSTATUS result; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // [rsp+38h] [rbp-71h] BYREF
  int v13; // [rsp+3Ch] [rbp-6Dh] BYREF
  __int64 v14; // [rsp+40h] [rbp-69h] BYREF
  __int64 v15; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-51h] BYREF
  int *v17; // [rsp+68h] [rbp-41h]
  __int64 v18; // [rsp+70h] [rbp-39h]
  int *v19; // [rsp+78h] [rbp-31h]
  __int64 v20; // [rsp+80h] [rbp-29h]
  __int64 *v21; // [rsp+88h] [rbp-21h]
  __int64 v22; // [rsp+90h] [rbp-19h]
  __int64 *v23; // [rsp+98h] [rbp-11h]
  __int64 v24; // [rsp+A0h] [rbp-9h]
  int *v25; // [rsp+A8h] [rbp-1h]
  __int64 v26; // [rsp+B0h] [rbp+7h]
  int *v27; // [rsp+B8h] [rbp+Fh]
  __int64 v28; // [rsp+C0h] [rbp+17h]
  int v29; // [rsp+F8h] [rbp+4Fh] BYREF
  int v30; // [rsp+100h] [rbp+57h] BYREF
  int v31; // [rsp+108h] [rbp+5Fh] BYREF

  v31 = a3;
  v30 = a2;
  v29 = a1;
  v7 = a6;
  v14 = 0LL;
  v15 = 0LL;
  v8 = 5;
  switch ( a6 )
  {
    case -1LL:
      v7 = 4;
      break;
    case -2LL:
      v7 = 5;
      break;
    case -3LL:
      v7 = 6;
      break;
  }
  v12 = v7;
  result = a7;
  if ( a7 == -1 )
  {
    v8 = 4;
  }
  else if ( a7 != -2 )
  {
    v8 = a7;
    if ( a7 == -3 )
      v8 = 6;
  }
  v13 = v8;
  if ( a4 )
  {
    result = MEMORY[0xFFFFF78000000014];
    v10 = -a4;
    if ( a4 >= 0 )
      v10 = a4 - MEMORY[0xFFFFF78000000008];
    v14 = MEMORY[0xFFFFF78000000014] + v10;
  }
  if ( a5 )
  {
    result = MEMORY[0xFFFFF78000000014];
    v11 = -a5;
    if ( a5 >= 0 )
      v11 = a5 - MEMORY[0xFFFFF78000000008];
    v15 = MEMORY[0xFFFFF78000000014] + v11;
  }
  if ( PopDiagHandleRegistered )
  {
    UserData.Ptr = (ULONGLONG)&v29;
    *(_QWORD *)&UserData.Size = 4LL;
    v17 = &v30;
    v18 = 4LL;
    v19 = &v31;
    v20 = 4LL;
    v21 = &v14;
    v23 = &v15;
    v25 = &v12;
    v27 = &v13;
    v22 = 8LL;
    v24 = 8LL;
    v26 = 4LL;
    v28 = 4LL;
    return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POSTSLEEP_NOTIFICATION, 0LL, 7u, &UserData);
  }
  return result;
}
