/*
 * XREFs of RtlpOpenThreadToken @ 0x1406DD6CC
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406DD35C (RtlAcquirePrivilege.c)
 * Callees:
 *     ZwOpenThreadTokenEx @ 0x1403F2910 (ZwOpenThreadTokenEx.c)
 */

int __fastcall RtlpOpenThreadToken(ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  int result; // eax

  result = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, DesiredAccess, 1u, 0x200u, TokenHandle);
  if ( result < 0 )
    return ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, DesiredAccess, 0, 0x200u, TokenHandle);
  return result;
}
