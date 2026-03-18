/*
 * XREFs of ObpCloseDirectoryObject @ 0x1406D52D0
 * Callers:
 *     <none>
 * Callees:
 *     ObpRemoveNamespaceFromTable @ 0x1406D52FC (ObpRemoveNamespaceFromTable.c)
 */

__int64 __fastcall ObpCloseDirectoryObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a4 == 1 )
  {
    result = *(unsigned int *)(a2 + 336);
    if ( (result & 1) != 0 )
      return ObpRemoveNamespaceFromTable((PADAPTER_OBJECT)a2);
  }
  return result;
}
