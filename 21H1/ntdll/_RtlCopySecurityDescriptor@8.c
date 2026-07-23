/*
 * XREFs of _RtlCopySecurityDescriptor@8 @ 0x4B335BC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpQuerySecurityDescriptor@36 @ 0x4B2E6B3E (_RtlpQuerySecurityDescriptor@36.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __cdecl RtlCopySecurityDescriptor(
        PSECURITY_DESCRIPTOR InputSecurityDescriptor,
        PSECURITY_DESCRIPTOR *OutputSecurityDescriptor)
{
  unsigned int v2; // esi
  PVOID Heap; // eax
  SIZE_T v5; // [esp-4h] [ebp-28h]
  size_t v6; // [esp-4h] [ebp-28h]
  int v7; // [esp+4h] [ebp-20h] BYREF
  int v8; // [esp+8h] [ebp-1Ch] BYREF
  int v9; // [esp+Ch] [ebp-18h] BYREF
  int v10; // [esp+10h] [ebp-14h] BYREF
  unsigned int v11; // [esp+14h] [ebp-10h] BYREF
  unsigned int v12; // [esp+18h] [ebp-Ch] BYREF
  unsigned int v13; // [esp+1Ch] [ebp-8h] BYREF
  unsigned int v14; // [esp+20h] [ebp-4h] BYREF

  RtlpQuerySecurityDescriptor((int)InputSecurityDescriptor, &v7, &v13, &v8, &v14, &v9, &v12, &v10, &v11);
  v2 = v12 + v13 + v14 + v11 + 20;
  LODWORD(v5) = v2;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v5);
  *OutputSecurityDescriptor = Heap;
  if ( !Heap )
    return -1073741801;
  LODWORD(v6) = v2;
  memcpy(Heap, InputSecurityDescriptor, v6);
  return 0;
}
