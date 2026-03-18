/*
 * XREFs of MiInsertVmAccessedEntry @ 0x14045BBAE
 * Callers:
 *     MiAgePte @ 0x140332110 (MiAgePte.c)
 *     MiTrimPte @ 0x1403731C0 (MiTrimPte.c)
 *     MiResetAccessBitPte @ 0x1403C48E0 (MiResetAccessBitPte.c)
 *     MiUpdateOldPte @ 0x14045BDA0 (MiUpdateOldPte.c)
 *     MiSimpleAgePte @ 0x140596EA0 (MiSimpleAgePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInsertVmAccessedEntry(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *a1;
  if ( (_DWORD)v2 == a1[1] )
    return 1LL;
  *(_QWORD *)&a1[2 * v2 + 2] = a2 & 0xFFFFFFFFFFFFF000uLL;
  result = 0LL;
  ++*a1;
  return result;
}
