/*
 * XREFs of _RtlReportExceptionHelper@16 @ 0x4B33A890
 * Callers:
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 *     _RtlpPossibleDeadlock@4 @ 0x4B34A99E (_RtlpPossibleDeadlock@4.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _ZwDuplicateObject@28 @ 0x4B2F2D40 (_ZwDuplicateObject@28.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _ReportExceptionInternal@24 @ 0x4B33A3B1 (_ReportExceptionInternal@24.c)
 *     _RtlReportExceptionHelper@16 @ 0x4B33A890 (_RtlReportExceptionHelper@16.c)
 *     _WerpCreateCompletionEvent@4 @ 0x4B33AF8E (_WerpCreateCompletionEvent@4.c)
 *     _WerpCreateCrashDataSection@8 @ 0x4B33AFD2 (_WerpCreateCrashDataSection@8.c)
 *     _WerpProcessId@4 @ 0x4B33B2CF (_WerpProcessId@4.c)
 *     _WerpSetProcessFaultInformation@12 @ 0x4B33B2F4 (_WerpSetProcessFaultInformation@12.c)
 *     _WerpThreadId@4 @ 0x4B33B323 (_WerpThreadId@4.c)
 *     _WerpWaitForCrashReporting@16 @ 0x4B33B348 (_WerpWaitForCrashReporting@16.c)
 */

int __fastcall RtlReportExceptionHelper(const void *a1, const void *a2, int a3, LARGE_INTEGER *a4)
{
  int v4; // esi
  int v5; // edi
  unsigned int v6; // esi
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // eax
  _DWORD *v10; // ecx
  int v12; // [esp+20h] [ebp-58h]
  HANDLE v15; // [esp+2Ch] [ebp-4Ch] BYREF
  PVOID BaseAddress; // [esp+30h] [ebp-48h] BYREF
  unsigned int v17; // [esp+34h] [ebp-44h]
  HANDLE Handle; // [esp+38h] [ebp-40h] BYREF
  HANDLE v19; // [esp+3Ch] [ebp-3Ch] BYREF
  HANDLE TargetHandle; // [esp+40h] [ebp-38h] BYREF
  HANDLE EventHandle; // [esp+44h] [ebp-34h] BYREF
  NTSTATUS v22; // [esp+48h] [ebp-30h]
  _DWORD v23[5]; // [esp+4Ch] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+60h] [ebp-18h]

  v15 = 0;
  v22 = -1073741823;
  EventHandle = 0;
  Handle = 0;
  TargetHandle = 0;
  v19 = 0;
  v4 = 0;
  BaseAddress = 0;
  ms_exc.registration.TryLevel = 0;
  if ( (a3 & 4) == 0 )
    WerpSetProcessFaultInformation((HANDLE)0xFFFFFFFF, (int)a1);
  v22 = WerpCreateCompletionEvent(&EventHandle);
  if ( v22 < 0 )
  {
    EventHandle = 0;
  }
  else
  {
    v23[0] = EventHandle;
    v4 = 1;
    v17 = 1;
  }
  v5 = WerpCreateCrashDataSection(&Handle, &BaseAddress);
  v22 = v5;
  if ( v5 >= 0 )
  {
    v23[v4] = Handle;
    v6 = v4 + 1;
    v17 = v6;
    v22 = ZwDuplicateObject((HANDLE)0xFFFFFFFF, (HANDLE)0xFFFFFFFF, (HANDLE)0xFFFFFFFF, &TargetHandle, 0x1FFFFFu, 2u, 0);
    if ( v22 < 0 )
    {
      TargetHandle = 0;
    }
    else
    {
      v23[v6++] = TargetHandle;
      v17 = v6;
    }
    v22 = ZwDuplicateObject((HANDLE)0xFFFFFFFF, (HANDLE)0xFFFFFFFE, (HANDLE)0xFFFFFFFF, &v19, 0x1FFFFFu, 2u, 0);
    if ( v22 < 0 )
    {
      v19 = 0;
    }
    else
    {
      v23[v6] = v19;
      v17 = v6 + 1;
    }
    v12 = WerpProcessId((HANDLE)0xFFFFFFFF);
    v7 = WerpThreadId((HANDLE)0xFFFFFFFE);
    v8 = BaseAddress;
    *(_DWORD *)BaseAddress = 248;
    v8[42] = 1;
    v8[43] = 0;
    v8[1] = v12;
    v8[2] = v7;
    v8[46] = TargetHandle;
    v8[47] = 0;
    v8[48] = v19;
    v8[49] = 0;
    v8[52] = EventHandle;
    v8[53] = 0;
    v8[56] = 0;
    v8[57] = 0;
    v8[58] = -1073741823;
    v8[59] = a3;
    if ( MEMORY[0x7FFE0004] < 0x1000000u )
    {
      while ( MEMORY[0x7FFE0324] != MEMORY[0x7FFE0328] )
        _mm_pause();
      v9 = MEMORY[0x7FFE0004] * (MEMORY[0x7FFE0324] << 8)
         + ((MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24);
    }
    else
    {
      v9 = (MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24;
    }
    v10 = BaseAddress;
    *((_DWORD *)BaseAddress + 60) = v9;
    v10[62] = 1;
    v10[63] = 1;
    qmemcpy(v10 + 64, a1, 0x50u);
    qmemcpy(v10 + 84, a2, 0x2CCu);
    v5 = ReportExceptionInternal(v12, (int)Handle, (int)v23, v17, a3, &v15);
    v22 = v5;
    if ( v5 >= 0 )
    {
      if ( !v15 || (v5 = WerpWaitForCrashReporting((int)v15, a4), v22 = v5, v5 >= 0) )
      {
        v5 = 0;
        v22 = 0;
      }
    }
  }
  ms_exc.registration.TryLevel = -2;
  if ( BaseAddress )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
    if ( Handle )
      NtClose(Handle);
    if ( v15 )
      NtClose(v15);
  }
  if ( TargetHandle )
  {
    NtClose(TargetHandle);
    TargetHandle = 0;
  }
  if ( v19 )
  {
    NtClose(v19);
    v19 = 0;
  }
  if ( EventHandle )
  {
    NtClose(EventHandle);
    EventHandle = 0;
  }
  return v5;
}
