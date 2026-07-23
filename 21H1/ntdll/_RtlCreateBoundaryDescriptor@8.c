/*
 * XREFs of _RtlCreateBoundaryDescriptor@8 @ 0x4B2AA1C0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

POBJECT_BOUNDARY_DESCRIPTOR __cdecl RtlCreateBoundaryDescriptor(PUNICODE_STRING Name, ULONG Flags)
{
  int Length; // eax
  unsigned int v3; // edi
  _OBJECT_BOUNDARY_DESCRIPTOR *Heap; // eax
  _OBJECT_BOUNDARY_DESCRIPTOR *v5; // esi
  int v6; // eax
  SIZE_T v8; // [esp-4h] [ebp-10h]
  size_t v9; // [esp-4h] [ebp-10h]

  if ( (Flags & 0xFFFFFFFE) != 0 )
    return 0;
  Length = Name->Length;
  if ( !(_WORD)Length )
    return 0;
  if ( (Length & 1) != 0 )
    return 0;
  v3 = (Length + 31) & 0xFFFFFFF8;
  LODWORD(v8) = v3;
  Heap = (_OBJECT_BOUNDARY_DESCRIPTOR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v8);
  v5 = Heap;
  if ( !Heap )
    return 0;
  Heap->TotalSize = v3;
  Heap->Items = 1;
  Heap->Version = 1;
  if ( (Flags & 1) != 0 )
    Heap->Flags = 1;
  v6 = Name->Length;
  v5[1].Version = 1;
  v5[1].Items = v6 + 8;
  LODWORD(v9) = Name->Length;
  memcpy(&v5[1].TotalSize, Name->Buffer, v9);
  return v5;
}
