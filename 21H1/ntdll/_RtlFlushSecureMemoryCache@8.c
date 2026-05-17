/*
 * XREFs of _RtlFlushSecureMemoryCache@8 @ 0x4B35E4D0
 * Callers:
 *     _RtlpSecMemFreeVirtualMemory@16 @ 0x4B2AFA7A (_RtlpSecMemFreeVirtualMemory@16.c)
 *     _RtlComputeImportTableHash@12 @ 0x4B33E550 (_RtlComputeImportTableHash@12.c)
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _RtlpCallSecureMemoryCallbacks@8 @ 0x4B35E5B0 (_RtlpCallSecureMemoryCallbacks@8.c)
 */

char __stdcall RtlFlushSecureMemoryCache(int a1, int a2)
{
  _BYTE v3[8]; // [esp+0h] [ebp-1Ch] BYREF
  int v4; // [esp+8h] [ebp-14h]

  if ( RtlpSecMemListHead == (_UNKNOWN *)&RtlpSecMemListHead
    || !a2 && (NtQueryVirtualMemory(-1, a1, 3, (int)v3, 28, 0) < 0 || v4 == 0x10000) )
  {
    return 0;
  }
  else
  {
    return RtlpCallSecureMemoryCallbacks(a1);
  }
}
