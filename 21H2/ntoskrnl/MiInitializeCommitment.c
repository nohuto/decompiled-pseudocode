/*
 * XREFs of MiInitializeCommitment @ 0x1403BFA54
 * Callers:
 *     MiInitializePartition @ 0x14079C85C (MiInitializePartition.c)
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiIncreaseCommitLimits @ 0x1403BFBD8 (MiIncreaseCommitLimits.c)
 */

__int64 __fastcall MiInitializeCommitment(__int64 a1)
{
  char v2; // al
  __int64 v3; // rdi
  unsigned __int16 *v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx

  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    *(_QWORD *)(a1 + 6256) = (-(__int64)(*(_QWORD *)(a1 + 6928) < 0x4000uLL) & 0xFFFFFFFFFFFFFC00uLL) + 1280;
  else
    *(_QWORD *)(a1 + 6256) = 0LL;
  *(_QWORD *)(a1 + 6248) = 0LL;
  v2 = *(_BYTE *)(a1 + 519);
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 472) = 1LL;
  *(_BYTE *)(a1 + 519) = v2 & 0xF9 | 4;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 464) = a1;
  *(_DWORD *)(a1 + 512) = 0;
  *(_BYTE *)(a1 + 516) = -1;
  *(_QWORD *)(a1 + 504) = a1 + 496;
  *(_QWORD *)(a1 + 496) = a1 + 496;
  *(_WORD *)(a1 + 488) = 0;
  *(_BYTE *)(a1 + 490) = 6;
  *(_DWORD *)(a1 + 492) = 0;
  v3 = *(_QWORD *)(a1 + 7104);
  if ( dword_140C4DF3C )
  {
    v4 = *(unsigned __int16 **)(a1 + 4208);
    v5 = (unsigned int)dword_140C4DF3C;
    v6 = *(_QWORD *)(a1 + 4200) - (_QWORD)v4;
    do
    {
      v3 += *(unsigned __int16 *)((char *)v4 + v6) + (unsigned __int64)*v4;
      v4 += 8;
      --v5;
    }
    while ( v5 );
  }
  v7 = *(_QWORD *)(a1 + 6928);
  *(_QWORD *)(a1 + 7168) = v3;
  result = MiIncreaseCommitLimits(a1, v7, v7, 0, 0LL);
  v9 = *(_QWORD *)(a1 + 6928);
  if ( v9 != v3 )
    result = MiChargeCommit(a1, v9 - v3, 2u);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    qword_140C4EFF0 = *(_QWORD *)(a1 + 7464);
    qword_140C4EFF0 -= qword_140C4EFF8;
    result = qword_140C4F018;
    qword_140C4EFF0 -= qword_140C4F018;
  }
  return result;
}
