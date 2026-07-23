/*
 * XREFs of _RtlpComputeMergedAcl@40 @ 0x4B347AD5
 * Callers:
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpComputeMergedAcl2@44 @ 0x4B3478EE (_RtlpComputeMergedAcl2@44.c)
 */

int __fastcall RtlpComputeMergedAcl(
        unsigned __int8 *a1,
        __int16 a2,
        unsigned __int8 *a3,
        __int16 a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        GENERIC_MAPPING *a7,
        int a8,
        PVOID *a9,
        _DWORD *a10)
{
  void *ProcessHeap; // ebx
  int v11; // eax
  __int16 v12; // di
  ACL *Heap; // eax
  int v14; // edi
  SIZE_T v16; // [esp-4h] [ebp-20h]
  int v19; // [esp+14h] [ebp-8h]
  int v20; // [esp+18h] [ebp-4h] BYREF

  v19 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v11 = 1024;
  v12 = a2;
  v20 = 1024;
  while ( 1 )
  {
    LODWORD(v16) = v11;
    Heap = (ACL *)RtlAllocateHeap(ProcessHeap, 0, v16);
    *a9 = Heap;
    if ( !Heap )
      break;
    v14 = RtlpComputeMergedAcl2(a1, v12, a3, a4, a5, a6, a7, a8, (ULONG *)&v20, Heap, a10);
    if ( v14 >= 0 )
    {
      if ( !v20 )
      {
        RtlFreeHeap(ProcessHeap, 0, *a9);
        *a9 = 0;
      }
      return v14;
    }
    RtlFreeHeap(ProcessHeap, 0, *a9);
    *a9 = 0;
    if ( v14 != -1073741789 )
      return v14;
    if ( (unsigned int)++v19 >= 2 )
      return v14;
    v11 = v20;
    v12 = a2;
  }
  return -1073741801;
}
