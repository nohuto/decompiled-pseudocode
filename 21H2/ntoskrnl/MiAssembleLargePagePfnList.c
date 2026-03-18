/*
 * XREFs of MiAssembleLargePagePfnList @ 0x1405C11C0
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x1405C0D40 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140235E10 (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiAssembleLargePagePfnList(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rcx

  result = a1 + 24LL * (unsigned int)MiGetPfnPageSizeIndex((__int64)a2);
  v4 = *(_QWORD **)(result + 8);
  if ( *v4 != result )
    __fastfail(3u);
  *a2 = result;
  a2[1] = v4;
  *v4 = a2;
  *(_QWORD *)(result + 8) = a2;
  ++*(_QWORD *)(result + 16);
  return result;
}
