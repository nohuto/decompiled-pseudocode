/*
 * XREFs of IopDecrementDeviceObjectRefCount @ 0x14020391C
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140203590 (IopCompleteUnloadOrDelete.c)
 *     IopDeleteFile @ 0x1405FE150 (IopDeleteFile.c)
 *     IoUnregisterFileSystem @ 0x140779330 (IoUnregisterFileSystem.c)
 * Callees:
 *     IopInterlockedDecrementUlong @ 0x14039506C (IopInterlockedDecrementUlong.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CBE58 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  int *v2; // rbx
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = (int *)(BugCheckParameter2 + 4);
  if ( a2 )
    result = IopInterlockedDecrementUlong(0xAuLL);
  else
    result = (unsigned int)--*v2;
  if ( (int)result < 0 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v5 )
    {
      IoAddTriageDumpDataBlock(v5, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *v2);
  }
  return result;
}
