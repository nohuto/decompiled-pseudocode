/*
 * XREFs of ExSlowReplenishHandleTableEntry @ 0x140353550
 * Callers:
 *     ObReferenceFileObjectForWrite @ 0x140645330 (ObReferenceFileObjectForWrite.c)
 *     PspReferenceCidTableEntry @ 0x14068F6C0 (PspReferenceCidTableEntry.c)
 *     ObWaitForMultipleObjects @ 0x1406EC520 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExSlowReplenishHandleTableEntry(unsigned __int64 *a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  v1 = *a1;
  if ( (*a1 & 0x1FFFE) >= 0xFFFE )
    return 0LL;
  result = 0x7FFF - (unsigned int)(unsigned __int16)(v1 >> 1);
  *a1 = v1 & 0xFFFFFFFFFFFE0001uLL | 0xFFFE;
  return result;
}
