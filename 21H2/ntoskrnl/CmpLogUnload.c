/*
 * XREFs of CmpLogUnload @ 0x140667AB4
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14071CB34 (CmpCompleteUnloadKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpLogUnload(__int64 a1, int a2)
{
  __int64 result; // rax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F;
  *(_DWORD *)(a1 + 4LL * (unsigned int)result + 4280) = a2;
  return result;
}
