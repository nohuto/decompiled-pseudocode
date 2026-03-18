/*
 * XREFs of _anonymous_namespace_::SetForegroundPriorityProcess @ 0x1C00C3614
 * Callers:
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x1C00C3490 (_anonymous_namespace_--RequestPriorityUpdate.c)
 *     ?UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00C3514 (-UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::SetProcessPriorityByClass @ 0x1C00C3738 (_anonymous_namespace_--SetProcessPriorityByClass.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::SetForegroundPriorityProcess(
        struct _KPROCESS **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  struct _KPROCESS *v6; // rbp
  char v8; // si
  __int64 v9; // rdx
  HANDLE ProcessId; // rax
  char ProcessPriorityClass; // al
  __int64 v12; // rdx

  result = *(unsigned int *)(a2 + 488);
  v5 = a3;
  v6 = *a1;
  if ( (result & 0xC) == 0 && (result & 1) == 0 && ((result & 0x40000) == 0 || (_DWORD)a3 == 1) )
  {
    v8 = 0;
    if ( (*((_DWORD *)a1 + 3) & 0x400000) != 0 )
    {
      v5 = 0;
      ProcessPriorityClass = PsGetProcessPriorityClass(*a1);
      LOBYTE(v12) = 1;
      v8 = ProcessPriorityClass;
      result = PsSetProcessPriorityClass(v6, v12);
    }
    if ( v5 )
    {
      if ( v5 - 1 > 1 )
        return result;
    }
    else if ( grpdeskIODefault == grpdeskRitInput && gppiScreenSaver && (struct _KPROCESS **)gppiScreenSaver != a1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(gppiScreenSaver, v5, a3, a4);
    }
    anonymous_namespace_::SetProcessPriorityByClass(a1, v5);
    if ( v8 )
    {
      LOBYTE(v9) = v8;
      PsSetProcessPriorityClass(v6, v9);
    }
    if ( v5 )
    {
      if ( (unsigned int)RtlGetActiveConsoleId() == gSessionId )
      {
        ProcessId = PsGetProcessId(v6);
        RtlSetConsoleSessionForegroundProcessId(ProcessId);
      }
    }
    return GreDxgkSetProcessStatus(a1, 1LL);
  }
  return result;
}
