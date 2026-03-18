/*
 * XREFs of sub_1C004F5D0 @ 0x1C004F5D0
 * Callers:
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 *     sub_1C0053F94 @ 0x1C0053F94 (sub_1C0053F94.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C004EADC @ 0x1C004EADC (sub_1C004EADC.c)
 *     sub_1C004FDCC @ 0x1C004FDCC (sub_1C004FDCC.c)
 */

__int64 __fastcall sub_1C004F5D0(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // r9d
  int v7; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __m128 *v12; // rax
  __m128 *v13; // rbx

  sub_1C000FD80(a1, 4096, 1667451204, a2, 0LL);
  if ( !a2 )
  {
    v7 = v6 + 26;
    PoolWithTag = ExAllocatePoolWithTag(PoolType, (unsigned int)(v6 + 26), 0x42554855u);
    if ( PoolWithTag )
    {
      *(_OWORD *)PoolWithTag = 0LL;
      PoolWithTag[2] = 0LL;
      *((_WORD *)PoolWithTag + 12) = 0;
      *(_OWORD *)PoolWithTag = xmmword_1C0064C18;
      *((_DWORD *)PoolWithTag + 4) = 5701711;
      *((_WORD *)PoolWithTag + 10) = 78;
      *(_QWORD *)(a3 + 8) = PoolWithTag;
      *(_DWORD *)(a3 + 4) = v7;
      return 0LL;
    }
    return 3221225626LL;
  }
  v11 = (unsigned int)sub_1C0011220(a2)[355];
  if ( (v11 & 0x40) != 0 )
  {
    v12 = (__m128 *)ExAllocatePoolWithTag(PoolType, 0x44uLL, 0x42554855u);
    v13 = v12;
    if ( v12 )
    {
      sub_1C001D340(v12, 0, 0x44uLL);
      *v13 = (__m128)xmmword_1C0064F70;
      v13[1] = (__m128)xmmword_1C0064F80;
      v13[2] = (__m128)xmmword_1C0064F90;
      v13[3] = (__m128)xmmword_1C0064FA0;
      v13[4].m128_i32[0] = 0;
      *(_QWORD *)(a3 + 8) = v13;
      *(_DWORD *)(a3 + 4) = 68;
      return 0LL;
    }
    return 3221225626LL;
  }
  if ( (v11 & 0x20) != 0 )
    return sub_1C004FDCC(v11, v10, a3);
  else
    return sub_1C004EADC(a1, a2, a3);
}
