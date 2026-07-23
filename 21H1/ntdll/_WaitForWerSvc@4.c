/*
 * XREFs of _WaitForWerSvc@4 @ 0x4B33AD78
 * Callers:
 *     _SendMessageToWERService@8 @ 0x4B33AB80 (_SendMessageToWERService@8.c)
 * Callees:
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtOpenEvent@12 @ 0x4B2F2D80 (_NtOpenEvent@12.c)
 */

NTSTATUS __fastcall WaitForWerSvc(int a1)
{
  NTSTATUS result; // eax
  LARGE_INTEGER *p_Timeout; // eax
  NTSTATUS v4; // esi
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-30h] BYREF
  LARGE_INTEGER Timeout; // [esp+20h] [ebp-18h] BYREF
  _WORD v7[2]; // [esp+2Ch] [ebp-Ch] BYREF
  const wchar_t *v8; // [esp+30h] [ebp-8h]
  HANDLE EventHandle; // [esp+34h] [ebp-4h] BYREF

  v7[0] = 70;
  v7[1] = 72;
  v8 = L"\\KernelObjects\\SystemErrorPortReady";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v7;
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  memset(&ObjectAttributes.Attributes, 0, 12);
  result = NtOpenEvent(&EventHandle, 0x100001u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( a1 == -1 )
    {
      p_Timeout = 0;
    }
    else
    {
      Timeout.QuadPart = -10000LL * a1;
      p_Timeout = &Timeout;
    }
    v4 = ZwWaitForSingleObject(EventHandle, 0, p_Timeout);
    NtClose(EventHandle);
    return v4;
  }
  return result;
}
