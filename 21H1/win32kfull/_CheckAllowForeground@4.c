/*
 * XREFs of _CheckAllowForeground@4 @ 0x1AE3E
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YGJPAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1AC7E (-xxxUserNotifyConsoleApplication@@YGJPAU_CONSOLE_PROCESS_INFO@@@Z.c)
 * Callees:
 *     _CanForceForeground@4 @ 0x1B040 (_CanForceForeground@4.c)
 *     _IsShellProcess@4 @ 0x1B0F4 (_IsShellProcess@4.c)
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 */

int __stdcall CheckAllowForeground(int a1)
{
  void *ProcessInheritedFromUniqueProcessId; // eax
  int v2; // esi
  int v3; // edi
  NTSTATUS v4; // ebx
  int ProcessSessionId; // eax
  _DWORD *ProcessWin32Process; // eax
  _DWORD *v7; // ebx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  PACCESS_TOKEN v11; // eax
  unsigned int *v12; // eax
  bool v13; // zf
  int v14; // eax
  int v16; // eax
  struct _LUID AuthenticationId; // [esp+Ch] [ebp-20h] BYREF
  PVOID Object; // [esp+14h] [ebp-18h]
  void *v19; // [esp+18h] [ebp-14h]
  unsigned int v20; // [esp+1Ch] [ebp-10h]
  int v21; // [esp+20h] [ebp-Ch]
  int v22; // [esp+24h] [ebp-8h]
  PEPROCESS Process; // [esp+28h] [ebp-4h] BYREF

  v22 = 1;
  ProcessInheritedFromUniqueProcessId = (void *)PsGetProcessInheritedFromUniqueProcessId(a1);
  v2 = 0;
  v19 = ProcessInheritedFromUniqueProcessId;
  v21 = -1;
  v3 = 0;
  AuthenticationId.LowPart = 0;
  AuthenticationId.HighPart = 0;
  Process = 0;
  v20 = 0;
  while ( 1 )
  {
    v4 = PsLookupProcessByProcessId(ProcessInheritedFromUniqueProcessId, &Process);
    if ( v4 < 0 )
    {
      ProcessSessionId = v21;
    }
    else
    {
      ProcessSessionId = PsGetProcessSessionId(Process);
      v21 = ProcessSessionId;
    }
    if ( v4 < 0 )
      goto LABEL_37;
    if ( ProcessSessionId != _gSessionId )
    {
      v12 = (unsigned int *)UPDWORDPointer(0x2000);
      if ( CInputGlobals::IsTimeFromLastInputEvent(_gpInputGlobals, *v12) )
        v3 = 1;
      ObfDereferenceObject(Process);
      v13 = v3 == 0;
      goto LABEL_26;
    }
    ProcessWin32Process = (_DWORD *)PsGetProcessWin32Process(Process);
    v7 = ProcessWin32Process;
    if ( !ProcessWin32Process )
      break;
    if ( !v22 && (IsShellProcess(ProcessWin32Process) || (v8 = v7[89]) != 0 && (*(_BYTE *)(v8 + 32) & 4) != 0) )
    {
      ObfDereferenceObject(Process);
      goto LABEL_27;
    }
    v3 = CanForceForeground(v7);
    if ( !v3 )
    {
      v9 = v7[45];
      if ( v9 && (*(_BYTE *)(v9 + 264) & 0x20) != 0 )
      {
        v3 = 1;
      }
      else
      {
        v19 = (void *)PsGetProcessInheritedFromUniqueProcessId(Process);
        if ( v22 )
        {
          v22 = 0;
          v11 = PsReferencePrimaryToken(Process);
          Object = v11;
          if ( v11 )
          {
            if ( SeQueryAuthenticationIdToken(v11, &AuthenticationId) >= 0 )
            {
              if ( AuthenticationId.LowPart == _luidSystem[0] && AuthenticationId.HighPart == _luidSystem[1] )
              {
                v3 = 1;
                v7[2] |= (unsigned int)&loc_80000;
              }
              else
              {
                v3 = 0;
              }
            }
            ObfDereferenceObject(Object);
          }
        }
      }
    }
    ObfDereferenceObject(Process);
    if ( v3 )
      return 1;
    v10 = v20++;
    if ( v10 >= 5 )
      goto LABEL_27;
    ProcessInheritedFromUniqueProcessId = v19;
  }
  ObfDereferenceObject(Process);
LABEL_37:
  v16 = PsGetProcessInheritedFromUniqueProcessId(a1);
  v13 = HasForegroundActivateRight(v16) == 0;
LABEL_26:
  if ( !v13 )
    return 1;
LABEL_27:
  if ( _gptiForeground )
  {
    if ( *(_DWORD *)(_gptiForeground + 340) <= 0x400u )
      v14 = *(_DWORD *)(_gptiForeground + 352);
    else
      LOBYTE(v14) = 0;
    if ( (v14 & 0x40) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(2, 53, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
      return 1;
    }
  }
  return v2;
}
