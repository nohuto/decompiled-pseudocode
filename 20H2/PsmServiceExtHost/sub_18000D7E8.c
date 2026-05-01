/*
 * XREFs of sub_18000D7E8 @ 0x18000D7E8
 * Callers:
 *     sub_18000C860 @ 0x18000C860 (sub_18000C860.c)
 * Callees:
 *     sub_18001049C @ 0x18001049C (sub_18001049C.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_18007C9B8 @ 0x18007C9B8 (sub_18007C9B8.c)
 */

__int64 __fastcall sub_18000D7E8(char a1, _OWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  _OWORD *v7; // rcx
  __int128 v8; // xmm1
  char v9; // al
  __int64 result; // rax

  memset((void *)(a3 + 16), 0, 0x408uLL);
  *(_OWORD *)a3 = 0LL;
  RtlInitializeSRWLock(a3);
  *(_DWORD *)(a3 + 8) = 0;
  *(_QWORD *)(a3 + 608) = a3 + 600;
  *(_QWORD *)(a3 + 600) = a3 + 600;
  RtlInitializeConditionVariable(a3 + 16);
  RtlInitializeConditionVariable(a3 + 680);
  *(_OWORD *)(a3 + 704) = 0LL;
  *(_QWORD *)(a3 + 720) = -1LL;
  *(_OWORD *)(a3 + 744) = 0LL;
  *(_QWORD *)(a3 + 760) = -1LL;
  v6 = 4LL;
  *(_QWORD *)(a3 + 1008) = -1LL;
  *(_QWORD *)(a3 + 1016) = -1LL;
  *(_QWORD *)(a3 + 1024) = -1LL;
  *(_QWORD *)(a3 + 1032) = -1LL;
  *(_QWORD *)(a3 + 648) &= 0xFFFFFFFFF997FFFFuLL;
  *(_QWORD *)(a3 + 648) |= 0x19940000uLL;
  *(_DWORD *)(a3 + 772) &= ~1u;
  *(_DWORD *)(a3 + 772) |= a1 & 1;
  v7 = (_OWORD *)(a3 + 24);
  do
  {
    *v7 = *a2;
    v7[1] = a2[1];
    v7[2] = a2[2];
    v7[3] = a2[3];
    v7[4] = a2[4];
    v7[5] = a2[5];
    v7[6] = a2[6];
    v7 += 8;
    v8 = a2[7];
    a2 += 8;
    *(v7 - 1) = v8;
    --v6;
  }
  while ( v6 );
  *v7 = *a2;
  v7[1] = a2[1];
  *((_QWORD *)v7 + 4) = *((_QWORD *)a2 + 4);
  v9 = sub_18001049C(a3 - 64);
  *(_QWORD *)(a3 + 800) = 1LL;
  result = (unsigned __int64)(v9 & 1) << 58;
  *(_QWORD *)(a3 + 648) &= ~0x400000000000000uLL;
  *(_QWORD *)(a3 + 648) |= result;
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 )
  {
    result = qword_1800B3230 & 8;
    if ( result == qword_1800B3230 )
      return sub_18007C9B8(0xFBFFFFFFFFFFFFFFuLL, &unk_1800A12CF);
  }
  return result;
}
