/*
 * XREFs of MiGetKernelStackSwapSupport @ 0x1402A131C
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1402A1700 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiFindFreePageFileSpace @ 0x1402586B4 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x140258E08 (MiPageFileLargestBitmapsRun.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1402A1EA8 (MiAllocateWorkingSetSwapSupport.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiGetKernelStackSwapSupport(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  __int64 v5; // rbp
  unsigned int v6; // r12d
  __int64 *v7; // r14
  __int64 v8; // r15
  unsigned int v9; // ebx
  __int64 WorkingSetSwapSupport; // rax
  __int64 v11; // rax
  unsigned __int64 *v12; // rdx
  unsigned int v14; // ebx

  v2 = -1;
  v3 = 0;
  v5 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a2 + 1838));
  v6 = *(_DWORD *)(v5 + 6936);
  if ( !v6 )
    return 3221225799LL;
  v7 = (__int64 *)(v5 + 6944);
  do
  {
    v8 = *v7;
    if ( (*(_BYTE *)(*v7 + 204) & 0x50) == 0 )
    {
      if ( v2 == -1
        || (v14 = MiPageFileLargestBitmapsRun(*(_QWORD *)(v5 + 8LL * v2 + 6944)),
            (unsigned int)MiPageFileLargestBitmapsRun(v8) > v14) )
      {
        v2 = v3;
      }
    }
    ++v3;
    ++v7;
  }
  while ( v3 < v6 );
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
  v11 = MiSwizzleInvalidPte(0LL);
  *v12 = ((unsigned __int64)(v2 & 0xF) << 12) | v11 & 0xFFFFFFFFFFFF0FFFuLL;
  *(_DWORD *)(a1 + 72) = MiFindFreePageFileSpace(v5, (__int64)v12, 6 * v9, 33);
  return 0LL;
}
