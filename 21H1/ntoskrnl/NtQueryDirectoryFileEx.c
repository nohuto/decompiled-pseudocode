/*
 * XREFs of NtQueryDirectoryFileEx @ 0x1405E3990
 * Callers:
 *     NtQueryDirectoryFile @ 0x1406D1AA0 (NtQueryDirectoryFile.c)
 * Callees:
 *     BuildQueryDirectoryIrp @ 0x1405E3A50 (BuildQueryDirectoryIrp.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 */

__int64 __fastcall NtQueryDirectoryFileEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  result = BuildQueryDirectoryIrp(a1, a2, a3, a4, a5, a6);
  if ( !(_DWORD)result )
    return IopSynchronousServiceTail(0LL, 0LL, 0, 0, 2);
  return result;
}
