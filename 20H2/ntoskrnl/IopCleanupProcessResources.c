/*
 * XREFs of IopCleanupProcessResources @ 0x1406C2A34
 * Callers:
 *     IopCloseFile @ 0x14060E6B0 (IopCloseFile.c)
 * Callees:
 *     IopCancelIrpsInFileObjectList @ 0x14031892C (IopCancelIrpsInFileObjectList.c)
 *     IopCleanupFileObjectIosbRange @ 0x140893DC8 (IopCleanupFileObjectIosbRange.c)
 */

__int64 __fastcall IopCleanupProcessResources(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = IopCancelIrpsInFileObjectList(a1, a2, 0, 0, 1, 1);
  while ( a3 )
  {
    if ( *(_QWORD *)(a3 + 32) == a2 )
      result = IopCleanupFileObjectIosbRange(a3);
    a3 = *(_QWORD *)(a3 + 40);
  }
  return result;
}
