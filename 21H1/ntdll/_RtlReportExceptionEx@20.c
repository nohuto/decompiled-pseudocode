/*
 * XREFs of _RtlReportExceptionEx@20 @ 0x4B33A550
 * Callers:
 *     _WerReportExceptionWorker@4 @ 0x4B33AE10 (_WerReportExceptionWorker@4.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     _ZwDuplicateObject@28 @ 0x4B2F2D40 (_ZwDuplicateObject@28.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _ReportExceptionInternal@24 @ 0x4B33A3B1 (_ReportExceptionInternal@24.c)
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 *     _RtlReportExceptionEx@20 @ 0x4B33A550 (_RtlReportExceptionEx@20.c)
 *     _WerpBreakIntoDebuggerIfPresent@12 @ 0x4B33AF53 (_WerpBreakIntoDebuggerIfPresent@12.c)
 *     _WerpCreateCompletionEvent@4 @ 0x4B33AF8E (_WerpCreateCompletionEvent@4.c)
 *     _WerpCreateCrashDataSection@8 @ 0x4B33AFD2 (_WerpCreateCrashDataSection@8.c)
 *     _WerpProcessId@4 @ 0x4B33B2CF (_WerpProcessId@4.c)
 *     _WerpSetProcessFaultInformation@12 @ 0x4B33B2F4 (_WerpSetProcessFaultInformation@12.c)
 *     _WerpThreadId@4 @ 0x4B33B323 (_WerpThreadId@4.c)
 *     _WerpWaitForCrashReporting@16 @ 0x4B33B348 (_WerpWaitForCrashReporting@16.c)
 */

NTSTATUS __cdecl RtlReportExceptionEx(
        PEXCEPTION_RECORD ExceptionRecord,
        PCONTEXT ContextRecord,
        ULONG Flags,
        PLARGE_INTEGER Timeout)
{
  int v4; // eax
  struct _TEB *v5; // ecx
  int v7; // esi
  _DWORD *v8; // ecx
  int v9; // ecx
  _DWORD *v10; // eax
  size_t v11; // [esp-4h] [ebp-80h]
  int v12; // [esp+1Ch] [ebp-60h]
  HANDLE v13; // [esp+24h] [ebp-58h] BYREF
  void *v14; // [esp+28h] [ebp-54h]
  PVOID BaseAddress; // [esp+2Ch] [ebp-50h] BYREF
  HANDLE Handle; // [esp+30h] [ebp-4Ch] BYREF
  HANDLE SourceHandle; // [esp+34h] [ebp-48h]
  PEXCEPTION_RECORD v18; // [esp+38h] [ebp-44h]
  HANDLE TargetHandle; // [esp+3Ch] [ebp-40h] BYREF
  HANDLE v20; // [esp+40h] [ebp-3Ch] BYREF
  HANDLE EventHandle; // [esp+44h] [ebp-38h] BYREF
  int v22; // [esp+48h] [ebp-34h]
  _DWORD v23[6]; // [esp+4Ch] [ebp-30h] BYREF
  CPPEH_RECORD ms_exc; // [esp+64h] [ebp-18h]
  HANDLE ThreadHandle; // [esp+94h] [ebp+18h]

  v18 = ExceptionRecord;
  SourceHandle = Timeout;
  v22 = -1073741823;
  TargetHandle = 0;
  v20 = 0;
  EventHandle = 0;
  Handle = 0;
  v13 = 0;
  BaseAddress = 0;
  v14 = (void *)WerpProcessId(Timeout);
  v4 = WerpThreadId(ThreadHandle);
  v12 = v4;
  v5 = NtCurrentTeb();
  if ( v14 == v5->ClientId.UniqueProcess && (void *)v4 == v5->ClientId.UniqueThread )
    return RtlReportException(v18, ContextRecord, Flags);
  if ( v14 == NtCurrentTeb()->ClientId.UniqueProcess )
    WerpBreakIntoDebuggerIfPresent(v18, ContextRecord, Flags);
  ms_exc.registration.TryLevel = 0;
  if ( (Flags & 4) != 0 || (v7 = WerpSetProcessFaultInformation(SourceHandle, (int)v5), v22 = v7, v7 >= 0) )
  {
    v7 = WerpCreateCompletionEvent(&EventHandle);
    v22 = v7;
    if ( v7 >= 0 )
    {
      v7 = WerpCreateCrashDataSection(&v13, &BaseAddress);
      v22 = v7;
      if ( v7 >= 0 )
      {
        v7 = ZwDuplicateObject((HANDLE)0xFFFFFFFF, SourceHandle, (HANDLE)0xFFFFFFFF, &TargetHandle, 0x1FFFFFu, 2u, 0);
        v22 = v7;
        if ( v7 >= 0 )
        {
          v7 = ZwDuplicateObject((HANDLE)0xFFFFFFFF, ThreadHandle, (HANDLE)0xFFFFFFFF, &v20, 0x1FFFFFu, 2u, 0);
          v22 = v7;
          if ( v7 >= 0 )
          {
            v8 = BaseAddress;
            *(_DWORD *)BaseAddress = 248;
            v8[42] = 1;
            v8[43] = 0;
            v8[1] = v14;
            v8[2] = v12;
            v8[46] = TargetHandle;
            v8[47] = 0;
            v8[48] = v20;
            v8[49] = 0;
            v8[52] = EventHandle;
            v8[53] = 0;
            v8[56] = 0;
            v8[57] = 0;
            v8[58] = -1073741823;
            v8[59] = Flags;
            if ( MEMORY[0x7FFE0004] < 0x1000000u )
            {
              while ( MEMORY[0x7FFE0324] != MEMORY[0x7FFE0328] )
                _mm_pause();
              v9 = ((MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24)
                 + MEMORY[0x7FFE0004] * (MEMORY[0x7FFE0324] << 8);
            }
            else
            {
              v9 = (MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24;
            }
            v10 = BaseAddress;
            *((_DWORD *)BaseAddress + 60) = v9;
            v10[62] = 1;
            qmemcpy(v10 + 64, v18, 0x50u);
            if ( ContextRecord == (PCONTEXT)2 || !ContextRecord )
            {
              v10[63] = 2;
              LODWORD(v11) = 716;
              memset(v10 + 84, 0, v11);
            }
            else
            {
              v10[63] = 1;
              qmemcpy(v10 + 84, ContextRecord, 0x2CCu);
            }
            v23[0] = EventHandle;
            v23[1] = v13;
            v23[2] = TargetHandle;
            v23[3] = v20;
            v7 = ReportExceptionInternal((int)v14, (int)v13, (int)v23, 4u, Flags, &Handle);
            v22 = v7;
            if ( v7 >= 0 )
            {
              v7 = WerpWaitForCrashReporting((int)Handle, 0);
              v22 = v7;
              if ( v7 >= 0 )
              {
                if ( (Flags & 4) != 0 || (v7 = ZwTerminateProcess(SourceHandle, v18->ExceptionCode), v22 = v7, v7 >= 0) )
                {
                  v7 = 0;
                  v22 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  ms_exc.registration.TryLevel = -2;
  if ( Handle )
    NtClose(Handle);
  if ( BaseAddress )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
  if ( v13 )
    NtClose(v13);
  if ( EventHandle )
  {
    NtClose(EventHandle);
    EventHandle = 0;
  }
  if ( v20 )
    NtClose(v20);
  if ( TargetHandle )
    NtClose(TargetHandle);
  return v7;
}
