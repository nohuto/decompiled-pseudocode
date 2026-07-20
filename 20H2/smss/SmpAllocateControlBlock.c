/*
 * XREFs of SmpAllocateControlBlock @ 0x140002960
 * Callers:
 *     SmpStartCsr @ 0x1400020F0 (SmpStartCsr.c)
 * Callees:
 *     SmpInitializeControlBlock @ 0x1400037B0 (SmpInitializeControlBlock.c)
 */

PVOID SmpAllocateControlBlock()
{
  PVOID v0; // rdi
  PVOID Heap; // rbx
  void *v2; // rcx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *SectionHandle; // [rsp+80h] [rbp+10h] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+88h] [rbp+18h] BYREF

  v0 = 0LL;
  SectionHandle = 0LL;
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag + 0x80000, 0x80uLL);
  if ( !Heap )
    goto LABEL_11;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 2;
  MaximumSize.QuadPart = 24LL;
  if ( NtCreateSection(&SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8400000u, 0LL) < 0 )
  {
    SectionHandle = 0LL;
    goto LABEL_7;
  }
  if ( (unsigned int)SmpInitializeControlBlock(Heap, SectionHandle) )
  {
    v0 = Heap;
    Heap = 0LL;
    v2 = 0LL;
    SectionHandle = 0LL;
  }
  else
  {
LABEL_11:
    v2 = SectionHandle;
  }
  if ( v2 )
    NtClose(v2);
LABEL_7:
  if ( Heap )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
  return v0;
}
