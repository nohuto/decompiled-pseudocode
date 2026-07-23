/*
 * XREFs of MiInsertDecayClusterTimer @ 0x14022E534
 * Callers:
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiInsertDecayClusterTimer(__int64 a1)
{
  ULONG_PTR v1; // r9
  __int64 v2; // r11
  __int64 v3; // rdx
  __int64 v4; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rdx
  ULONG_PTR v7; // r10

  v1 = (a1 + 0x58000000000LL) / 48 - qword_140C4E9E0;
  v2 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  v3 = *(unsigned int *)(v2 + 4824);
  v4 = v3;
  *(_BYTE *)(a1 + 34) = ((unsigned __int8)*(_DWORD *)(v2 + 4824) << 6) | *(_BYTE *)(a1 + 34) & 0x3F;
  result = *(_QWORD *)(v2 + 8 * v3 + 4792);
  v6 = result >> 1;
  LODWORD(v6) = (result >> 1) & 0x7FFFFFFF;
  v7 = v1 << 33;
  *(_QWORD *)(a1 + 8) = 2 * (((unsigned int)result >> 1) | 0xFFFFFFFF00000000uLL);
  if ( v6 == 0x7FFFFFFF )
    result = v7 | result & 0x1FFFFFFFFLL;
  else
    *(_QWORD *)(48 * (qword_140C4E9E0 + v6) - 0x58000000000LL + 8) = v7 | *(_QWORD *)(48 * (qword_140C4E9E0 + v6)
                                                                                    - 0x58000000000LL
                                                                                    + 8) & 0x1FFFFFFFFLL;
  *(_QWORD *)(v2 + 8 * v4 + 4792) = result ^ (result ^ (2 * v1)) & 0xFFFFFFFE;
  return result;
}
