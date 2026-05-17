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

int __fastcall RtlCreateAtomTableEx(unsigned int a1, int a2, _DWORD *a3)
{
  signed int v3; // edi
  int v4; // ebx
  int result; // eax
  _DWORD *Heap; // eax
  _DWORD *v7; // esi
  unsigned int v8; // [esp+8h] [ebp-8h]
  size_t Size; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0;
  v4 = a1;
  if ( *a3 )
    return v3;
  if ( a1 <= 1 )
    v4 = 37;
  result = RtlULongLongToUInt(16 * (v4 - 1), (unsigned __int64)(unsigned int)(v4 - 1) >> 28);
  if ( result >= 0 )
  {
    v3 = RtlULongPtrAdd(v8, 52, (int *)&Size);
    if ( v3 >= 0 )
    {
      Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, Size);
      v7 = Heap;
      if ( Heap )
      {
        memset(Heap, 0, Size);
        v7[11] = v4;
        RtlInitializeHandleTable(0x3FFF, -2147483640, v7 + 3);
        v7[2] = 0;
        *v7 = 1836020801;
        v7[1] = 1;
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
