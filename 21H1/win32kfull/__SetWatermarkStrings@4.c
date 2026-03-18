/*
 * XREFs of __SetWatermarkStrings@4 @ 0xEB0F6
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     ?RtlStringCchCopyNW@@YGJPAGIPBGI@Z @ 0xAC102 (-RtlStringCchCopyNW@@YGJPAGIPBGI@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall _SetWatermarkStrings(ULONG a1)
{
  int v1; // edi
  int v2; // ebx
  ULONG v3; // ecx
  int v4; // edx
  WCHAR *v5; // edi
  int v6; // edi
  unsigned int DeviceRoutine_low; // ecx
  unsigned int v8; // eax
  const unsigned __int16 *v10; // [esp+0h] [ebp-40h]
  unsigned int v11; // [esp+4h] [ebp-3Ch]
  UNICODE_STRING SourceString; // [esp+10h] [ebp-30h] BYREF
  int v13; // [esp+1Ch] [ebp-24h]
  int v14; // [esp+20h] [ebp-20h]
  int v15; // [esp+24h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  *(_DWORD *)&SourceString.Length = 0;
  SourceString.Buffer = 0;
  if ( PsGetCurrentProcessId() != (HANDLE)_gpidLogon )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v1 = 0;
  v2 = 1;
  while ( 1 )
  {
    v14 = v1;
    if ( v1 )
      break;
    v15 = 0;
    v3 = a1;
    if ( a1 >= _MmUserProbeAddress )
      v3 = _MmUserProbeAddress;
    v4 = *(_DWORD *)v3;
    v13 = v4;
    *(_DWORD *)&SourceString.Length = v4;
    SourceString.Buffer = *(PWSTR *)(v3 + 4);
    v5 = (PWSTR)((char *)SourceString.Buffer + (unsigned __int16)v4 + 2);
    if ( v5 <= SourceString.Buffer || (unsigned int)v5 >= _MmUserProbeAddress )
      goto LABEL_15;
    if ( (unsigned __int16)v4 > HIWORD(v13) )
    {
      if ( (v4 & 1) != 0 )
LABEL_14:
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
LABEL_15:
      ExRaiseAccessViolation();
    }
    if ( (v4 & 1) != 0 )
      goto LABEL_14;
    v6 = v14;
    WPP_MAIN_CB.Queue.Wcb.DeviceContext = (char *)&gWatermarkStrings + 256 * v14;
    LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = 0;
    *(_WORD *)((char *)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v15 + 2) = 256;
    RtlCopyUnicodeString((PUNICODE_STRING)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, &SourceString);
    DeviceRoutine_low = LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine);
    if ( LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) >= (unsigned int)*(unsigned __int16 *)((char *)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                                                                          + v15
                                                                                          + 2)
                                                      - 2 )
      DeviceRoutine_low = *(unsigned __int16 *)((char *)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v15 + 2) - 2;
    (*(_WORD **)((char *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext + v15))[DeviceRoutine_low >> 1] = 0;
    v1 = v6 + 1;
  }
  ms_exc.registration.TryLevel = -2;
  if ( *(_DWORD *)(_gpsi + 1764) )
  {
    v8 = 126;
    if ( LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) <= 0x7Eu )
      v8 = LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine);
    gSafeModeStrLen = (struct tagRECT *)(v8 >> 1);
    if ( RtlStringCchCopyNW((size_t)WPP_MAIN_CB.Queue.Wcb.DeviceContext, (size_t *)(v8 >> 1), v10, v11) < 0 )
      return 0;
  }
  return v2;
}
