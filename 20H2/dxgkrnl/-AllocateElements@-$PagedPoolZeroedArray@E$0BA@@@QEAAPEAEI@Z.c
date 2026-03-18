/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1C026B434
 * Callers:
 *     DxgkCreateHwQueueInternal @ 0x1C026FFB8 (DxgkCreateHwQueueInternal.c)
 *     NtDxgkOutputDuplPresentToHwQueue @ 0x1C0273880 (NtDxgkOutputDuplPresentToHwQueue.c)
 * Callees:
 *     memset @ 0x1C0027400 (memset.c)
 */

PVOID __fastcall PagedPoolZeroedArray<unsigned char,16>::AllocateElements(_DWORD *a1, unsigned int a2)
{
  size_t v4; // rdi
  PVOID result; // rax

  v4 = a2;
  if ( a2 <= 0x10 )
  {
    result = a1 + 2;
  }
  else
  {
    if ( !(0xFFFFFFFFFFFFFFFFuLL / a2) )
      return 0LL;
    result = ExAllocatePoolWithTag(PagedPool, a2, 0x4B677844u);
  }
  *(_QWORD *)a1 = result;
  a1[6] = a2;
  if ( result )
  {
    memset(result, 0, v4);
    return *(PVOID *)a1;
  }
  return result;
}
