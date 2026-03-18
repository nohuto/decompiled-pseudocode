/*
 * XREFs of MiComputePageHash @ 0x14045D34E
 * Callers:
 *     MiWritePageFileHash @ 0x14045D8D2 (MiWritePageFileHash.c)
 *     MiArePagefileContentsCorrupted @ 0x1405BC2C4 (MiArePagefileContentsCorrupted.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPagingFileOffset @ 0x1402E76C0 (MiGetPagingFileOffset.c)
 */

__int64 __fastcall MiComputePageHash(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  _QWORD *v5; // rbx
  unsigned __int64 v8; // rax
  unsigned __int8 v9; // bp
  unsigned __int64 v10; // rdi
  _QWORD *v11; // r14
  __int64 i; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // r8
  unsigned int v15; // edx
  __int64 result; // rax
  _QWORD v17[4]; // [rsp+20h] [rbp-48h]
  unsigned __int8 v18; // [rsp+70h] [rbp+8h] BYREF

  v18 = 0;
  v5 = a4;
  if ( a4 )
  {
    v10 = 0LL;
    v9 = 17;
  }
  else
  {
    v8 = MiMapPageInHyperSpaceWorker(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4), &v18, 0);
    v9 = v18;
    v10 = v8;
    v5 = (_QWORD *)v8;
  }
  v11 = v5 + 508;
  v17[0] = *v5 + (unsigned int)MiGetPagingFileOffset(a2 + 16);
  v17[1] = v5[1];
  v17[2] = v5[2];
  v17[3] = v5[3];
  do
  {
    v5 += 4;
    for ( i = 0LL; i < 4; ++i )
      v17[i] += v5[i];
  }
  while ( v5 != v11 );
  v13 = v5[1] + v5[2] + v5[3] + v17[0];
  if ( v10 )
    MiUnmapPageInHyperSpaceWorker(v10, v9);
  v14 = 0xFFFFF6FB7DBEDF68uLL;
  if ( (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL) != 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4) )
    v14 = a3;
  v15 = v13 + HIDWORD(v13) + (v14 >> 3);
  result = 3LL;
  if ( v15 < 3 )
    v15 = 3;
  *(_QWORD *)(a1 + 8) = v14 | 1;
  *(_DWORD *)a1 = v15;
  return result;
}
