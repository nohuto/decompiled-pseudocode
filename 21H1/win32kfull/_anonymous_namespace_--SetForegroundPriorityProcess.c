/*
 * XREFs of _anonymous_namespace_::SetForegroundPriorityProcess @ 0x18D4E
 * Callers:
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x18D26 (_anonymous_namespace_--RequestPriorityUpdate.c)
 *     ?UpdateProcessPriorityForSpinning@PriorityBoost@@YGXPAUtagTHREADINFO@@@Z @ 0xC944C (-UpdateProcessPriorityForSpinning@PriorityBoost@@YGXPAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::SetProcessPriorityByClass @ 0x18E54 (_anonymous_namespace_--SetProcessPriorityByClass.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __fastcall anonymous_namespace_::SetForegroundPriorityProcess(struct _KPROCESS **a1, int a2, int a3)
{
  int result; // eax
  struct _KPROCESS *v5; // ecx
  int v6; // esi
  char ProcessPriorityClass; // bl
  int ProcessId; // eax
  struct _KPROCESS *Process; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  result = *(_DWORD *)(a2 + 264);
  v5 = *a1;
  Process = v5;
  if ( (result & 0xD) == 0 )
  {
    v6 = a3;
    if ( (((unsigned int)&loc_3FFFD + 3) & result) == 0 || a3 == 1 )
    {
      ProcessPriorityClass = 0;
      LOBYTE(v10) = 0;
      if ( ((unsigned int)a1[2] & 0x400000) != 0 )
      {
        v6 = 0;
        ProcessPriorityClass = PsGetProcessPriorityClass(v5);
        LOBYTE(v10) = ProcessPriorityClass;
        result = PsSetProcessPriorityClass(Process, 1);
      }
      if ( v6 )
      {
        if ( v6 != 1 && v6 != 2 )
          return result;
      }
      else if ( _grpdeskIODefault == _grpdeskRitInput && _gppiScreenSaver && (struct _KPROCESS **)_gppiScreenSaver != a1 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      }
      anonymous_namespace_::SetProcessPriorityByClass(a1, v6);
      if ( ProcessPriorityClass )
        PsSetProcessPriorityClass(Process, v10);
      if ( v6 && RtlGetActiveConsoleId() == _gSessionId )
      {
        ProcessId = (int)PsGetProcessId(Process);
        RtlSetConsoleSessionForegroundProcessId(ProcessId, ProcessId >> 31);
      }
      if ( v6 == 1 || (LOBYTE(v10) = 0, v6 == 2) )
        LOBYTE(v10) = 1;
      return GreDxgkSetProcessStatus(a1, 1, v10);
    }
  }
  return result;
}
