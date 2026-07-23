/*
 * XREFs of MiAllocateSkipPagesForMdl @ 0x140534140
 * Callers:
 *     MiFindPagesForMdl @ 0x14029542C (MiFindPagesForMdl.c)
 * Callees:
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 */

__int64 __fastcall MiAllocateSkipPagesForMdl(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // r9
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  int v10; // r15d
  __int64 result; // rax
  __int64 v12; // [rsp+80h] [rbp+8h] BYREF

  v12 = -1LL;
  v3 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = (unsigned __int64)*(unsigned int *)(v3 + 40) >> 12;
  if ( v5 )
    v9 = *(_QWORD *)(a1 + 32);
  else
    v9 = *(_QWORD *)(a1 + 40) - v8;
  v10 = a3 | 0x60000000;
  for ( result = MiFindContiguousPages(
                   *(_QWORD *)a1,
                   v7,
                   *(_QWORD *)(a1 + 24),
                   v5,
                   v9,
                   *(_DWORD *)(a1 + 60),
                   a2,
                   0x80000000,
                   a3 | 0x60000000u,
                   v3,
                   &v12);
        (int)result >= 0;
        result = MiFindContiguousPages(
                   *(_QWORD *)a1,
                   v7,
                   v12 - 1,
                   *(_QWORD *)(a1 + 32),
                   v9,
                   *(_DWORD *)(a1 + 60),
                   a2,
                   0x80000000,
                   v10,
                   *(_QWORD *)(a1 + 64),
                   &v12) )
  {
    v8 += v9;
    if ( v8 == *(_QWORD *)(a1 + 40) )
      break;
    result = v12 - v7;
    if ( v12 - v7 < v9 )
      break;
  }
  return result;
}
