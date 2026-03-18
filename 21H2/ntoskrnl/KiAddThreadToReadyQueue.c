/*
 * XREFs of KiAddThreadToReadyQueue @ 0x1405737B4
 * Callers:
 *     KiSelectNextThread @ 0x14035C3FC (KiSelectNextThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToPrcbQueue @ 0x140210664 (KiAddThreadToPrcbQueue.c)
 *     KiAddThreadToScbQueue @ 0x140210988 (KiAddThreadToScbQueue.c)
 */

__int64 __fastcall KiAddThreadToReadyQueue(__int64 a1, __int64 a2, __int64 a3, char a4, int a5)
{
  char v5; // bl
  __int64 v7; // rdi
  __int64 v9; // rax
  char v11; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  v7 = a2;
  if ( !a4 )
    *(_DWORD *)(a3 + 436) = MEMORY[0xFFFFF78000000320];
  if ( !a2 )
  {
    v7 = *(_QWORD *)(a3 + 104);
    if ( v7 )
      v7 += *(unsigned int *)(a1 + 216);
  }
  v9 = *(_QWORD *)(a1 + 35000);
  if ( v9 )
    *(_BYTE *)(v9 + 16) = 0;
  *(_BYTE *)(a3 + 388) = 1;
  v11 = 0;
  if ( v7 && (*(_DWORD *)(a3 + 120) & 0xC00) == 0 )
  {
    if ( (unsigned int)KiGetThreadEffectiveRankNonZero(a3, v7, a3, 1, (bool *)&v11) )
      return KiAddThreadToScbQueue(a1, v7, a3, a5);
    v5 = v11;
  }
  return KiAddThreadToPrcbQueue(a1, a3, *(char *)(a3 + 195), a5, v5);
}
