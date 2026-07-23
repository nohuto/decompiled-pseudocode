/*
 * XREFs of _RtlCheckSandboxedToken@8 @ 0x4B335B50
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 */

NTSTATUS __cdecl RtlCheckSandboxedToken(HANDLE TokenHandle, PBOOLEAN IsSandboxed)
{
  NTSTATUS result; // eax
  ULONG ReturnLength; // [esp+4h] [ebp-8h] BYREF
  int TokenInformation; // [esp+8h] [ebp-4h] BYREF

  *IsSandboxed = 0;
  result = ZwQueryInformationToken(TokenHandle, 0x2Fu, &TokenInformation, 4u, &ReturnLength);
  if ( result >= 0 )
  {
    if ( TokenInformation )
      *IsSandboxed = 1;
  }
  return result;
}
