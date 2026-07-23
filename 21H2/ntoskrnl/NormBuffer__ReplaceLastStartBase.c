/*
 * XREFs of NormBuffer__ReplaceLastStartBase @ 0x14058E164
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1409186F0 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__AppendAndSortDecomposed @ 0x14058DCB8 (NormBuffer__AppendAndSortDecomposed.c)
 *     Normalization__GetSecondAndThirdDecomposedCharPlane0 @ 0x140917C98 (Normalization__GetSecondAndThirdDecomposedCharPlane0.c)
 */

char __fastcall NormBuffer__ReplaceLastStartBase(__int64 a1, int a2, char a3, char a4)
{
  unsigned int v4; // r10d
  __int64 v6; // rax
  __int64 v7; // rcx
  char result; // al
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v10; // [rsp+48h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a1 + 88);
  v6 = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  v10 = 0;
  v9 = 0;
  *(_DWORD *)(a1 + 88) = a2;
  *(_BYTE *)(a1 + 92) = a3;
  *(_BYTE *)(a1 + 93) = a4;
  v7 = *(_QWORD *)(a1 + 112);
  *(_WORD *)(v6 - 2) = a2;
  Normalization__GetSecondAndThirdDecomposedCharPlane0(v7, v4, &v10, &v9);
  if ( !v9 || (result = NormBuffer__AppendAndSortDecomposed((_QWORD *)a1, v9)) != 0 )
  {
    if ( v10 )
      return NormBuffer__AppendAndSortDecomposed((_QWORD *)a1, v10);
    else
      return 1;
  }
  return result;
}
