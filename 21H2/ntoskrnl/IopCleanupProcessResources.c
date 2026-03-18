/*
 * XREFs of IopCleanupProcessResources @ 0x1406C9A28
 * Callers:
 *     IopCloseFile @ 0x14072E9E0 (IopCloseFile.c)
 * Callees:
 *     IopCancelIrpsInFileObjectList @ 0x1402A7370 (IopCancelIrpsInFileObjectList.c)
 *     IopCleanupFileObjectIosbRange @ 0x140933FE8 (IopCleanupFileObjectIosbRange.c)
 */

__int64 __fastcall IopCleanupProcessResources(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = IopCancelIrpsInFileObjectList(a1, a2, 0LL, 0LL, 1, 1);
  while ( a3 )
  {
    if ( *(_QWORD *)(a3 + 32) == a2 )
      result = IopCleanupFileObjectIosbRange(a3);
    a3 = *(_QWORD *)(a3 + 40);
  }
  return result;
}
