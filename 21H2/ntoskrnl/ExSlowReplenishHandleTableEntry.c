/*
 * XREFs of ExSlowReplenishHandleTableEntry @ 0x1402AC270
 * Callers:
 *     ObReferenceFileObjectForWrite @ 0x14071E230 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     PspReferenceCidTableEntry @ 0x1407A8900 (PspReferenceCidTableEntry.c)
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
