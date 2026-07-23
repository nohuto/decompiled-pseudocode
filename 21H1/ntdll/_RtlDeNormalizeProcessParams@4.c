/*
 * XREFs of _RtlDeNormalizeProcessParams@4 @ 0x4B3359D0
 * Callers:
 *     _RtlCreateProcessParametersInternal@48 @ 0x4B2A8307 (_RtlCreateProcessParametersInternal@48.c)
 * Callees:
 *     <none>
 */

PRTL_USER_PROCESS_PARAMETERS __cdecl RtlDeNormalizeProcessParams(PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
{
  PRTL_USER_PROCESS_PARAMETERS result; // eax
  unsigned int Flags; // edx
  wchar_t *Buffer; // ecx
  wchar_t *v4; // ecx
  wchar_t *v5; // ecx
  wchar_t *v6; // ecx
  wchar_t *v7; // ecx
  wchar_t *v8; // ecx
  wchar_t *v9; // ecx
  wchar_t *v10; // ecx
  wchar_t *v11; // ecx

  result = ProcessParameters;
  if ( ProcessParameters )
  {
    Flags = ProcessParameters->Flags;
    if ( (Flags & 1) != 0 )
    {
      Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
      if ( Buffer )
        ProcessParameters->CurrentDirectory.DosPath.Buffer = (wchar_t *)((char *)Buffer - (char *)ProcessParameters);
      v4 = ProcessParameters->DllPath.Buffer;
      if ( v4 )
        ProcessParameters->DllPath.Buffer = (wchar_t *)((char *)v4 - (char *)ProcessParameters);
      v5 = ProcessParameters->ImagePathName.Buffer;
      if ( v5 )
        ProcessParameters->ImagePathName.Buffer = (wchar_t *)((char *)v5 - (char *)ProcessParameters);
      v6 = ProcessParameters->CommandLine.Buffer;
      if ( v6 )
        ProcessParameters->CommandLine.Buffer = (wchar_t *)((char *)v6 - (char *)ProcessParameters);
      v7 = ProcessParameters->WindowTitle.Buffer;
      if ( v7 )
        ProcessParameters->WindowTitle.Buffer = (wchar_t *)((char *)v7 - (char *)ProcessParameters);
      v8 = ProcessParameters->DesktopInfo.Buffer;
      if ( v8 )
        ProcessParameters->DesktopInfo.Buffer = (wchar_t *)((char *)v8 - (char *)ProcessParameters);
      v9 = ProcessParameters->ShellInfo.Buffer;
      if ( v9 )
        ProcessParameters->ShellInfo.Buffer = (wchar_t *)((char *)v9 - (char *)ProcessParameters);
      v10 = ProcessParameters->RuntimeData.Buffer;
      if ( v10 )
        ProcessParameters->RuntimeData.Buffer = (wchar_t *)((char *)v10 - (char *)ProcessParameters);
      v11 = ProcessParameters->RedirectionDllName.Buffer;
      if ( v11 )
        ProcessParameters->RedirectionDllName.Buffer = (wchar_t *)((char *)v11 - (char *)ProcessParameters);
      ProcessParameters->Flags = Flags & 0xFFFFFFFE;
    }
  }
  return result;
}
