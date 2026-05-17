/*
 * XREFs of _RtlpInitializeAssemblyStorageMap@12 @ 0x4B2E33A0
 * Callers:
 *     _RtlpGetActivationContextDataStorageMapAndRosterHeader@24 @ 0x4B2E262C (_RtlpGetActivationContextDataStorageMapAndRosterHeader@24.c)
 *     _RtlCreateActivationContext@24 @ 0x4B2E3290 (_RtlCreateActivationContext@24.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

int __fastcall RtlpInitializeAssemblyStorageMap(int *a1, int a2, void *a3)
{
  void *Heap; // edx
  int result; // eax
  int v7; // [esp+10h] [ebp-4h]

  v7 = 0;
  if ( !a1 || !a2 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() bad parameters:\nSXS:    Map        : 0x%p\nSXS:    EntryCount : 0x%lx\n",
      "RtlpInitializeAssemblyStorageMap",
      a1,
      a2);
    return -1073741811;
  }
  Heap = a3;
  if ( !a3 )
  {
    result = RtlULongLongToUInt(4 * a2, (unsigned __int64)(unsigned int)a2 >> 30);
    if ( result < 0 )
      return result;
    Heap = (void *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 0);
    if ( !Heap )
      return -1073741801;
    v7 = 1;
  }
  if ( a2 )
    memset(Heap, 0, 4 * a2);
  *a1 = v7;
  result = 0;
  a1[1] = a2;
  a1[2] = (int)Heap;
  return result;
}
