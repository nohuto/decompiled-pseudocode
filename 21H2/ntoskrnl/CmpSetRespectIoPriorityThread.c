/*
 * XREFs of CmpSetRespectIoPriorityThread @ 0x1402A20D4
 * Callers:
 *     CmpDoFileWrite @ 0x140714594 (CmpDoFileWrite.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpSetRespectIoPriorityThread(__int64 a1, char a2)
{
  bool result; // al

  result = (*(_DWORD *)(a1 + 1380) & 0x80) != 0;
  *(_DWORD *)(a1 + 1380) ^= ((unsigned __int8)*(_DWORD *)(a1 + 1380) ^ (unsigned __int8)(a2 << 7)) & 0x80;
  return result;
}
