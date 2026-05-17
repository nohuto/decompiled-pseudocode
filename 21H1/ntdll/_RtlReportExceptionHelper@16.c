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

int __fastcall RtlReportExceptionHelper(const void *a1, const void *a2, unsigned int a3, int a4)
{
  int v4; // esi
  int v5; // edi
  unsigned int v6; // esi
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // eax
  _DWORD *v10; // ecx
  unsigned int v12; // [esp+20h] [ebp-58h]
  HANDLE v15; // [esp+2Ch] [ebp-4Ch] BYREF
  _DWORD *v16; // [esp+30h] [ebp-48h] BYREF
  unsigned int v17; // [esp+34h] [ebp-44h]
  HANDLE Handle; // [esp+38h] [ebp-40h] BYREF
  HANDLE v19; // [esp+3Ch] [ebp-3Ch] BYREF
  HANDLE v20; // [esp+40h] [ebp-38h] BYREF
  HANDLE v21; // [esp+44h] [ebp-34h] BYREF
  int v22; // [esp+48h] [ebp-30h]
  _DWORD v23[5]; // [esp+4Ch] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+60h] [ebp-18h]

  v15 = 0;
  v22 = -1073741823;
  v21 = 0;
  Handle = 0;
  v20 = 0;
  v19 = 0;
  v4 = 0;
  v16 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( (a3 & 4) == 0 )
    WerpSetProcessFaultInformation(a1);
  v22 = WerpCreateCompletionEvent(&v21);
  if ( v22 < 0 )
  {
    v21 = 0;
  }
  else
  {
    v23[0] = v21;
    v4 = 1;
    v17 = 1;
  }
  v5 = WerpCreateCrashDataSection(&Handle, &v16);
  v22 = v5;
  if ( v5 >= 0 )
  {
    v23[v4] = Handle;
    v6 = v4 + 1;
    v17 = v6;
    v22 = ZwDuplicateObject(-1, -1, -1, (int)&v20, 0x1FFFFF, 2, 0);
    if ( v22 < 0 )
    {
      v20 = 0;
    }
    else
    {
      v23[v6++] = v20;
      v17 = v6;
    }
    v22 = ZwDuplicateObject(-1, -2, -1, (int)&v19, 0x1FFFFF, 2, 0);
    if ( v22 < 0 )
    {
      v19 = 0;
    }
    else
    {
      v23[v6] = v19;
      v17 = v6 + 1;
    }
    v12 = WerpProcessId(-1);
    v7 = WerpThreadId((HANDLE)0xFFFFFFFE);
    v8 = v16;
    *v16 = 248;
    v8[42] = 1;
    v8[43] = 0;
    v8[1] = v12;
    v8[2] = v7;
    v8[46] = v20;
    v8[47] = 0;
    v8[48] = v19;
    v8[49] = 0;
    v8[52] = v21;
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
    v10 = v16;
    v16[60] = v9;
    v10[62] = 1;
    v10[63] = 1;
    qmemcpy(v10 + 64, a1, 0x50u);
    qmemcpy(v10 + 84, a2, 0x2CCu);
    v5 = ReportExceptionInternal(v12, (int)Handle, (int)v23, v17, a3, &v15);
    v22 = v5;
    if ( v5 >= 0 )
    {
      if ( !v15 || (v5 = WerpWaitForCrashReporting(v15, a4), v22 = v5, v5 >= 0) )
      {
        v5 = 0;
        v22 = 0;
      }
    }
  }
  ms_exc.registration.TryLevel = -2;
  if ( v16 )
  {
    NtUnmapViewOfSection(-1, (int)v16);
    if ( Handle )
      NtClose(Handle);
    if ( v15 )
      NtClose(v15);
  }
  if ( v20 )
  {
    NtClose(v20);
    v20 = 0;
  }
  if ( v19 )
  {
    NtClose(v19);
    v19 = 0;
  }
  if ( v21 )
  {
    NtClose(v21);
    v21 = 0;
  }
  return v5;
}
