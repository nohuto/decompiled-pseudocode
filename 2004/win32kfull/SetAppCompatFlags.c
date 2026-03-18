/*
 * XREFs of SetAppCompatFlags @ 0x1C003C040
 * Callers:
 *     <none>
 * Callees:
 *     SetAppImeCompatFlags @ 0x1C003C604 (SetAppImeCompatFlags.c)
 *     WPP_RECORDER_SF_DS @ 0x1C003C71C (WPP_RECORDER_SF_DS.c)
 *     IsCurrentDesktopComposed @ 0x1C003C800 (IsCurrentDesktopComposed.c)
 *     ?TraceLoggingGDIScaledAppEvent@@YAXXZ @ 0x1C0153D44 (-TraceLoggingGDIScaledAppEvent@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C01577A0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetAppCompatFlags(_QWORD *a1)
{
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessPeb; // r13
  __int64 v4; // rax
  int v5; // ecx
  unsigned __int16 *v7; // rdx
  int v8; // r14d
  unsigned int *v9; // rdx
  __int64 v10; // rcx
  ULONG64 v11; // r8
  ULONG64 v12; // rdx
  _BYTE **v13; // rax
  _WORD *v14; // rbx
  _WORD *v15; // rax
  _WORD *v16; // rcx
  _WORD *v17; // rsi
  unsigned int v18; // ebx
  __int64 v19; // r15
  _WORD *v20; // rcx
  size_t v21; // r8
  __int64 ThreadTeb; // rax
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rax
  int v33; // edx
  int v34; // r8d
  int v35; // r9d
  ULONG Value; // [rsp+40h] [rbp-1F8h] BYREF
  int v37; // [rsp+44h] [rbp-1F4h] BYREF
  int v38; // [rsp+48h] [rbp-1F0h]
  unsigned int v39; // [rsp+4Ch] [rbp-1ECh]
  _WORD *v40; // [rsp+50h] [rbp-1E8h]
  _WORD *v41; // [rsp+58h] [rbp-1E0h]
  __int128 v42; // [rsp+60h] [rbp-1D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-1C8h] BYREF
  struct _UNICODE_STRING v44; // [rsp+80h] [rbp-1B8h] BYREF
  WCHAR v45[96]; // [rsp+A0h] [rbp-198h] BYREF
  WCHAR SourceString[80]; // [rsp+160h] [rbp-D8h] BYREF

  Value = 0;
  v44 = 0LL;
  v42 = 0LL;
  ThreadProcess = PsGetThreadProcess((PETHREAD)*a1);
  ProcessPeb = PsGetProcessPeb(ThreadProcess);
  v4 = a1[82];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 632);
    *((_DWORD *)a1 + 158) = v5;
    a1[80] = *(_QWORD *)(v4 + 640);
    *(_DWORD *)(a1[59] + 20LL) = v5;
    *(_DWORD *)(a1[59] + 24LL) = *((_DWORD *)a1 + 160);
    return 0LL;
  }
  v7 = (unsigned __int16 *)a1[61];
  v8 = 1;
  if ( !v7 )
  {
    v9 = (unsigned int *)(*(_QWORD *)(ProcessPeb + 32) + 96LL);
    if ( (unsigned __int64)v9 >= MmUserProbeAddress )
      v9 = (unsigned int *)MmUserProbeAddress;
    v10 = *v9;
    v38 = v10;
    LODWORD(v42) = v10;
    v11 = *((_QWORD *)v9 + 1);
    *((_QWORD *)&v42 + 1) = v11;
    if ( (v11 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = v11 + (unsigned __int16)v10 + 2LL;
    v13 = (_BYTE **)MmUserProbeAddress;
    if ( v12 < MmUserProbeAddress && (unsigned __int16)v10 <= HIWORD(v38) )
    {
      if ( (v10 & 1) != 0 )
        goto LABEL_13;
      if ( v12 > v11 )
      {
LABEL_15:
        v7 = (unsigned __int16 *)&v42;
        goto LABEL_16;
      }
    }
    if ( (v10 & 1) == 0 )
    {
LABEL_14:
      **v13 = 0;
      goto LABEL_15;
    }
LABEL_13:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v12);
    v13 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_14;
  }
LABEL_16:
  v14 = (_WORD *)(*((_QWORD *)v7 + 1) + 2 * ((unsigned __int64)*v7 >> 1));
  v41 = v14;
  v15 = v14;
  v40 = v14;
  while ( 1 )
  {
    v16 = (_WORD *)*((_QWORD *)v7 + 1);
    if ( v14 == v16 )
      break;
    if ( *v14 == 46 )
      goto LABEL_20;
    v41 = --v14;
  }
  v14 = v15;
  v41 = v15;
LABEL_20:
  v17 = v14;
  v40 = v14;
  while ( v17 != v16 )
  {
    if ( *v17 == 92 || *v17 == 58 )
    {
      v40 = ++v17;
      break;
    }
    v40 = --v17;
  }
  v18 = 2 * (v14 - v17);
  v39 = v18;
  if ( v18 >= 0xA4 )
    v18 = 162;
  v39 = v18;
  v19 = v18;
  memmove(v45, v17, v18);
  v20 = (_WORD *)(a1[52] + 992LL);
  if ( !*v20 )
  {
    v21 = 30LL;
    if ( v18 < 0x1E )
      v21 = v18;
    memmove(v20, v17, v21);
    *(_WORD *)(a1[52] + 1022LL) = 0;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 12) & 0x80u) == 0 )
  {
    v25 = *(_QWORD *)(ProcessPeb + 720);
  }
  else
  {
    ThreadTeb = PsGetThreadTeb(*a1);
    v23 = ThreadTeb + 0x2000;
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    v24 = *(unsigned int *)(v23 + 48);
    ProbeForRead((volatile void *)(unsigned int)v24, 0x480uLL, 4u);
    v25 = *(_QWORD *)(v24 + 480);
  }
  a1[80] = v25;
  if ( (v25 & 0x800000000000000LL) != 0 )
  {
    v37 = 0;
    FastGetProfileDwordEx(0LL, 4LL, L"ForceDisableGDIScaling", 0LL, 4, &v37, 0LL);
    if ( v37 )
    {
      a1[80] &= ~0x800000000000000uLL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
      *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x20000000u;
    }
    else
    {
      v28 = PsGetCurrentProcessWin32Process(v26);
      *(_DWORD *)(v28 + 12) |= 0x20000000u;
      TraceLoggingGDIScaledAppEvent();
    }
  }
  *(_DWORD *)(a1[59] + 24LL) = *((_DWORD *)a1 + 160);
  if ( (a1[80] & 0x2000000) == 0 && (unsigned int)IsCurrentDesktopComposed() )
    v8 = 0;
  if ( (*(_DWORD *)(a1[52] + 820LL) & 0x30) == 0x10 )
    *(_QWORD *)a1[59] |= 0x10000000uLL;
  if ( v8 )
  {
LABEL_48:
    *(_QWORD *)a1[59] |= 0x20000000uLL;
    goto LABEL_51;
  }
  if ( (a1[80] & 0x880000000000000LL) == 0 )
  {
    v29 = a1[52];
    if ( (*(_DWORD *)(v29 + 820) & 0x30) != 0x10 )
    {
      if ( (unsigned int)IsImmersiveBroker(v29) )
        *(_QWORD *)(a1[59] + 224LL) |= 0x80uLL;
      goto LABEL_51;
    }
    goto LABEL_48;
  }
  *(_QWORD *)(a1[59] + 224LL) |= 0x10uLL;
LABEL_51:
  v30 = 0x100000000000000LL;
  if ( (a1[80] & 0x100000000000000LL) != 0 )
    *(_QWORD *)(a1[59] + 224LL) |= 0x20uLL;
  v31 = *((_DWORD *)a1 + 160);
  if ( (v31 & 0x10000000) == 0 )
  {
    v30 = 1536LL;
    if ( *((_WORD *)a1 + 312) < 0x600u )
    {
      *((_DWORD *)a1 + 160) = v31 | 0x20000000;
      *(_DWORD *)(a1[59] + 24LL) |= 0x20000000u;
    }
  }
  if ( (v19 & 0xFFFFFFFFFFFFFFFEuLL) >= 0xB4 )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)v45 + (v19 & 0xFFFFFFFFFFFFFFFEuLL)) = 0;
  v32 = PsGetCurrentProcessWin32Process(v30);
  if ( (unsigned int)FastGetProfileStringW(0LL, (*(_DWORD *)(v32 + 12) & 0x80u) != 0 ? 43 : 33, v45, 0LL) )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DS(
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v33,
      v34,
      v35,
      (unsigned int)SourceString,
      Value,
      (__int64)v45);
  *(_DWORD *)(a1[59] + 20LL) = Value;
  *((_DWORD *)a1 + 158) = Value;
  *(WCHAR *)((char *)v45 + (v19 & 0xFFFFFFFFFFFFFFFEuLL)) = 0;
  RtlInitUnicodeString(&v44, v45);
  return SetAppImeCompatFlags(a1, &v44);
}
