/*
 * XREFs of _RtlQueryTokenHostIdAsUlong64@8 @ 0x4B369B10
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQuerySecurityAttributesToken@24 @ 0x4B2F3F20 (_ZwQuerySecurityAttributesToken@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __cdecl RtlQueryTokenHostIdAsUlong64(HANDLE TokenHandle, PULONG64 HostId)
{
  NTSTATUS result; // eax
  ULONG ReturnLength; // [esp+4h] [ebp-2FCh] BYREF
  _BYTE Buffer[4]; // [esp+8h] [ebp-2F8h] BYREF
  int v5; // [esp+Ch] [ebp-2F4h]
  int v6; // [esp+10h] [ebp-2F0h]

  result = ZwQuerySecurityAttributesToken(
             TokenHandle,
             (PUNICODE_STRING)&stru_4B281DC8,
             1u,
             Buffer,
             0x2F0u,
             &ReturnLength);
  if ( result >= 0 )
  {
    if ( v5 )
    {
      *HostId = *(_QWORD *)*(_DWORD *)(v6 + 20);
      return 0;
    }
    else
    {
      return -1073741275;
    }
  }
  return result;
}
