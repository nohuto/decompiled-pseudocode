/*
 * XREFs of KiRemoveThreadFromSharedReadyQueue @ 0x14029BA58
 * Callers:
 *     KiQuantumEnd @ 0x140279260 (KiQuantumEnd.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14029B8C0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiFindReadyThread @ 0x14029B920 (KiFindReadyThread.c)
 *     KiSetThreadSchedulingGroup @ 0x14029D3A8 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRemoveThreadFromSharedReadyQueue(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rax
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
  v3 = *(_QWORD **)(a2 + 216);
  v4 = *(_QWORD **)(a2 + 224);
  if ( v3[1] != a2 + 216 || *v4 != a2 + 216 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( v4 == v3 )
    *(_DWORD *)(a1 + 8) ^= 1 << a3;
  --*(_DWORD *)(a1 + 608);
  result = *(unsigned int *)(a2 + 1568);
  *(_QWORD *)(a1 + 616) -= result;
  return result;
}
