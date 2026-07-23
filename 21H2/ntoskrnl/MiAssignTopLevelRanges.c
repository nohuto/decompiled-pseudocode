/*
 * XREFs of MiAssignTopLevelRanges @ 0x140A518A8
 * Callers:
 *     MiInitializeSystemVa @ 0x140A50300 (MiInitializeSystemVa.c)
 * Callees:
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     MiHyperSpaceSize @ 0x14031CC88 (MiHyperSpaceSize.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiAssignSystemVa @ 0x140A51B28 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x140A51C18 (MiAddSubRegionEntropy.c)
 */

__int64 __fastcall MiAssignTopLevelRanges(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  int i; // edx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // edx
  int v13; // eax
  __int64 v14; // rcx
  _DWORD *v15; // rbx
  unsigned __int64 *v16; // rbx
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 result; // rax
  int *v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  _QWORD Base[40]; // [rsp+20h] [rbp-E0h] BYREF

  memset(Base, 0, 0x138uLL);
  *a2 = 0LL;
  v3 = 0LL;
  for ( i = 0; i < 4; ++i )
  {
    v5 = 3 * v3;
    v3 = (unsigned int)(v3 + 1);
    LODWORD(Base[v5]) = i;
    Base[v5 + 2] = 0x100000000000LL;
  }
  v6 = 3 * v3;
  LODWORD(Base[v6]) = 4;
  v7 = (_DWORD *)Base + 1;
  Base[v6 + 2] = 0x100000000000LL;
  v8 = 5LL;
  do
  {
    *v7 = ExGenRandom(1);
    v7 += 6;
    --v8;
  }
  while ( v8 );
  qsort(Base, 5uLL, 0x18uLL, MiRegionAssignmentSort);
  LODWORD(Base[15]) = 5;
  Base[17] = 0x38000000000LL;
  LODWORD(Base[18]) = 6;
  v9 = 7LL;
  Base[20] = 0x28000000000LL;
  LODWORD(Base[21]) = 7;
  v10 = MiHyperSpaceSize();
  LODWORD(v11) = 8;
  LODWORD(Base[24]) = 8;
  Base[23] = ((v10 + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL) + 0x8000000000LL;
  v12 = 0;
  Base[26] = 0x10000000000LL;
  do
  {
    v11 = (unsigned int)(v11 + 1);
    v13 = v12 + 9;
    ++v12;
    v14 = 3 * v11;
    LODWORD(Base[v14]) = v13;
    Base[v14 + 2] = 0x8000000000LL;
  }
  while ( v12 < 4 );
  v15 = (_DWORD *)&Base[18] + 1;
  do
  {
    *v15 = ExGenRandom(1);
    v15 += 6;
    --v9;
  }
  while ( v9 );
  qsort(&Base[21], 6uLL, 0x18uLL, MiRegionAssignmentSort);
  v16 = &Base[2];
  v17 = 13LL;
  do
  {
    if ( *((_DWORD *)v16 - 4) == 12 )
    {
      v23 = 3LL;
      result = (__int64)((8 * ((0x140000000uLL >> 39) & 0x1FF) - 0x90482413000LL) << 25) >> 16;
      do
      {
        result = result << 25 >> 16;
        --v23;
      }
      while ( v23 );
    }
    else
    {
      v18 = (*v16 + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL;
      *v16 = v18;
      result = MiAssignSystemVa(v18 >> 39);
      if ( !result )
        return result;
    }
    *(v16 - 1) = result;
    LODWORD(v9) = v9 + 1;
    v16 += 3;
  }
  while ( (unsigned int)v9 < 0xD );
  v20 = (int *)Base;
  do
  {
    v21 = *((_QWORD *)v20 + 1);
    v22 = *v20;
    v20 += 6;
    v22 *= 2LL;
    qword_140C4FB08[v22] = v21;
    qword_140C4FB10[v22] = *((_QWORD *)v20 - 1);
    --v17;
  }
  while ( v17 );
  MiAddSubRegionEntropy();
  return 1LL;
}
