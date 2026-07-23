/*
 * XREFs of MiCreateFixupRecord @ 0x14061AAC8
 * Callers:
 *     MiScanRelocationPage @ 0x1406ACF90 (MiScanRelocationPage.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 */

__int64 __fastcall MiCreateFixupRecord(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, _WORD *a6, _QWORD *a7)
{
  unsigned __int64 v7; // rdi
  __int64 v9; // rbx
  __int16 v10; // r12
  unsigned int v11; // r15d
  int v12; // esi
  _WORD *Pool; // rax
  _WORD *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // [rsp+40h] [rbp+8h]

  v7 = a3;
  if ( (a3 + 4096) >> 12 >= *(_DWORD *)(*(_QWORD *)a1 + 8LL) )
    return 3221225477LL;
  v9 = 0LL;
  HIDWORD(v16) = 0;
  v10 = *a6 >> 12;
  v11 = 4096 - a4;
  if ( (a3 & 0xFFF) < 4096 - a4 )
  {
    v12 = a5;
    if ( a5 == 4 )
    {
      LODWORD(v16) = *(_DWORD *)(a3 + a2);
      v9 = v16;
    }
    else
    {
      v9 = *(_QWORD *)(a3 + a2);
    }
  }
  else
  {
    *a6 &= 0xFFFu;
    v12 = a5;
  }
  Pool = MiAllocatePool(256, 0x20uLL, 0x72466D4Du);
  v14 = Pool;
  if ( !Pool )
    return 3221225626LL;
  Pool[8] = v10;
  v15 = v7 + v12;
  *((_DWORD *)v14 + 3) = v7 + v12;
  if ( (v7 & 0xFFF) < v11 )
  {
    *((_DWORD *)v14 + 2) = v7;
    *((_QWORD *)v14 + 3) = v9;
    *(_QWORD *)(*a7 + 8 * (v7 >> 12)) |= 1uLL;
    v15 = *((_DWORD *)v14 + 3);
  }
  else
  {
    *((_DWORD *)v14 + 2) = (v7 & 0xFFFFF000) + 4096;
  }
  *(_QWORD *)(*a7 + 8 * ((unsigned __int64)v15 >> 12)) |= 1uLL;
  *(_QWORD *)v14 = a7[2];
  a7[2] = v14;
  return 0LL;
}
