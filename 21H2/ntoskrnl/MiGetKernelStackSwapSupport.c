/*
 * XREFs of MiGetKernelStackSwapSupport @ 0x14025FF40
 * Callers:
 *     MmOutSwapWorkingSet @ 0x140260144 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiFindFreePageFileSpace @ 0x14025F6B0 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x14025FD40 (MiPageFileLargestBitmapsRun.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1402609F4 (MiAllocateWorkingSetSwapSupport.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiGetKernelStackSwapSupport(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  __int64 v6; // rbp
  unsigned int v7; // r15d
  __int64 *v8; // r14
  unsigned int v9; // ebx
  __int64 WorkingSetSwapSupport; // rax
  __int64 v11; // rax
  unsigned __int64 *v12; // rdx
  unsigned int v14; // ebx

  v2 = -1;
  v3 = 0;
  v6 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a2 + 1838));
  v7 = *(_DWORD *)(v6 + 16728);
  if ( !v7 )
    return 3221225799LL;
  v8 = (__int64 *)(v6 + 16736);
  do
  {
    if ( (*(_BYTE *)(*v8 + 204) & 0x50) == 0 )
    {
      if ( v2 == -1
        || (v14 = MiPageFileLargestBitmapsRun(*v8),
            v14 > (unsigned int)MiPageFileLargestBitmapsRun(*(_QWORD *)(v6 + 8LL * v2 + 16736))) )
      {
        v2 = v3;
      }
    }
    ++v3;
    ++v8;
  }
  while ( v3 < v7 );
  if ( v2 == -1 )
    return 3221225799LL;
  v9 = *(_DWORD *)(a2 + 1520);
  if ( !v9 )
    return 3221225738LL;
  if ( v9 > 0x2AAAAAAA )
    v9 = 715827882;
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(2 * v9);
  *(_QWORD *)(a1 + 56) = WorkingSetSwapSupport;
  if ( !WorkingSetSwapSupport )
    return 3221225626LL;
  v11 = MiSwizzleInvalidPte(0LL, a1 + 64);
  *v12 = ((unsigned __int64)(v2 & 0xF) << 12) | v11 & 0xFFFFFFFFFFFF0FFFuLL;
  *(_DWORD *)(a1 + 72) = MiFindFreePageFileSpace(v6, v12, 6 * v9, 0x21u);
  return 0LL;
}
