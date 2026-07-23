/*
 * XREFs of MiRemoveDecayClusterTimer @ 0x140229950
 * Callers:
 *     MiDecayPfnFullyInitialized @ 0x140229794 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x1402298BC (MiDeleteParentDecayNode.c)
 *     MiEmptyDecayClusterTimers @ 0x14025FDA0 (MiEmptyDecayClusterTimers.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385270 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRemoveDecayClusterTimer(__int64 a1)
{
  unsigned __int64 v1; // r9
  __int64 v2; // r10
  unsigned __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r11

  v1 = (unsigned __int64)*(unsigned __int8 *)(a1 + 34) >> 6;
  v2 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  result = *(_QWORD *)(a1 + 8);
  v4 = (unsigned int)result >> 1;
  v5 = result >> 33;
  if ( v4 == 0x7FFFFFFF )
    *(_QWORD *)(v2 + 8 * v1 + 4792) = result ^ (result ^ *(_QWORD *)(v2 + 8 * v1 + 4792)) & 0x1FFFFFFFFLL;
  else
    *(_QWORD *)(48 * (qword_140C4E9E0 + v4) - 0x58000000000LL + 8) = result ^ (*(_QWORD *)(48 * (qword_140C4E9E0 + v4)
                                                                                         - 0x58000000000LL
                                                                                         + 8) ^ result) & 0x1FFFFFFFFLL;
  if ( v5 == 0x7FFFFFFF )
  {
    result = (*(_DWORD *)(v2 + 8 * v1 + 4792) ^ (unsigned int)result) & 0xFFFFFFFE;
    *(_QWORD *)(v2 + 8 * v1 + 4792) ^= result;
  }
  else
  {
    *(_QWORD *)(48 * (v5 + qword_140C4E9E0) - 0x58000000000LL + 8) ^= (result ^ *(_QWORD *)(48 * (v5 + qword_140C4E9E0)
                                                                                          - 0x58000000000LL
                                                                                          + 8)) & 0xFFFFFFFE;
  }
  return result;
}
