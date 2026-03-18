/*
 * XREFs of SetAppCompatFlags @ 0x1C0013670
 * Callers:
 *     <none>
 * Callees:
 *     SetAppImeCompatFlags @ 0x1C0013C34 (SetAppImeCompatFlags.c)
 *     WPP_RECORDER_SF_DS @ 0x1C0013D4C (WPP_RECORDER_SF_DS.c)
 *     IsCurrentDesktopComposed @ 0x1C0013E30 (IsCurrentDesktopComposed.c)
 *     ?TraceLoggingGDIScaledAppEvent@@YAXXZ @ 0x1C0156674 (-TraceLoggingGDIScaledAppEvent@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C015A100 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetAppCompatFlags(_QWORD *a1)
{
  PEPROCESS ThreadProcess; // rax
  __int64 v3; // r9
  __int64 ProcessPeb; // r13
  __int64 v5; // rax
  int v6; // ecx
  unsigned __int16 *v8; // rdx
  int v9; // r14d
  unsigned int *v10; // rdx
  __int64 v11; // rcx
  ULONG64 v12; // r8
  ULONG64 v13; // rdx
  _BYTE **v14; // rax
  _WORD *v15; // rbx
  _WORD *v16; // rax
  _WORD *v17; // rcx
  _WORD *v18; // rsi
  unsigned int v19; // ebx
  __int64 v20; // r15
  _WORD *v21; // rcx
  size_t v22; // r8
  __int64 ThreadTeb; // rax
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rax
  int v32; // edx
  int v33; // r8d
  int v34; // r9d
  ULONG Value; // [rsp+40h] [rbp-1F8h] BYREF
  int v36; // [rsp+44h] [rbp-1F4h] BYREF
  int v37; // [rsp+48h] [rbp-1F0h]
  unsigned int v38; // [rsp+4Ch] [rbp-1ECh]
  _WORD *v39; // [rsp+50h] [rbp-1E8h]
  _WORD *v40; // [rsp+58h] [rbp-1E0h]
  __int128 v41; // [rsp+60h] [rbp-1D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-1C8h] BYREF
  struct _UNICODE_STRING v43; // [rsp+80h] [rbp-1B8h] BYREF
  WCHAR v44[96]; // [rsp+A0h] [rbp-198h] BYREF
  WCHAR SourceString[80]; // [rsp+160h] [rbp-D8h] BYREF

  Value = 0;
  v43 = 0LL;
  v41 = 0LL;
  ThreadProcess = PsGetThreadProcess((PETHREAD)*a1);
  ProcessPeb = PsGetProcessPeb(ThreadProcess);
  v5 = a1[83];
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 640);
    *((_DWORD *)a1 + 160) = v6;
    a1[81] = *(_QWORD *)(v5 + 648);
    *(_DWORD *)(a1[60] + 20LL) = v6;
    *(_DWORD *)(a1[60] + 24LL) = *((_DWORD *)a1 + 162);
    return 0LL;
  }
  v8 = (unsigned __int16 *)a1[62];
  v9 = 1;
  if ( !v8 )
  {
    v10 = (unsigned int *)(*(_QWORD *)(ProcessPeb + 32) + 96LL);
    if ( (unsigned __int64)v10 >= MmUserProbeAddress )
      v10 = (unsigned int *)MmUserProbeAddress;
    v11 = *v10;
    v37 = v11;
    LODWORD(v41) = v11;
    v12 = *((_QWORD *)v10 + 1);
    *((_QWORD *)&v41 + 1) = v12;
    if ( (v12 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = v12 + (unsigned __int16)v11 + 2LL;
    v14 = (_BYTE **)MmUserProbeAddress;
    if ( v13 < MmUserProbeAddress && (unsigned __int16)v11 <= HIWORD(v37) )
    {
      if ( (v11 & 1) != 0 )
        goto LABEL_13;
      if ( v13 > v12 )
      {
LABEL_15:
        v8 = (unsigned __int16 *)&v41;
        goto LABEL_16;
      }
    }
    if ( (v11 & 1) == 0 )
    {
LABEL_14:
      **v14 = 0;
      goto LABEL_15;
    }
LABEL_13:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v13, v12, v3);
    v14 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_14;
  }
LABEL_16:
  v15 = (_WORD *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)*v8 >> 1));
  v40 = v15;
  v16 = v15;
  v39 = v15;
  while ( 1 )
  {
    v17 = (_WORD *)*((_QWORD *)v8 + 1);
    if ( v15 == v17 )
      break;
    if ( *v15 == 46 )
      goto LABEL_20;
    v40 = --v15;
  }
  v15 = v16;
  v40 = v16;
LABEL_20:
  v18 = v15;
  v39 = v15;
  while ( v18 != v17 )
  {
    if ( *v18 == 92 || *v18 == 58 )
    {
      v39 = ++v18;
      break;
    }
    v39 = --v18;
  }
  v19 = 2 * (v15 - v18);
  v38 = v19;
  if ( v19 >= 0xA4 )
    v19 = 162;
  v38 = v19;
  v20 = v19;
  memmove(v44, v18, v19);
  v21 = (_WORD *)(a1[53] + 992LL);
  if ( !*v21 )
  {
    v22 = 30LL;
    if ( v19 < 0x1E )
      v22 = v19;
    memmove(v21, v18, v22);
    *(_WORD *)(a1[53] + 1022LL) = 0;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 12) & 0x80u) == 0 )
  {
    v26 = *(_QWORD *)(ProcessPeb + 720);
  }
  else
  {
    ThreadTeb = PsGetThreadTeb(*a1);
    v24 = ThreadTeb + 0x2000;
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    v25 = *(unsigned int *)(v24 + 48);
    ProbeForRead((volatile void *)(unsigned int)v25, 0x480uLL, 4u);
    v26 = *(_QWORD *)(v25 + 480);
  }
  a1[81] = v26;
  if ( (v26 & 0x800000000000000LL) != 0 )
  {
    v36 = 0;
    FastGetProfileDwordEx(0LL, 4LL, L"ForceDisableGDIScaling", 0LL, 4, &v36, 0LL);
    if ( v36 )
    {
      a1[81] &= ~0x800000000000000uLL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x20000000u;
    }
    else
    {
      v28 = PsGetCurrentProcessWin32Process();
      *(_DWORD *)(v28 + 12) |= 0x20000000u;
      TraceLoggingGDIScaledAppEvent();
    }
  }
  *(_DWORD *)(a1[60] + 24LL) = *((_DWORD *)a1 + 162);
  if ( (a1[81] & 0x2000000) == 0 && (unsigned int)IsCurrentDesktopComposed() )
    v9 = 0;
  if ( (*(_DWORD *)(a1[53] + 820LL) & 0x30) == 0x10 )
    *(_QWORD *)a1[60] |= 0x10000000uLL;
  if ( v9 )
  {
LABEL_48:
    *(_QWORD *)a1[60] |= 0x20000000uLL;
    goto LABEL_51;
  }
  if ( (a1[81] & 0x880000000000000LL) == 0 )
  {
    v29 = a1[53];
    if ( (*(_DWORD *)(v29 + 820) & 0x30) != 0x10 )
    {
      if ( (unsigned int)IsImmersiveBroker(v29) )
        *(_QWORD *)(a1[60] + 224LL) |= 0x80uLL;
      goto LABEL_51;
    }
    goto LABEL_48;
  }
  *(_QWORD *)(a1[60] + 224LL) |= 0x10uLL;
LABEL_51:
  if ( (a1[81] & 0x100000000000000LL) != 0 )
    *(_QWORD *)(a1[60] + 224LL) |= 0x20uLL;
  v30 = *((_DWORD *)a1 + 162);
  if ( (v30 & 0x10000000) == 0 && *((_WORD *)a1 + 316) < 0x600u )
  {
    *((_DWORD *)a1 + 162) = v30 | 0x20000000;
    *(_DWORD *)(a1[60] + 24LL) |= 0x20000000u;
  }
  if ( (v20 & 0xFFFFFFFFFFFFFFFEuLL) >= 0xB4 )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)v44 + (v20 & 0xFFFFFFFFFFFFFFFEuLL)) = 0;
  v31 = PsGetCurrentProcessWin32Process();
  if ( (unsigned int)FastGetProfileStringW(0LL, (*(_DWORD *)(v31 + 12) & 0x80u) != 0 ? 43 : 33, v44, 0LL) )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DS(
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v32,
      v33,
      v34,
      (unsigned int)SourceString,
      Value,
      (__int64)v44);
  *(_DWORD *)(a1[60] + 20LL) = Value;
  *((_DWORD *)a1 + 160) = Value;
  *(WCHAR *)((char *)v44 + (v20 & 0xFFFFFFFFFFFFFFFEuLL)) = 0;
  RtlInitUnicodeString(&v43, v44);
  return SetAppImeCompatFlags(a1, &v43);
}
