/*
 * XREFs of SepConvertTokenPrivileges @ 0x1402D7590
 * Callers:
 *     SeQueryInformationToken @ 0x1405E9F20 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140606BA0 (NtQueryInformationToken.c)
 * Callees:
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1402D75C0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 */

__int64 __fastcall SepConvertTokenPrivileges(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = SepConvertTokenPrivilegesToLuidAndAttributes(a1, a2 + 1);
  *a2 = result;
  return result;
}
