/*
 * XREFs of MmGetNodeChannelRanges @ 0x1407C87F0
 * Callers:
 *     ExpQueryMemoryTopologyInformation @ 0x1407C8750 (ExpQueryMemoryTopologyInformation.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiReferencePageRuns @ 0x1402D43E0 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x14037EB10 (MiDereferencePageRuns.c)
 */

__int64 __fastcall MmGetNodeChannelRanges(_QWORD *a1, SIZE_T *a2, __int64 a3, _DWORD *a4)
{
  unsigned int *v6; // rdi
  SIZE_T v7; // rbp
  _DWORD *Pool; // rax
  unsigned int v9; // ebx
  _DWORD *v10; // rsi
  __int64 *v11; // r11
  char *v12; // r10
  unsigned int v13; // r14d
  __int64 v14; // rcx
  unsigned int *v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 result; // rax

  v6 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 1u, a3, a4);
  v7 = 32LL * (*v6 - 1) + 48;
  Pool = MiAllocatePool(64, v7, 0x68506D4Du);
  v9 = 0;
  v10 = Pool;
  if ( Pool )
  {
    v11 = (__int64 *)(v6 + 4);
    *(_QWORD *)Pool = *v6;
    v12 = (char *)(Pool + 4);
    v13 = 0;
    Pool[2] = (unsigned __int16)KeNumberNodes;
    Pool[3] = MmNumberOfChannels;
    v14 = *v6;
    v15 = &v6[4 * v14 + 4];
    if ( (_DWORD)v14 )
    {
      do
      {
        v16 = *v11;
        v11 += 2;
        *((_QWORD *)v12 + 1) = v16;
        *((_QWORD *)v12 + 2) = *(v11 - 1);
        v17 = *v15;
        v15 += 2;
        *(_DWORD *)v12 = v17;
        v12 += 32;
        v18 = *(v15 - 1);
        *((_DWORD *)v12 - 7) = v18;
        ++v13;
        *((_QWORD *)v12 - 1) = *(_BYTE *)(v18 + qword_140C50DD0 + 4544 * v17 + 4321) == 1;
      }
      while ( v13 < *v6 );
    }
  }
  else
  {
    v9 = -1073741670;
  }
  MiDereferencePageRuns((__int64)v6);
  result = v9;
  *a1 = v10;
  *a2 = v7;
  return result;
}
