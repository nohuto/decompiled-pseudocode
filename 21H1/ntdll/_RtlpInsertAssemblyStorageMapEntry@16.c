/*
 * XREFs of _RtlpInsertAssemblyStorageMapEntry@16 @ 0x4B2E2D8C
 * Callers:
 *     _RtlpResolveAssemblyStorageMapEntry@20 @ 0x4B2E28E9 (_RtlpResolveAssemblyStorageMapEntry@20.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

int __fastcall RtlpInsertAssemblyStorageMapEntry(int a1, unsigned int a2, const void **a3, _DWORD *a4)
{
  signed __int32 v5; // edi
  int v6; // edx
  _WORD *Heap; // eax
  int v8; // esi
  SIZE_T v10; // [esp-4h] [ebp-1Ch]
  size_t v11; // [esp-4h] [ebp-1Ch]

  v5 = 0;
  if ( a1
    && a2
    && a2 <= *(_DWORD *)(a1 + 4)
    && a3
    && (v6 = *(unsigned __int16 *)a3, (unsigned __int16)v6 >= 2u)
    && a3[1]
    && a4 )
  {
    if ( (unsigned int)(v6 + 2) > 0xFFFE )
      return -1073741562;
    LODWORD(v10) = v6 + 18;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    v5 = (signed __int32)Heap;
    if ( !Heap )
      return -1073741801;
    *(_DWORD *)Heap = 0;
    Heap[2] = *(_WORD *)a3;
    *((_DWORD *)Heap + 2) = Heap + 8;
    Heap[3] = *(_WORD *)a3 + 2;
    LODWORD(v11) = *(unsigned __int16 *)a3;
    memcpy(Heap + 8, a3[1], v11);
    *(_WORD *)(*(_DWORD *)(v5 + 8) + 2 * (*(unsigned __int16 *)(v5 + 4) >> 1)) = 0;
    *(_DWORD *)(v5 + 12) = *a4;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_DWORD *)(a1 + 8) + 4 * a2), v5, 0) )
    {
      v5 = 0;
      *a4 = 0;
    }
    v8 = 0;
  }
  else
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() bad parameters\n"
           "SXS:  Map                    : %p\n"
           "SXS:  AssemblyRosterIndex    : 0x%lx\n"
           "SXS:  Map->AssemblyCount     : 0x%lx\n"
           "SXS:  StorageLocation        : %p\n"
           "SXS:  StorageLocation->Length: 0x%x\n"
           "SXS:  StorageLocation->Buffer: %p\n"
           "SXS:  OpenDirectoryHandle    : %p\n",
      (int)"RtlpInsertAssemblyStorageMapEntry");
    v8 = -1073741811;
  }
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v5);
  return v8;
}
