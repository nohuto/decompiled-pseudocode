/*
 * XREFs of NormBuffer__AppendAndSortDecomposed @ 0x140587FE8
 * Callers:
 *     NormBuffer__ReplaceLastStartBase @ 0x140588494 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x140588514 (NormBuffer__ReplaceLastStartBasePair.c)
 * Callees:
 *     NormBuffer__AppendEx @ 0x140588058 (NormBuffer__AppendEx.c)
 *     NormBuffer__Insert @ 0x14058817C (NormBuffer__Insert.c)
 *     NormBuffer__SortBeforeSameClass @ 0x1405885D4 (NormBuffer__SortBeforeSameClass.c)
 *     Normalization__GetCharacterInfo @ 0x140913334 (Normalization__GetCharacterInfo.c)
 */

__int64 __fastcall NormBuffer__AppendAndSortDecomposed(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r8
  char v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  v3 = a1[14];
  v10 = 0;
  v4 = a2;
  Normalization__GetCharacterInfo(v3, a2, &v9, &v10);
  LOBYTE(v5) = v9;
  NormBuffer__SortBeforeSameClass(a1, v5);
  v7 = a1[13];
  if ( v7 != a1[5] )
    return NormBuffer__Insert(a1, v4);
  LOBYTE(v6) = v10;
  LOBYTE(v7) = v9;
  return NormBuffer__AppendEx(a1, v4, v7, v6);
}
