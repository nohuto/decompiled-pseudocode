/*
 * XREFs of MiAddSystemPageTableToList @ 0x140235180
 * Callers:
 *     MiDeleteSystemPageTable @ 0x140234FA0 (MiDeleteSystemPageTable.c)
 * Callees:
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiAddSystemPageTableToList(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v6);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
    if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
  *(_QWORD *)a2 = *a1;
  *a1 = a2;
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v4 = 48 * (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v7);
    while ( *(__int64 *)(v4 + 24) < 0 );
  }
  result = MiDecrementShareCount(v4);
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
