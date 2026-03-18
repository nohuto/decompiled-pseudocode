/*
 * XREFs of MiConfirmPageIsZero @ 0x140367D00
 * Callers:
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 */

_BOOL8 __fastcall MiConfirmPageIsZero(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(a1 + 32) != 1 )
    return 0LL;
  v4 = (__int64)((unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v5 = MiMapPageInHyperSpaceWorker((v4 >> 63) + v4, 0LL, 0x80000000, a4);
  v6 = (_QWORD *)v5;
  v7 = (_QWORD *)(v5 + 4088);
  do
  {
    if ( *v6 | *v7 )
      break;
    ++v6;
    --v7;
  }
  while ( v6 <= v7 );
  MiUnmapPageInHyperSpaceWorker(v5, 0x11u, 0x80000000);
  return v6 > v7;
}
