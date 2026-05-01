/*
 * XREFs of sub_18003EF6C @ 0x18003EF6C
 * Callers:
 *     sub_18003EEC8 @ 0x18003EEC8 (sub_18003EEC8.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18003EF6C(__int64 a1)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  memset((void *)(a1 + 16), 0, 0xD8uLL);
  *(_OWORD *)a1 = 0LL;
  RtlInitializeSRWLock(a1);
  *(_DWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 24) = unk_18008E250;
  *(_OWORD *)(a1 + 40) = *((_OWORD *)&unk_18008E250 + 1);
  *(_OWORD *)(a1 + 56) = *((_OWORD *)&unk_18008E250 + 2);
  *(_OWORD *)(a1 + 72) = *((_OWORD *)&unk_18008E250 + 3);
  *(_OWORD *)(a1 + 88) = *((_OWORD *)&unk_18008E250 + 4);
  *(_OWORD *)(a1 + 104) = *((_OWORD *)&unk_18008E250 + 5);
  *(_OWORD *)(a1 + 120) = *((_OWORD *)&unk_18008E250 + 6);
  *(_OWORD *)(a1 + 136) = *((_OWORD *)&unk_18008E250 + 7);
  *(_OWORD *)(a1 + 152) = *((_OWORD *)&unk_18008E250 + 8);
  v2 = *((_OWORD *)&unk_18008E250 + 9);
  result = 0x418B0F25A3BC0875LL;
  *(_DWORD *)(a1 + 216) = 5;
  *(_OWORD *)(a1 + 168) = v2;
  *(_QWORD *)(a1 + 220) = 0x418B0F25A3BC0875LL;
  *(_DWORD *)(a1 + 16) = 2;
  return result;
}
