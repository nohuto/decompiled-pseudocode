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

int __fastcall RtlpInsertAssemblyStorageMapEntry(_DWORD *a1, unsigned int a2, const void **a3, _DWORD *a4)
{
  signed __int32 v6; // edi
  int v7; // edx
  const void *v8; // ecx
  int Heap; // eax
  int v10; // esi
  int v12; // edx
  int v14; // [esp+10h] [ebp-8h]
  const void *v15; // [esp+14h] [ebp-4h]

  v6 = 0;
  if ( !a1 || !a2 || a2 > a1[1] )
  {
    v8 = a4;
    goto LABEL_19;
  }
  if ( !a3 )
  {
    v8 = a4;
    goto LABEL_22;
  }
  v7 = *(unsigned __int16 *)a3;
  v8 = a4;
  if ( (unsigned __int16)v7 < 2u || !a3[1] || !a4 )
  {
LABEL_19:
    if ( a3 )
    {
      v15 = a3[1];
LABEL_23:
      if ( a3 )
        v14 = *(unsigned __int16 *)a3;
      else
        v14 = 0;
      if ( a1 )
        v12 = a1[1];
      else
        v12 = 0;
      DbgPrintEx(
        51,
        0,
        "SXS: %s() bad parameters\n"
        "SXS:  Map                    : %p\n"
        "SXS:  AssemblyRosterIndex    : 0x%lx\n"
        "SXS:  Map->AssemblyCount     : 0x%lx\n"
        "SXS:  StorageLocation        : %p\n"
        "SXS:  StorageLocation->Length: 0x%x\n"
        "SXS:  StorageLocation->Buffer: %p\n"
        "SXS:  OpenDirectoryHandle    : %p\n",
        "RtlpInsertAssemblyStorageMapEntry",
        a1,
        a2,
        v12,
        a3,
        v14,
        v15,
        v8);
      v10 = -1073741811;
      goto LABEL_13;
    }
LABEL_22:
    v15 = 0;
    goto LABEL_23;
  }
  if ( (unsigned int)(v7 + 2) > 0xFFFE )
    return -1073741562;
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v7 + 18);
  v6 = Heap;
  if ( !Heap )
    return -1073741801;
  *(_DWORD *)Heap = 0;
  *(_WORD *)(Heap + 4) = *(_WORD *)a3;
  *(_DWORD *)(Heap + 8) = Heap + 16;
  *(_WORD *)(Heap + 6) = *(_WORD *)a3 + 2;
  memcpy((void *)(Heap + 16), a3[1], *(unsigned __int16 *)a3);
  *(_WORD *)(*(_DWORD *)(v6 + 8) + 2 * (*(unsigned __int16 *)(v6 + 4) >> 1)) = 0;
  *(_DWORD *)(v6 + 12) = *a4;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1[2] + 4 * a2), v6, 0) )
  {
    v6 = 0;
    *a4 = 0;
  }
  v10 = 0;
LABEL_13:
  if ( v6 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v6);
  return v10;
}
