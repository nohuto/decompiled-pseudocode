/*
 * XREFs of _RtlCreateAtomTableEx@12 @ 0x4B2E0014
 * Callers:
 *     _RtlCreateAtomTable@8 @ 0x4B2E0000 (_RtlCreateAtomTable@8.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _RtlInitializeHandleTable@12 @ 0x4B2EB410 (_RtlInitializeHandleTable@12.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __userpurge RtlCreateAtomTableEx@<eax>(unsigned int a1@<ecx>, unsigned int a2@<esi>, _DWORD *a3)
{
  signed int v3; // edi
  int v4; // ebx
  int result; // eax
  char *Heap; // eax
  char *v7; // esi
  size_t v8; // [esp-8h] [ebp-18h]
  unsigned int v9; // [esp+8h] [ebp-8h]
  SIZE_T Size; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0;
  v4 = a1;
  if ( *a3 )
    return v3;
  if ( a1 <= 1 )
    v4 = 37;
  result = RtlULongLongToUInt(16 * (v4 - 1), (unsigned __int64)(unsigned int)(v4 - 1) >> 28);
  if ( result >= 0 )
  {
    v3 = RtlULongPtrAdd(v9, 52, (int *)&Size);
    if ( v3 >= 0 )
    {
      Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, __PAIR64__(a2, Size));
      v7 = Heap;
      if ( Heap )
      {
        LODWORD(v8) = Size;
        memset(Heap, 0, v8);
        *((_DWORD *)v7 + 11) = v4;
        RtlInitializeHandleTable(0x3FFFu, 0x80000008, (PRTL_HANDLE_TABLE)(v7 + 12));
        *((_DWORD *)v7 + 2) = 0;
        *(_DWORD *)v7 = 1836020801;
        *((_DWORD *)v7 + 1) = 1;
        *a3 = v7;
      }
      else
      {
        return -1073741801;
      }
    }
    return v3;
  }
  return result;
}
