/*
 * XREFs of _SetAppCompatFlags@4 @ 0x7C302
 * Callers:
 *     <none>
 * Callees:
 *     _HasImmersiveAppRight@4 @ 0x7C7B4 (_HasImmersiveAppRight@4.c)
 *     _SetAppImeCompatFlags@12 @ 0x7C7C6 (_SetAppImeCompatFlags@12.c)
 *     _WPP_RECORDER_SF_DS@28 @ 0x7C908 (_WPP_RECORDER_SF_DS@28.c)
 *     _IsCurrentDesktopComposed@0 @ 0x7C988 (_IsCurrentDesktopComposed@0.c)
 *     ___report_rangecheckfailure @ 0xED862 (___report_rangecheckfailure.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?TraceLoggingGDIScaledAppEvent@@YGXXZ @ 0x186798 (-TraceLoggingGDIScaledAppEvent@@YGXXZ.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall SetAppCompatFlags(int a1)
{
  PEPROCESS ThreadProcess; // eax
  int ProcessPeb; // ebx
  _DWORD *v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  unsigned __int16 *v7; // edx
  int *v8; // ecx
  int v9; // edx
  ULONG v10; // edi
  char *v11; // edi
  char *v12; // eax
  char *v13; // ecx
  char *i; // ebx
  int v15; // eax
  size_t v16; // edi
  _WORD *v17; // ecx
  size_t v18; // eax
  int v19; // ecx
  int CurrentProcessWin32Process; // eax
  int v21; // eax
  int v22; // edx
  int v23; // edx
  int v24; // eax
  unsigned int v25; // edi
  int v27; // [esp-14h] [ebp-1D0h]
  int v28; // [esp-10h] [ebp-1CCh]
  int v29; // [esp-Ch] [ebp-1C8h]
  struct _UNICODE_STRING v30; // [esp+18h] [ebp-1A4h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+20h] [ebp-19Ch] BYREF
  int v32; // [esp+28h] [ebp-194h]
  int v33; // [esp+2Ch] [ebp-190h]
  int v34; // [esp+30h] [ebp-18Ch]
  int v35; // [esp+34h] [ebp-188h] BYREF
  ULONG v36; // [esp+38h] [ebp-184h]
  char *v37; // [esp+3Ch] [ebp-180h]
  int v38; // [esp+40h] [ebp-17Ch] BYREF
  unsigned __int16 *v39; // [esp+44h] [ebp-178h]
  ULONG Value; // [esp+48h] [ebp-174h] BYREF
  WCHAR SourceString[80]; // [esp+4Ch] [ebp-170h] BYREF
  WCHAR v42[92]; // [esp+ECh] [ebp-D0h] BYREF
  CPPEH_RECORD ms_exc; // [esp+1A4h] [ebp-18h]

  Value = 0;
  *(_DWORD *)&v30.Length = 0;
  v30.Buffer = 0;
  v35 = 0;
  v36 = 0;
  ms_exc.registration.TryLevel = 0;
  ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
  ProcessPeb = PsGetProcessPeb(ThreadProcess);
  v32 = ProcessPeb;
  v3 = *(_DWORD **)(a1 + 364);
  if ( v3 )
  {
    v4 = v3[87];
    *(_DWORD *)(a1 + 348) = v4;
    v5 = v3[88];
    v6 = v3[89];
    *(_DWORD *)(a1 + 352) = v5;
    *(_DWORD *)(a1 + 356) = v6;
    *(_DWORD *)(*(_DWORD *)(a1 + 260) + 12) = v4;
    *(_DWORD *)(*(_DWORD *)(a1 + 260) + 16) = *(_DWORD *)(a1 + 352);
    ms_exc.registration.TryLevel = -2;
    return 0;
  }
  v7 = *(unsigned __int16 **)(a1 + 268);
  if ( !v7 )
  {
    v8 = (int *)(*(_DWORD *)(ProcessPeb + 16) + 56);
    if ( (unsigned int)v8 >= _MmUserProbeAddress )
      v8 = (int *)_MmUserProbeAddress;
    v9 = *v8;
    v34 = v9;
    v35 = v9;
    v36 = v8[1];
    v10 = (unsigned __int16)v9 + v36 + 2;
    if ( v10 > v36 && v10 < _MmUserProbeAddress )
    {
      if ( (unsigned __int16)v9 > HIWORD(v34) )
      {
        if ( (v9 & 1) == 0 )
          goto LABEL_56;
      }
      else if ( (v9 & 1) == 0 )
      {
        v7 = (unsigned __int16 *)&v35;
        goto LABEL_11;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
LABEL_56:
    ExRaiseAccessViolation();
  }
LABEL_11:
  v11 = (char *)(*((_DWORD *)v7 + 1) + 2 * (*v7 >> 1));
  v37 = v11;
  v12 = v11;
  v39 = (unsigned __int16 *)v11;
  while ( 1 )
  {
    v13 = (char *)*((_DWORD *)v7 + 1);
    if ( v11 == v13 )
      break;
    if ( *(_WORD *)v11 == 46 )
      goto LABEL_15;
    v11 -= 2;
    v37 = v11;
  }
  v11 = v12;
  v37 = v12;
LABEL_15:
  for ( i = v11; ; i -= 2 )
  {
    v39 = (unsigned __int16 *)i;
    if ( i == v13 )
      break;
    v15 = *(unsigned __int16 *)i;
    if ( v15 == 92 || v15 == 58 )
    {
      i += 2;
      v39 = (unsigned __int16 *)i;
      break;
    }
  }
  v16 = (v11 - i) & 0xFFFFFFFE;
  v33 = v16;
  if ( v16 >= 0xA4 )
  {
    v16 = 162;
    v33 = 162;
  }
  memcpy(v42, i, v16);
  v17 = (_WORD *)(*(_DWORD *)(a1 + 232) + 584);
  if ( !*v17 )
  {
    v18 = 30;
    if ( v16 < 0x1E )
      v18 = v16;
    memcpy(v17, i, v18);
    *(_WORD *)(*(_DWORD *)(a1 + 232) + 614) = 0;
  }
  v19 = *(_DWORD *)(v32 + 484);
  *(_DWORD *)(a1 + 352) = *(_DWORD *)(v32 + 480);
  *(_DWORD *)(a1 + 356) = v19;
  if ( (v19 & 0x8000000) != 0 )
  {
    v38 = 0;
    FastGetProfileDwordEx(0, 4, L"ForceDisableGDIScaling", 0, 4, &v38, 0);
    if ( v38 )
    {
      *(_DWORD *)(a1 + 356) &= ~0x8000000u;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      *(_DWORD *)(CurrentProcessWin32Process + 8) &= ~0x20000000u;
    }
    else
    {
      v21 = PsGetCurrentProcessWin32Process();
      *(_DWORD *)(v21 + 8) |= 0x20000000u;
      TraceLoggingGDIScaledAppEvent();
    }
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 260) + 16) = *(_DWORD *)(a1 + 352);
  if ( (*(_DWORD *)(a1 + 352) & 0x2000000) == 0 )
    IsCurrentDesktopComposed();
  if ( HasImmersiveAppRight(*(_DWORD *)(a1 + 232)) )
    **(_DWORD **)(a1 + 260) |= 0x10000000u;
  if ( v22 )
  {
LABEL_39:
    **(_DWORD **)(a1 + 260) |= 0x20000000u;
    goto LABEL_42;
  }
  if ( (*(_DWORD *)(a1 + 356) & 0x8800000) == 0 )
  {
    if ( !HasImmersiveAppRight(*(_DWORD *)(a1 + 232)) )
    {
      if ( IsImmersiveBroker(v23) )
        *(_DWORD *)(*(_DWORD *)(a1 + 260) + 148) |= 0x80u;
      goto LABEL_42;
    }
    goto LABEL_39;
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 260) + 148) |= 0x10u;
LABEL_42:
  if ( (*(_DWORD *)(a1 + 356) & 0x1000000) != 0 )
    *(_DWORD *)(*(_DWORD *)(a1 + 260) + 148) |= 0x20u;
  v24 = *(_DWORD *)(a1 + 352);
  if ( (v24 & 0x10000000) == 0 && *(_WORD *)(a1 + 340) < 0x600u )
  {
    *(_DWORD *)(a1 + 352) = v24 | 0x20000000;
    *(_DWORD *)(*(_DWORD *)(a1 + 260) + 16) |= 0x20000000u;
  }
  ms_exc.registration.TryLevel = -2;
  v25 = v16 & 0xFFFFFFFE;
  if ( v25 >= 0xB4 )
    __report_rangecheckfailure();
  *(WCHAR *)((char *)v42 + v25) = 0;
  if ( FastGetProfileStringW(0, 33, v42, 0, SourceString, 80, 0) )
  {
    *(_DWORD *)&DestinationString.Length = 0;
    DestinationString.Buffer = 0;
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DS(v27, v28, v29, Value, v42);
  ms_exc.registration.TryLevel = 1;
  *(_DWORD *)(*(_DWORD *)(a1 + 260) + 12) = Value;
  ms_exc.registration.TryLevel = -2;
  *(_DWORD *)(a1 + 348) = Value;
  *(WCHAR *)((char *)v42 + v25) = 0;
  RtlInitUnicodeString(&v30, v42);
  return SetAppImeCompatFlags(0);
}
