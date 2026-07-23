/*
 * XREFs of _LdrpLogRelativePathWithAlteredSearchError@4 @ 0x4B2A81DB
 * Callers:
 *     _LdrpGetDllPath@28 @ 0x4B2B27D0 (_LdrpGetDllPath@28.c)
 * Callees:
 *     _CentennialIssueTracker_EnsureRegistration@0 @ 0x4B2A8230 (_CentennialIssueTracker_EnsureRegistration@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __tlgCreate1Sz_wchar_t@8 @ 0x4B330F0A (__tlgCreate1Sz_wchar_t@8.c)
 *     __tlgWriteTransfer_EtwEventWriteTransfer@24 @ 0x4B330F4C (__tlgWriteTransfer_EtwEventWriteTransfer@24.c)
 */

int __thiscall LdrpLogRelativePathWithAlteredSearchError(void *this)
{
  struct _PEB *v1; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // eax
  int *Buffer; // esi
  int result; // eax
  int v6; // ecx
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-48h] BYREF
  _BYTE v8[16]; // [esp+28h] [ebp-28h] BYREF
  _BYTE v9[20]; // [esp+38h] [ebp-18h] BYREF

  v1 = NtCurrentPeb();
  if ( v1 && (ProcessParameters = v1->ProcessParameters) != 0 )
    Buffer = (int *)ProcessParameters->ImagePathName.Buffer;
  else
    Buffer = &dword_4B285DEC;
  result = CentennialIssueTracker_EnsureRegistration();
  if ( result )
  {
    if ( (unsigned int)dword_4B3A3340 > 5 )
    {
      _tlgCreate1Sz_wchar_t(v8, this);
      _tlgCreate1Sz_wchar_t(v9, Buffer);
      return _tlgWriteTransfer_EtwEventWriteTransfer(v6, v6, 4u, &UserData);
    }
  }
  return result;
}
