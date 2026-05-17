/*
 * XREFs of _RtlCreateMemoryZone@12 @ 0x4B2AAAA0
 * Callers:
 *     _RtlCreateMemoryBlockLookaside@20 @ 0x4B2AA940 (_RtlCreateMemoryBlockLookaside@20.c)
 * Callees:
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 */

int __stdcall RtlCreateMemoryZone(_DWORD *a1, int a2, int a3)
{
  int result; // eax
  _DWORD *v4; // ecx
  signed __int32 v5; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v6; // [esp+Ch] [ebp-8h] BYREF
  unsigned int v7; // [esp+10h] [ebp-4h] BYREF

  *a1 = 0;
  if ( a3 || !a2 )
    return -1073741811;
  v6 = 0;
  v7 = (a2 + 4123) & 0xFFFFF000;
  result = NtAllocateVirtualMemory(-1, &v6, 0, &v7, 12288, 4);
  if ( result >= 0 )
  {
    v4 = v6;
    v6[4] = 0;
    v4[1] = v7;
    v4[2] = v4 + 7;
    v4[3] = (char *)v4 + v7;
    _InterlockedOr(&v5, 0);
    v4[6] = v4;
    result = 0;
    *a1 = v4;
  }
  return result;
}
