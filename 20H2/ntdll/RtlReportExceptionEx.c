/*
 * XREFs of RtlReportExceptionEx @ 0x1800DCDC0
 * Callers:
 *     WerReportExceptionWorker @ 0x1800DDA80 (WerReportExceptionWorker.c)
 * Callees:
 *     WerpProcessId @ 0x18006094C (WerpProcessId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009D5F0 (NtUnmapViewOfSection.c)
 *     ZwTerminateProcess @ 0x18009D630 (ZwTerminateProcess.c)
 *     ZwDuplicateObject @ 0x18009D830 (ZwDuplicateObject.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     ReportExceptionInternal @ 0x1800DCBB8 (ReportExceptionInternal.c)
 *     RtlReportException @ 0x1800DCCF0 (RtlReportException.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800DDC1C (WerpBreakIntoDebuggerIfPresent.c)
 *     WerpCreateCompletionEvent @ 0x1800DDC70 (WerpCreateCompletionEvent.c)
 *     WerpCreateCrashDataSection @ 0x1800DDCD4 (WerpCreateCrashDataSection.c)
 *     WerpSetProcessFaultInformation @ 0x1800DDEC8 (WerpSetProcessFaultInformation.c)
 *     WerpThreadId @ 0x1800DDF08 (WerpThreadId.c)
 *     WerpWaitForCrashReporting @ 0x1800DDF40 (WerpWaitForCrashReporting.c)
 */

__int64 __fastcall RtlReportExceptionEx(__int64 a1, __int64 a2, unsigned int a3, void *a4, __int64 a5)
{
  unsigned int v8; // r13d
  int v9; // eax
  __int64 v10; // rdx
  struct _TEB *v11; // r8
  int v13; // ebx
  _DWORD *v14; // rcx
  _DWORD *v15; // rdx
  _OWORD *v16; // r9
  __int64 v17; // rax
  HANDLE v18; // [rsp+40h] [rbp-A8h] BYREF
  _DWORD *v19; // [rsp+48h] [rbp-A0h] BYREF
  HANDLE v20; // [rsp+50h] [rbp-98h]
  HANDLE v21; // [rsp+58h] [rbp-90h]
  void *v22; // [rsp+60h] [rbp-88h]
  HANDLE Handle; // [rsp+68h] [rbp-80h] BYREF
  HANDLE v24; // [rsp+70h] [rbp-78h] BYREF
  int v25; // [rsp+78h] [rbp-70h]
  __int64 v26; // [rsp+80h] [rbp-68h]
  _QWORD v27[4]; // [rsp+88h] [rbp-60h] BYREF

  v22 = a4;
  v26 = a5;
  v21 = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  v24 = 0LL;
  v19 = 0LL;
  v8 = WerpProcessId(a4);
  v9 = WerpThreadId(a5);
  v25 = v9;
  v11 = NtCurrentTeb();
  if ( v8 == LODWORD(v11->ClientId.UniqueProcess) && v9 == LODWORD(v11->ClientId.UniqueThread) )
    return RtlReportException(a1, a2, a3);
  if ( v8 == LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) )
    WerpBreakIntoDebuggerIfPresent(a1, a2, a3);
  if ( (a3 & 4) != 0 || (v13 = WerpSetProcessFaultInformation(v22, v10, v11), v13 >= 0) )
  {
    v13 = WerpCreateCompletionEvent(&v18, v10, v11);
    if ( v13 >= 0 )
    {
      v13 = WerpCreateCrashDataSection(&v24, &v19);
      if ( v13 >= 0 )
      {
        v13 = ZwDuplicateObject();
        if ( v13 >= 0 )
        {
          v13 = ZwDuplicateObject();
          if ( v13 >= 0 )
          {
            v14 = v19;
            *v19 = 248;
            *((_QWORD *)v14 + 21) = 1LL;
            v14[1] = v8;
            v14[2] = v25;
            *((_QWORD *)v14 + 23) = v21;
            *((_QWORD *)v14 + 24) = v20;
            *((_QWORD *)v14 + 26) = v18;
            *((_QWORD *)v14 + 28) = 0LL;
            v14[58] = -1073741823;
            v14[59] = a3;
            v15 = v19;
            v19[60] = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
            v16 = v15 + 104;
            *((_QWORD *)v15 + 31) = 1LL;
            *(_OWORD *)(v15 + 66) = *(_OWORD *)a1;
            *(_OWORD *)(v15 + 70) = *(_OWORD *)(a1 + 16);
            *(_OWORD *)(v15 + 74) = *(_OWORD *)(a1 + 32);
            *(_OWORD *)(v15 + 78) = *(_OWORD *)(a1 + 48);
            *(_OWORD *)(v15 + 82) = *(_OWORD *)(a1 + 64);
            *(_OWORD *)(v15 + 86) = *(_OWORD *)(a1 + 80);
            *(_OWORD *)(v15 + 90) = *(_OWORD *)(a1 + 96);
            *(_OWORD *)(v15 + 94) = *(_OWORD *)(a1 + 112);
            *(_OWORD *)(v15 + 98) = *(_OWORD *)(a1 + 128);
            *((_QWORD *)v15 + 51) = *(_QWORD *)(a1 + 144);
            if ( (a2 & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
            {
              *((_QWORD *)v15 + 32) = 1LL;
              v17 = 9LL;
              do
              {
                *v16 = *(_OWORD *)a2;
                v16[1] = *(_OWORD *)(a2 + 16);
                v16[2] = *(_OWORD *)(a2 + 32);
                v16[3] = *(_OWORD *)(a2 + 48);
                v16[4] = *(_OWORD *)(a2 + 64);
                v16[5] = *(_OWORD *)(a2 + 80);
                v16[6] = *(_OWORD *)(a2 + 96);
                v16 += 8;
                *(v16 - 1) = *(_OWORD *)(a2 + 112);
                a2 += 128LL;
                --v17;
              }
              while ( v17 );
              *v16 = *(_OWORD *)a2;
              v16[1] = *(_OWORD *)(a2 + 16);
              v16[2] = *(_OWORD *)(a2 + 32);
              v16[3] = *(_OWORD *)(a2 + 48);
              v16[4] = *(_OWORD *)(a2 + 64);
            }
            else
            {
              *((_QWORD *)v15 + 32) = 2LL;
              memset(v16, 0, 0x4D0uLL);
            }
            v27[0] = v18;
            v27[1] = v24;
            v27[2] = v21;
            v27[3] = v20;
            v13 = ReportExceptionInternal(v8, (__int64)v24, v27, 4u, a3, &Handle);
            if ( v13 >= 0 )
            {
              v13 = WerpWaitForCrashReporting(v22, v18, Handle, 0LL);
              if ( v13 >= 0 )
              {
                if ( (a3 & 4) != 0 || (v13 = ZwTerminateProcess(), v13 >= 0) )
                  v13 = 0;
              }
            }
          }
        }
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( v19 )
    NtUnmapViewOfSection();
  if ( v24 )
    NtClose(v24);
  if ( v18 )
  {
    NtClose(v18);
    v18 = 0LL;
  }
  if ( v20 )
    NtClose(v20);
  if ( v21 )
    NtClose(v21);
  return (unsigned int)v13;
}
