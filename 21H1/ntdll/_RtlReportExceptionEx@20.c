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

int __stdcall RtlReportExceptionEx(_DWORD *a1, const void *a2, int a3, int a4, HANDLE ThreadHandle)
{
  int v5; // eax
  struct _TEB *v6; // ecx
  int v8; // esi
  _DWORD *v9; // ecx
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // [esp+1Ch] [ebp-60h]
  HANDLE v13; // [esp+24h] [ebp-58h] BYREF
  void *v14; // [esp+28h] [ebp-54h]
  _DWORD *v15; // [esp+2Ch] [ebp-50h] BYREF
  HANDLE Handle; // [esp+30h] [ebp-4Ch] BYREF
  int v17; // [esp+34h] [ebp-48h]
  _DWORD *v18; // [esp+38h] [ebp-44h]
  HANDLE v19; // [esp+3Ch] [ebp-40h] BYREF
  HANDLE v20; // [esp+40h] [ebp-3Ch] BYREF
  HANDLE v21; // [esp+44h] [ebp-38h] BYREF
  int v22; // [esp+48h] [ebp-34h]
  _DWORD v23[6]; // [esp+4Ch] [ebp-30h] BYREF
  CPPEH_RECORD ms_exc; // [esp+64h] [ebp-18h]

  v18 = a1;
  v17 = a4;
  v22 = -1073741823;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  Handle = 0;
  v13 = 0;
  v15 = 0;
  v14 = (void *)WerpProcessId(a4);
  v5 = WerpThreadId(ThreadHandle);
  v12 = v5;
  v6 = NtCurrentTeb();
  if ( v14 == v6->ClientId.UniqueProcess && (void *)v5 == v6->ClientId.UniqueThread )
    return RtlReportException((int)v18, (int)a2, a3);
  if ( v14 == NtCurrentTeb()->ClientId.UniqueProcess )
    WerpBreakIntoDebuggerIfPresent(a3);
  ms_exc.registration.TryLevel = 0;
  if ( (a3 & 4) != 0 || (v8 = WerpSetProcessFaultInformation(v6), v22 = v8, v8 >= 0) )
  {
    v8 = WerpCreateCompletionEvent(&v21);
    v22 = v8;
    if ( v8 >= 0 )
    {
      v8 = WerpCreateCrashDataSection(&v13, &v15);
      v22 = v8;
      if ( v8 >= 0 )
      {
        v8 = ZwDuplicateObject(-1, v17, -1, (int)&v19, 0x1FFFFF, 2, 0);
        v22 = v8;
        if ( v8 >= 0 )
        {
          v8 = ZwDuplicateObject(-1, (int)ThreadHandle, -1, (int)&v20, 0x1FFFFF, 2, 0);
          v22 = v8;
          if ( v8 >= 0 )
          {
            v9 = v15;
            *v15 = 248;
            v9[42] = 1;
            v9[43] = 0;
            v9[1] = v14;
            v9[2] = v12;
            v9[46] = v19;
            v9[47] = 0;
            v9[48] = v20;
            v9[49] = 0;
            v9[52] = v21;
            v9[53] = 0;
            v9[56] = 0;
            v9[57] = 0;
            v9[58] = -1073741823;
            v9[59] = a3;
            if ( MEMORY[0x7FFE0004] < 0x1000000u )
            {
              while ( MEMORY[0x7FFE0324] != MEMORY[0x7FFE0328] )
                _mm_pause();
              v10 = ((MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24)
                  + MEMORY[0x7FFE0004] * (MEMORY[0x7FFE0324] << 8);
            }
            else
            {
              v10 = (MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24;
            }
            v11 = v15;
            v15[60] = v10;
            v11[62] = 1;
            qmemcpy(v11 + 64, v18, 0x50u);
            if ( a2 == (const void *)2 || !a2 )
            {
              v11[63] = 2;
              memset(v11 + 84, 0, 0x2CCu);
            }
            else
            {
              v11[63] = 1;
              qmemcpy(v11 + 84, a2, 0x2CCu);
            }
            v23[0] = v21;
            v23[1] = v13;
            v23[2] = v19;
            v23[3] = v20;
            v8 = ReportExceptionInternal((unsigned int)v14, (int)v13, (int)v23, 4u, a3, &Handle);
            v22 = v8;
            if ( v8 >= 0 )
            {
              v8 = WerpWaitForCrashReporting(Handle, 0);
              v22 = v8;
              if ( v8 >= 0 )
              {
                if ( (a3 & 4) != 0 || (v8 = ZwTerminateProcess(v17, *v18), v22 = v8, v8 >= 0) )
                {
                  v8 = 0;
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
  if ( v15 )
    NtUnmapViewOfSection(-1, (int)v15);
  if ( v13 )
    NtClose(v13);
  if ( v21 )
  {
    NtClose(v21);
    v21 = 0;
  }
  if ( v20 )
    NtClose(v20);
  if ( v19 )
    NtClose(v19);
  return v8;
}
