/*
 * XREFs of _RtlpAllocDeallocQueryBuffer@16 @ 0x4B2EB25A
 * Callers:
 *     _RtlpQueryRegistryValues@24 @ 0x4B2EAEA8 (_RtlpQueryRegistryValues@24.c)
 * Callees:
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

int __fastcall RtlpAllocDeallocQueryBuffer(int a1, int a2, char a3, int *a4)
{
  int result; // eax
  int v5; // esi
  int v7; // [esp+8h] [ebp-8h] BYREF
  int v8; // [esp+Ch] [ebp-4h] BYREF

  result = 0;
  v7 = a2;
  v5 = 0;
  v8 = 0;
  if ( a2 )
  {
    v5 = NtFreeVirtualMemory(-1, &v7, &a3, 0x8000);
    result = v8;
  }
  if ( a1 )
  {
    v5 = NtAllocateVirtualMemory(-1, &v8, 0, a1, 4096, 4);
    if ( v5 < 0 )
      result = 0;
    else
      result = v8;
  }
  if ( a4 )
    *a4 = v5;
  return result;
}
