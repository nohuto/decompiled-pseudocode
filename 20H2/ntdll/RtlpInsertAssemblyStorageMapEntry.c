/*
 * XREFs of RtlpInsertAssemblyStorageMapEntry @ 0x180072A74
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180072650 (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     DbgPrintEx @ 0x180050340 (DbgPrintEx.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 */

__int64 __fastcall RtlpInsertAssemblyStorageMapEntry(__int64 a1, unsigned int a2, const void **a3, _QWORD *a4)
{
  __int64 v4; // rbp
  signed __int64 v8; // rdi
  __int64 v9; // r8
  _WORD *Heap; // rax
  unsigned int v11; // ebx
  const void *v13; // rdx
  int v14; // ecx
  int v15; // eax

  v4 = a2;
  v8 = 0LL;
  if ( !a1 || !a2 || a2 > *(_DWORD *)(a1 + 4) )
    goto LABEL_18;
  if ( !a3 )
    goto LABEL_20;
  if ( *(_WORD *)a3 < 2u || !a3[1] || !a4 )
  {
LABEL_18:
    if ( a3 )
    {
      v13 = a3[1];
LABEL_21:
      if ( a3 )
        v14 = *(unsigned __int16 *)a3;
      else
        v14 = 0;
      if ( a1 )
        v15 = *(_DWORD *)(a1 + 4);
      else
        v15 = 0;
      DbgPrintEx(
        0x33u,
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
        (const void *)a1,
        v4,
        v15,
        a3,
        v14,
        v13,
        a4);
      v11 = -1073741811;
      goto LABEL_13;
    }
LABEL_20:
    v13 = 0LL;
    goto LABEL_21;
  }
  v9 = *(unsigned __int16 *)a3;
  if ( (unsigned __int64)(v9 + 2) > 0xFFFE )
    return (unsigned int)-1073741562;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v9 + 34);
  v8 = (signed __int64)Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  *(_DWORD *)Heap = 0;
  Heap[4] = *(_WORD *)a3;
  *((_QWORD *)Heap + 2) = Heap + 16;
  Heap[5] = *(_WORD *)a3 + 2;
  memmove(Heap + 16, a3[1], *(unsigned __int16 *)a3);
  *(_WORD *)(*(_QWORD *)(v8 + 16) + 2 * ((unsigned __int64)*(unsigned __int16 *)(v8 + 8) >> 1)) = 0;
  *(_QWORD *)(v8 + 24) = *a4;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8 * v4), v8, 0LL) )
  {
    v8 = 0LL;
    *a4 = 0LL;
  }
  v11 = 0;
LABEL_13:
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v8);
  return v11;
}
