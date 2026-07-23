/*
 * XREFs of _RtlpInitCurrentDir@4 @ 0x4B2E412F
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlpCreateNewDirectoryReference@12 @ 0x4B2E418B (_RtlpCreateNewDirectoryReference@12.c)
 *     _RtlDetermineDosPathNameType_Ustr@4 @ 0x4B2E42FE (_RtlDetermineDosPathNameType_Ustr@4.c)
 */

int __thiscall RtlpInitCurrentDir(void *this)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // esi
  int v2; // eax
  int v3; // eax
  int result; // eax
  _DWORD *v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // [esp+8h] [ebp-4h] BYREF

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v2 = RtlDetermineDosPathNameType_Ustr(this) - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v6 = v3 - 1;
      if ( !v6 )
        return -1073741811;
      v7 = v6 - 1;
      if ( !v7 )
        return -1073741811;
      v8 = v7 - 1;
      if ( !v8 || (unsigned int)(v8 - 1) >= 2 )
        return -1073741811;
    }
  }
  result = RtlpCreateNewDirectoryReference(&v9);
  if ( result >= 0 )
  {
    v5 = v9;
    RtlpCurDirRef = v9;
    ProcessParameters->CurrentDirectory.Handle = (void *)v9[1];
    ProcessParameters->CurrentDirectory.DosPath.Buffer = (wchar_t *)v5[4];
    ProcessParameters->CurrentDirectory.DosPath.Length = *((_WORD *)v5 + 6);
    return 0;
  }
  return result;
}
