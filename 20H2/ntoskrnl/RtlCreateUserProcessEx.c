/*
 * XREFs of RtlCreateUserProcessEx @ 0x140A4A698
 * Callers:
 *     StartFirstUserProcess @ 0x140A4A4B8 (StartFirstUserProcess.c)
 * Callees:
 *     RtlpCreateUserProcess @ 0x140A4A718 (RtlpCreateUserProcess.c)
 */

NTSTATUS __cdecl RtlCreateUserProcessEx(
        PUNICODE_STRING NtImagePathName,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters,
        BOOLEAN InheritHandles,
        PRTL_USER_PROCESS_EXTENDED_PARAMETERS ProcessExtendedParameters,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  unsigned int Flags; // edx
  unsigned int v7; // r9d
  unsigned int v8; // edx
  __int64 v9; // r8
  wchar_t *Buffer; // rax
  wchar_t *v12; // rax
  wchar_t *v13; // rax
  wchar_t *v14; // rax
  wchar_t *v15; // rax
  wchar_t *v16; // rax
  wchar_t *v17; // rax
  wchar_t *v18; // rax
  wchar_t *v19; // rax

  if ( !NtImagePathName || !ProcessParameters )
    return -1073741811;
  Flags = ProcessParameters->Flags;
  if ( (Flags & 1) == 0 )
  {
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    if ( Buffer )
      ProcessParameters->CurrentDirectory.DosPath.Buffer = (wchar_t *)((char *)Buffer + (_QWORD)ProcessParameters);
    v12 = ProcessParameters->DllPath.Buffer;
    if ( v12 )
      ProcessParameters->DllPath.Buffer = (wchar_t *)((char *)v12 + (_QWORD)ProcessParameters);
    v13 = ProcessParameters->ImagePathName.Buffer;
    if ( v13 )
      ProcessParameters->ImagePathName.Buffer = (wchar_t *)((char *)v13 + (_QWORD)ProcessParameters);
    v14 = ProcessParameters->CommandLine.Buffer;
    if ( v14 )
      ProcessParameters->CommandLine.Buffer = (wchar_t *)((char *)v14 + (_QWORD)ProcessParameters);
    v15 = ProcessParameters->WindowTitle.Buffer;
    if ( v15 )
      ProcessParameters->WindowTitle.Buffer = (wchar_t *)((char *)v15 + (_QWORD)ProcessParameters);
    v16 = ProcessParameters->DesktopInfo.Buffer;
    if ( v16 )
      ProcessParameters->DesktopInfo.Buffer = (wchar_t *)((char *)v16 + (_QWORD)ProcessParameters);
    v17 = ProcessParameters->ShellInfo.Buffer;
    if ( v17 )
      ProcessParameters->ShellInfo.Buffer = (wchar_t *)((char *)v17 + (_QWORD)ProcessParameters);
    v18 = ProcessParameters->RuntimeData.Buffer;
    if ( v18 )
      ProcessParameters->RuntimeData.Buffer = (wchar_t *)((char *)v18 + (_QWORD)ProcessParameters);
    v19 = ProcessParameters->RedirectionDllName.Buffer;
    if ( v19 )
      ProcessParameters->RedirectionDllName.Buffer = (wchar_t *)((char *)v19 + (_QWORD)ProcessParameters);
    ProcessParameters->Flags = Flags | 1;
  }
  v7 = ProcessParameters->Flags;
  ProcessParameters->CurrentDirectory.Handle = 0LL;
  v8 = (v7 >> 11) & 0x80 | 0x40;
  if ( (v7 & 0x400000) == 0 )
    v8 = (v7 >> 11) & 0x80;
  v9 = v8;
  LODWORD(v9) = v8 | 0x40000;
  if ( (v7 & 0x800000) == 0 )
    v9 = v8;
  return RtlpCreateUserProcess(NtImagePathName, ProcessParameters, v9);
}
