/*
 * XREFs of NtQueryDirectoryFileEx @ 0x14068CE60
 * Callers:
 *     NtQueryDirectoryFile @ 0x1406F2A60 (NtQueryDirectoryFile.c)
 * Callees:
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     BuildQueryDirectoryIrp @ 0x14068CF20 (BuildQueryDirectoryIrp.c)
 */

__int64 __fastcall NtQueryDirectoryFileEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  _DWORD *v7; // r9

  result = BuildQueryDirectoryIrp(a1, a2, a3, a4, a5, a6);
  if ( !(_DWORD)result )
  {
    LOBYTE(v7) = 1;
    return IopSynchronousServiceTail(0LL, 0LL, 0LL, v7, 0, 0, 2u);
  }
  return result;
}
