/*
 * XREFs of sub_18003DB40 @ 0x18003DB40
 * Callers:
 *     sub_18003DAB4 @ 0x18003DAB4 (sub_18003DAB4.c)
 * Callees:
 *     sub_180009B2C @ 0x180009B2C (sub_180009B2C.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18003DB40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  memset((void *)a3, 0, 0xC8uLL);
  sub_180009B2C((__int64)sub_180034C50, a1, (_QWORD *)a3);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24)) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)(a3 + 160) = a1;
  *(_OWORD *)(a3 + 88) = *(_OWORD *)a2;
  *(_OWORD *)(a3 + 104) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a3 + 120) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a3 + 136) = *(_OWORD *)(a2 + 48);
  result = *(unsigned int *)(a2 + 64);
  *(_QWORD *)(a3 + 184) = 0LL;
  *(_DWORD *)(a3 + 152) = result;
  return result;
}
