/*
 * XREFs of RtlReportExceptionHelper @ 0x1800DCEF0
 * Callers:
 *     RtlReportException @ 0x1800DC950 (RtlReportException.c)
 *     RtlpPossibleDeadlock @ 0x1800E8ED8 (RtlpPossibleDeadlock.c)
 * Callees:
 *     WerpProcessId @ 0x18006083C (WerpProcessId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009D350 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x18009D590 (ZwDuplicateObject.c)
 *     ReportExceptionInternal @ 0x1800DC818 (ReportExceptionInternal.c)
 *     WerpCreateCompletionEvent @ 0x1800DD8D0 (WerpCreateCompletionEvent.c)
 *     WerpCreateCrashDataSection @ 0x1800DD934 (WerpCreateCrashDataSection.c)
 *     WerpSetProcessFaultInformation @ 0x1800DDB28 (WerpSetProcessFaultInformation.c)
 *     WerpThreadId @ 0x1800DDB68 (WerpThreadId.c)
 *     WerpWaitForCrashReporting @ 0x1800DDBA0 (WerpWaitForCrashReporting.c)
 */

__int64 __fastcall RtlReportExceptionHelper(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  _OWORD *v5; // rdi
  int v7; // ebx
  int v8; // r14d
  __int64 v9; // rbx
  unsigned int v10; // ebx
  int v11; // eax
  _DWORD *v12; // rcx
  _DWORD *v13; // rax
  _OWORD *v14; // rdx
  __int64 v15; // rax
  unsigned int v17; // [rsp+40h] [rbp-88h]
  HANDLE v18; // [rsp+58h] [rbp-70h] BYREF
  _DWORD *v19; // [rsp+60h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-60h] BYREF
  HANDLE v21; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+78h] [rbp-50h]
  __int64 v23; // [rsp+80h] [rbp-48h]
  _QWORD v24[4]; // [rsp+88h] [rbp-40h] BYREF

  v23 = a4;
  v4 = a3;
  v5 = a2;
  v21 = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  v7 = 0;
  v19 = 0LL;
  if ( (a3 & 4) == 0 )
    WerpSetProcessFaultInformation(-1LL, a2, a3);
  if ( (int)WerpCreateCompletionEvent(&v18, a2, a3) < 0 )
  {
    v18 = 0LL;
  }
  else
  {
    v24[0] = v18;
    v7 = 1;
  }
  v8 = WerpCreateCrashDataSection(&Handle, &v19);
  if ( v8 >= 0 )
  {
    v24[v7] = Handle;
    v9 = (unsigned int)(v7 + 1);
    v17 = v9;
    if ( (int)ZwDuplicateObject() >= 0 )
    {
      v24[v9] = 0LL;
      v9 = (unsigned int)(v9 + 1);
      v17 = v9;
    }
    if ( (int)ZwDuplicateObject() >= 0 )
    {
      v24[v9] = 0LL;
      v17 = v9 + 1;
    }
    v10 = WerpProcessId((void *)0xFFFFFFFFFFFFFFFFLL);
    v22 = v10;
    v11 = WerpThreadId(-2LL);
    v12 = v19;
    *v19 = 248;
    *((_QWORD *)v12 + 21) = 1LL;
    v12[1] = v10;
    v12[2] = v11;
    *((_QWORD *)v12 + 23) = 0LL;
    *((_QWORD *)v12 + 24) = 0LL;
    *((_QWORD *)v12 + 26) = v18;
    *((_QWORD *)v12 + 28) = 0LL;
    v12[58] = -1073741823;
    v12[59] = v4;
    v13 = v19;
    v19[60] = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v14 = v13 + 104;
    *((_QWORD *)v13 + 31) = 1LL;
    *((_QWORD *)v13 + 32) = 1LL;
    *(_OWORD *)(v13 + 66) = *(_OWORD *)a1;
    *(_OWORD *)(v13 + 70) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v13 + 74) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v13 + 78) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v13 + 82) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(v13 + 86) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(v13 + 90) = *(_OWORD *)(a1 + 96);
    *(_OWORD *)(v13 + 94) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(v13 + 98) = *(_OWORD *)(a1 + 128);
    *((_QWORD *)v13 + 51) = *(_QWORD *)(a1 + 144);
    v15 = 9LL;
    do
    {
      *v14 = *v5;
      v14[1] = v5[1];
      v14[2] = v5[2];
      v14[3] = v5[3];
      v14[4] = v5[4];
      v14[5] = v5[5];
      v14[6] = v5[6];
      v14 += 8;
      *(v14 - 1) = v5[7];
      v5 += 8;
      --v15;
    }
    while ( v15 );
    *v14 = *v5;
    v14[1] = v5[1];
    v14[2] = v5[2];
    v14[3] = v5[3];
    v14[4] = v5[4];
    v8 = ReportExceptionInternal(v22, (__int64)Handle, v24, v17, v4, &v21);
    if ( v8 >= 0 )
    {
      if ( !v21 || (v8 = WerpWaitForCrashReporting(0LL, v18, v21, v23), v8 >= 0) )
        v8 = 0;
    }
  }
  if ( v19 )
  {
    NtUnmapViewOfSection();
    if ( Handle )
      NtClose(Handle);
    if ( v21 )
      NtClose(v21);
  }
  if ( v18 )
    NtClose(v18);
  return (unsigned int)v8;
}
