/*
 * XREFs of sub_1800E2F18 @ 0x1800E2F18
 * Callers:
 *     sub_180080510 @ 0x180080510 (sub_180080510.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E2F18(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  while ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 48), 0) )
    ;
  v1 = *(_DWORD *)(a1 + 16);
  *(_OWORD *)(a1 + 20) = *(_OWORD *)a1;
  *(_DWORD *)(a1 + 36) = v1;
  *(_DWORD *)a1 = -1082130432;
  *(_DWORD *)(a1 + 4) = -1082130432;
  *(_QWORD *)(a1 + 8) = 2LL;
  *(_DWORD *)(a1 + 16) = 0;
  result = 2LL;
  *(_QWORD *)(a1 + 40) = 2LL;
  *(_DWORD *)(a1 + 48) = 0;
  return result;
}
