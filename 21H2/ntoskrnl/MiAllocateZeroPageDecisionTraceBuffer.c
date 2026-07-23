/*
 * XREFs of MiAllocateZeroPageDecisionTraceBuffer @ 0x1403CB004
 * Callers:
 *     MiZeroBootLargePages @ 0x1403CAD94 (MiZeroBootLargePages.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 */

_DWORD *__fastcall MiAllocateZeroPageDecisionTraceBuffer(__int64 a1, unsigned int a2)
{
  _DWORD *v2; // r8
  unsigned __int64 v3; // rbx
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 *v6; // rcx
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rbx
  SIZE_T v9; // rdx
  _DWORD *Pool; // rax

  v2 = 0LL;
  v3 = 0LL;
  v4 = 2LL;
  v5 = *(_QWORD *)(a1 + 16) + 4544LL * a2;
  v6 = MiLargePageSizes;
  v7 = (_QWORD *)(v5 + 8);
  do
  {
    if ( *v7 )
      v3 += *v7 * *v6;
    v7 += 134;
    ++v6;
    --v4;
  }
  while ( v4 );
  if ( !v3 )
    return 0LL;
  v8 = v3 >> 12;
  v9 = 16LL * (unsigned int)v8;
  if ( v9 )
  {
    Pool = MiAllocatePool(64, v9, 0x20206D4Du);
    v2 = Pool;
    if ( Pool )
    {
      Pool[1] = 0;
      *Pool = v8;
      Pool[2] = 1;
    }
  }
  return v2;
}
