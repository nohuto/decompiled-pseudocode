/*
 * XREFs of _RtlpHpAllocVirtBlockCommitFirst@16 @ 0x4B307828
 * Callers:
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 * Callees:
 *     _RtlpGetHeapProtection@8 @ 0x4B2AF0A0 (_RtlpGetHeapProtection@8.c)
 *     _RtlpSecMemFreeVirtualMemory@16 @ 0x4B2AFA7A (_RtlpSecMemFreeVirtualMemory@16.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 */

int __fastcall RtlpHpAllocVirtBlockCommitFirst(int a1, _DWORD *a2, int a3, int *a4)
{
  int v5; // edi
  int HeapProtection; // eax
  int v7; // ecx
  int v8; // edx
  int v10; // [esp+10h] [ebp-10h] BYREF
  int v11; // [esp+14h] [ebp-Ch] BYREF
  int v12; // [esp+18h] [ebp-8h] BYREF
  int v13; // [esp+1Ch] [ebp-4h] BYREF

  v5 = 0;
  v12 = *a2 + a3 + 4096;
  v13 = 0;
  HeapProtection = RtlpGetHeapProtection(a1, 1);
  if ( NtAllocateVirtualMemory(-1, (int)&v13, 0, (int)&v12, 4096, HeapProtection) >= 0 )
  {
    if ( a3 )
      RtlpSecMemFreeVirtualMemory(v7, &v13, &a3, 0x4000);
    v11 = 4096;
    v10 = v12 - 4096 + v13;
    RtlpSecMemFreeVirtualMemory(v12 - 4096, &v10, &v11, 0x4000);
    v8 = v12;
    v5 = a3 + v13;
    *a2 = v12 - v11 - a3;
    *a4 = v8;
  }
  return v5;
}
