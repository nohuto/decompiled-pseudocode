/*
 * XREFs of WppInitGlobalLoggerWdf @ 0x1C0039D28
 * Callers:
 *     WppTraceCallbackWdf @ 0x1C003A140 (WppTraceCallbackWdf.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A4F0 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1C001D4E6 (wcscmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001D540 (memset.c)
 *     memmove @ 0x1C001D640 (memmove.c)
 *     WppGuidToStr @ 0x1C0039C24 (WppGuidToStr.c)
 */

void __fastcall WppInitGlobalLoggerWdf(
        wchar_t *LoggerName,
        const _GUID *pControlGuid,
        unsigned __int64 *pLogger,
        unsigned int *pFlags,
        unsigned __int8 *pLevel)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  int v10; // r12d
  __int64 v11; // rax
  SIZE_T v12; // r14
  _OWORD *PoolWithTag; // rax
  _OWORD *v14; // rdi
  __int64 v15; // rax
  size_t v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  PVOID SystemRoutineAddress; // rax
  PVOID v20; // rax
  int v21; // ebx
  unsigned __int8 *v22; // rcx
  unsigned int aZero; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int Lstart; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int Lflags; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int Llevel; // [rsp+3Ch] [rbp-C4h] BYREF
  _UNICODE_STRING LoggerNameStr; // [rsp+40h] [rbp-C0h] BYREF
  const _GUID *ReturnLength; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 *v29; // [rsp+58h] [rbp-A8h]
  _RTL_QUERY_REGISTRY_TABLE parms[3]; // [rsp+60h] [rbp-A0h] BYREF

  v29 = pLevel;
  v6 = -1LL;
  ReturnLength = pControlGuid;
  v7 = -1LL;
  Lflags = 0;
  Llevel = 0;
  Lstart = 0;
  aZero = 0;
  v10 = 0;
  do
    ++v7;
  while ( LoggerName[v7] );
  if ( v7 <= 0x7FFFFFFF )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( LoggerName[v11] );
    v12 = (unsigned int)(2 * v11 + 142);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x45435453u);
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)v12);
      if ( !wcscmp_0(LoggerName, L"GlobalLogger") )
      {
        v10 = 1;
        *v14 = *(_OWORD *)L"WMI\\GlobalLogger\\";
        v14[1] = *(_OWORD *)L"alLogger\\";
        *((_WORD *)v14 + 16) = aWmiGloballogge[16];
      }
      else
      {
        *v14 = *(_OWORD *)L"WMI\\AutoLogger\\";
        *((_QWORD *)v14 + 2) = *(_QWORD *)L"Logger\\";
        *((_DWORD *)v14 + 6) = *(_DWORD *)L"er\\";
        *((_WORD *)v14 + 14) = aWmiAutologger[14];
        v15 = -1LL;
        do
          ++v15;
        while ( LoggerName[v15] );
        v16 = (unsigned int)(2 * v15);
        v17 = -1LL;
        do
          ++v17;
        while ( *((_WORD *)v14 + v17) );
        memmove((char *)v14 + 2 * v17, LoggerName, v16);
        v18 = -1LL;
        do
          ++v18;
        while ( *((_WORD *)v14 + v18) );
        *((_WORD *)v14 + v18) = 92;
      }
      parms[0].QueryRoutine = 0LL;
      parms[0].Name = L"Start";
      parms[0].Flags = 288;
      parms[0].EntryContext = &Lstart;
      parms[0].DefaultType = 0x4000000;
      parms[0].DefaultData = &aZero;
      parms[0].DefaultLength = 4;
      parms[1].QueryRoutine = 0LL;
      parms[1].Flags = 0;
      LoggerNameStr = 0LL;
      RtlInitUnicodeString(&LoggerNameStr, L"RtlQueryRegistryValuesEx");
      SystemRoutineAddress = MmGetSystemRoutineAddress(&LoggerNameStr);
      if ( !SystemRoutineAddress )
        SystemRoutineAddress = RtlQueryRegistryValues;
      if ( ((int (__fastcall *)(__int64, _OWORD *, _RTL_QUERY_REGISTRY_TABLE *, _QWORD, _QWORD))SystemRoutineAddress)(
             2147483650LL,
             v14,
             parms,
             0LL,
             0LL) >= 0
        && Lstart )
      {
        parms[0].QueryRoutine = 0LL;
        parms[0].Name = L"Flags";
        parms[0].Flags = 288;
        parms[0].EntryContext = &Lflags;
        parms[0].DefaultType = 0x4000000;
        parms[0].DefaultData = &aZero;
        parms[1].Name = L"Level";
        parms[1].EntryContext = &Llevel;
        parms[1].DefaultData = &aZero;
        parms[0].DefaultLength = 4;
        parms[1].QueryRoutine = 0LL;
        parms[1].Flags = 288;
        parms[1].DefaultType = 0x4000000;
        parms[1].DefaultLength = 1;
        parms[2].QueryRoutine = 0LL;
        parms[2].Flags = 0;
        do
          ++v6;
        while ( *((_WORD *)v14 + v6) );
        WppGuidToStr((wchar_t *)v14 + (unsigned int)v6, ReturnLength);
        LoggerNameStr = 0LL;
        RtlInitUnicodeString(&LoggerNameStr, L"RtlQueryRegistryValuesEx");
        v20 = MmGetSystemRoutineAddress(&LoggerNameStr);
        if ( !v20 )
          v20 = RtlQueryRegistryValues;
        v21 = ((__int64 (__fastcall *)(__int64, _OWORD *, _RTL_QUERY_REGISTRY_TABLE *, _QWORD, _QWORD))v20)(
                2147483650LL,
                v14,
                parms,
                0LL,
                0LL);
        ExFreePoolWithTag(v14, 0x45435453u);
        if ( v21 >= 0 && Lstart == 1 )
        {
          if ( v10 )
          {
            *pLogger = 1LL;
          }
          else
          {
            LODWORD(ReturnLength) = 0;
            LoggerNameStr = 0LL;
            RtlInitUnicodeString(&LoggerNameStr, LoggerName);
            if ( WmiQueryTraceInformation(TraceHandleByNameClass, pLogger, 8u, (PULONG)&ReturnLength, &LoggerNameStr) < 0 )
              *pLogger = 0LL;
          }
          v22 = v29;
          *pFlags = Lflags & 0x7FFFFFFF;
          *v22 = Llevel;
        }
      }
      else
      {
        ExFreePoolWithTag(v14, 0x45435453u);
      }
    }
  }
}
