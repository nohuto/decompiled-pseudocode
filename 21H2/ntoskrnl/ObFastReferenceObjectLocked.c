/*
 * XREFs of ObFastReferenceObjectLocked @ 0x1405C5DA0
 * Callers:
 *     MiFlushControlArea @ 0x14058B0C8 (MiFlushControlArea.c)
 *     PspReferenceSystemDll @ 0x140757130 (PspReferenceSystemDll.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 */

unsigned __int64 __fastcall ObFastReferenceObjectLocked(_QWORD *a1, ULONG a2)
{
  unsigned __int64 v2; // rbx

  v2 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v2 )
    ObfReferenceObjectWithTag((PVOID)(*a1 & 0xFFFFFFFFFFFFFFF0uLL), a2);
  return v2;
}
