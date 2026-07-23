/*
 * XREFs of _TppPoolUpdateNodeRelation@4 @ 0x4B2B36E2
 * Callers:
 *     _TpAllocPoolInternal@8 @ 0x4B2B37A4 (_TpAllocPoolInternal@8.c)
 *     _TppAdjustRunningThreadGoalWithLock@4 @ 0x4B384257 (_TppAdjustRunningThreadGoalWithLock@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwQuerySystemInformationEx@24 @ 0x4B2F3F90 (_ZwQuerySystemInformationEx@24.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __thiscall TppPoolUpdateNodeRelation(void **this)
{
  char *Heap; // ebx
  NTSTATUS v3; // esi
  char *v4; // ecx
  void **v5; // edx
  _DWORD *v6; // edi
  SIZE_T v8; // [esp-4h] [ebp-20h]
  size_t v9; // [esp-4h] [ebp-20h]
  int InputBuffer; // [esp+14h] [ebp-8h] BYREF
  ULONG SystemInformationLength; // [esp+18h] [ebp-4h] BYREF

  InputBuffer = 1;
  LODWORD(v8) = 76 * TppNumberNodes;
  SystemInformationLength = 76 * TppNumberNodes;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, v8);
  if ( !Heap )
    return -1073741801;
  v3 = ZwQuerySystemInformationEx(
         SystemLogicalProcessorAndGroupInformation,
         &InputBuffer,
         4u,
         Heap,
         SystemInformationLength,
         &SystemInformationLength);
  if ( v3 >= 0 )
  {
    LODWORD(v9) = 12 * TppNumberNodes;
    memset(this[8], 0, v9);
    v4 = Heap;
    if ( Heap < &Heap[SystemInformationLength] )
    {
      v5 = this;
      do
      {
        v6 = (char *)v5[8] + 12 * *((_DWORD *)v4 + 2);
        *v6++ = *((_DWORD *)v4 + 8);
        *v6 = *((_DWORD *)v4 + 9);
        v6[1] = *((_DWORD *)v4 + 10);
        v4 += *((_DWORD *)v4 + 1);
      }
      while ( v4 < &Heap[SystemInformationLength] );
    }
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
  return v3;
}
