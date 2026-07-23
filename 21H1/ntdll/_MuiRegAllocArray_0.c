/*
 * XREFs of _MuiRegAllocArray_0 @ 0x4B35616E
 * Callers:
 *     _RtlpCleanupRegistryKeys@0 @ 0x4B353540 (_RtlpCleanupRegistryKeys@0.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 */

PVOID __fastcall MuiRegAllocArray_0(int a1, unsigned int a2)
{
  int v2; // esi
  SIZE_T v4; // [esp-4h] [ebp-Ch]
  SIZE_T Size; // [esp+4h] [ebp-4h] BYREF

  v2 = 0;
  if ( RtlULongLongToUInt((int *)&Size, 4 * a2, (unsigned __int64)a2 >> 30) >= 0 && (_DWORD)Size )
  {
    LODWORD(v4) = Size;
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v4);
  }
  return (PVOID)v2;
}
