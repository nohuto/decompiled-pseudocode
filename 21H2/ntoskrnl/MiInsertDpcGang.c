/*
 * XREFs of MiInsertDpcGang @ 0x14056085C
 * Callers:
 *     MiAllocateFastLargePagesForMdl @ 0x140533F24 (MiAllocateFastLargePagesForMdl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInsertDpcGang(__int64 a1, __int64 *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 168) )
    *(_QWORD *)(a1 + 168) = *(_QWORD *)(qword_140C4E688 + 8 * (((unsigned __int64)a2[5] >> 39) & 0x3FF));
  v4 = *(unsigned __int16 *)(a1 + 152);
  *(_WORD *)(a1 + 152) = v4 + 1;
  v5 = v4 % *(_DWORD *)(a1 + 188);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(v6 + 8 * v5);
  if ( !v7 )
  {
    ++*(_WORD *)(a1 + 154);
    v7 = *(_QWORD *)(v6 + 8 * v5);
  }
  result = *a2 ^ (*a2 ^ (v7 >> 3)) & 0xFFFFFFFFFFELL;
  *a2 = result;
  *(_QWORD *)(v6 + 8 * v5) = a2;
  return result;
}
