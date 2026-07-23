/*
 * XREFs of MiInitializeProcessTopDownEntropy @ 0x1406C0078
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406BFB24 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 */

_QWORD *__fastcall MiInitializeProcessTopDownEntropy(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 1496);
  if ( v2 > 0x100000000LL )
    v2 = 0LL;
  v4 = v2;
  v5 = (-(__int64)(a2 != 0) & 0xFFFFFFF600010000uLL) + 0x7FFFFFFF0000LL;
  if ( (*(_DWORD *)(a1 + 2512) & 0x40) == 0 )
  {
    if ( v2 )
      v4 = v2 - ((unsigned __int8)ExGenRandom(1) << 16);
    v5 -= (unsigned int)ExGenRandom(1) << 16;
  }
  result = *(_QWORD **)(a1 + 1680);
  if ( v4 )
    result[30] = v5;
  else
    v4 = v5;
  result[12] = v4;
  result[21] = v4;
  return result;
}
