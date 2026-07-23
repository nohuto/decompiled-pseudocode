/*
 * XREFs of NormBuffer__ReplaceLastStartBasePair @ 0x1800FFBAC
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x180080D8C (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__AppendAndSortDecomposed @ 0x1800FF644 (NormBuffer__AppendAndSortDecomposed.c)
 */

char __fastcall NormBuffer__ReplaceLastStartBasePair(__int64 a1, int a2, char a3, char a4)
{
  __int64 v4; // rdi
  __int16 v7; // r11
  __int64 v8; // rdx
  unsigned __int16 i; // r11
  unsigned __int16 v10; // cx
  __int64 v11; // rax
  __int64 v12; // rdx

  v4 = *(_QWORD *)(a1 + 112);
  v7 = *(_WORD *)(*(_QWORD *)(v4 + 64) + 2LL * (*(_DWORD *)(a1 + 88) % *(_DWORD *)(v4 + 56)));
  if ( (v7 & 0xE000) == 0 )
  {
    v8 = *(_QWORD *)(v4 + 72);
    for ( i = 2 * v7; ; i += 2 )
    {
      v10 = *(_WORD *)(v8 + 2LL * i);
      if ( !v10 || v10 == *(_DWORD *)(a1 + 88) )
        break;
    }
    v7 = *(_WORD *)(v8 + 2LL * i + 2);
  }
  *(_DWORD *)(a1 + 88) = a2;
  *(_BYTE *)(a1 + 92) = a3;
  v11 = *(_QWORD *)(v4 + 80);
  *(_BYTE *)(a1 + 93) = a4;
  *(_QWORD *)(a1 + 96) = 0LL;
  v12 = *(unsigned __int16 *)(v11 + 2LL * (unsigned __int16)((v7 & 0x1FFF) + 2));
  *(_WORD *)(*(_QWORD *)(a1 + 80) - 2LL) = a2;
  if ( (_DWORD)v12 )
    return NormBuffer__AppendAndSortDecomposed((_QWORD *)a1, v12);
  else
    return 1;
}
