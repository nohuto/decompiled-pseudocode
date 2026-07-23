/*
 * XREFs of _RtlNormalizeProcessParams@4 @ 0x4B33FCE0
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _RtlCreateUserProcessEx@20 @ 0x4B33FC60 (_RtlCreateUserProcessEx@20.c)
 * Callees:
 *     <none>
 */

PRTL_USER_PROCESS_PARAMETERS __cdecl RtlNormalizeProcessParams(PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
{
  unsigned int Flags; // edx
  wchar_t *Buffer; // eax
  wchar_t *v4; // eax
  wchar_t *v5; // eax
  wchar_t *v6; // eax
  wchar_t *v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax

  if ( !ProcessParameters )
    return 0;
  Flags = ProcessParameters->Flags;
  if ( (Flags & 1) == 0 )
  {
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    if ( Buffer )
      ProcessParameters->CurrentDirectory.DosPath.Buffer = (wchar_t *)((char *)Buffer + (_DWORD)ProcessParameters);
    v4 = ProcessParameters->DllPath.Buffer;
    if ( v4 )
      ProcessParameters->DllPath.Buffer = (wchar_t *)((char *)v4 + (_DWORD)ProcessParameters);
    v5 = ProcessParameters->ImagePathName.Buffer;
    if ( v5 )
      ProcessParameters->ImagePathName.Buffer = (wchar_t *)((char *)v5 + (_DWORD)ProcessParameters);
    v6 = ProcessParameters->CommandLine.Buffer;
    if ( v6 )
      ProcessParameters->CommandLine.Buffer = (wchar_t *)((char *)v6 + (_DWORD)ProcessParameters);
    v7 = ProcessParameters->WindowTitle.Buffer;
    if ( v7 )
      ProcessParameters->WindowTitle.Buffer = (wchar_t *)((char *)v7 + (_DWORD)ProcessParameters);
    v8 = ProcessParameters->DesktopInfo.Buffer;
    if ( v8 )
      ProcessParameters->DesktopInfo.Buffer = (wchar_t *)((char *)v8 + (_DWORD)ProcessParameters);
    v9 = ProcessParameters->ShellInfo.Buffer;
    if ( v9 )
      ProcessParameters->ShellInfo.Buffer = (wchar_t *)((char *)v9 + (_DWORD)ProcessParameters);
    v10 = ProcessParameters->RuntimeData.Buffer;
    if ( v10 )
      ProcessParameters->RuntimeData.Buffer = (wchar_t *)((char *)v10 + (_DWORD)ProcessParameters);
    v11 = ProcessParameters->RedirectionDllName.Buffer;
    if ( v11 )
      ProcessParameters->RedirectionDllName.Buffer = (wchar_t *)((char *)v11 + (_DWORD)ProcessParameters);
    ProcessParameters->Flags = Flags | 1;
  }
  return ProcessParameters;
}
