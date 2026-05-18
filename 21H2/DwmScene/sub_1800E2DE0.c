/*
 * XREFs of sub_1800E2DE0 @ 0x1800E2DE0
 * Callers:
 *     sub_1800FE7B0 @ 0x1800FE7B0 (sub_1800FE7B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E2DE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  while ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 48), 0) )
    ;
  *(_OWORD *)a2 = *(_OWORD *)a1;
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 16);
  *(_OWORD *)a3 = *(_OWORD *)(a1 + 20);
  result = *(unsigned int *)(a1 + 36);
  *(_DWORD *)(a3 + 16) = result;
  *(_DWORD *)(a1 + 48) = 0;
  return result;
}
