/*
 * XREFs of sub_180073708 @ 0x180073708
 * Callers:
 *     sub_1800678A8 @ 0x1800678A8 (sub_1800678A8.c)
 * Callees:
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 */

__int64 __fastcall sub_180073708(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v4; // rcx
  unsigned int v5; // edi
  __int64 v7; // rdx
  _QWORD *v8; // r8
  int v9; // ebx

  v2 = a1 + 164;
  v4 = (_QWORD *)a1[164];
  v5 = 0;
  if ( v4 == v2 )
  {
    return (unsigned int)-2147023728;
  }
  else
  {
    v7 = *v4;
    v8 = (_QWORD *)v4[1];
    v9 = *((_DWORD *)v4 + 4);
    *v8 = *v4;
    *(_QWORD *)(v7 + 8) = v8;
    j_j_free(v4);
    --a1[166];
    *(_OWORD *)a2 = 0LL;
    *(_DWORD *)a2 = v9;
    *(_QWORD *)(a2 + 8) = a1[162];
  }
  return v5;
}
