/*
 * XREFs of MiInsertVmAccessedEntry @ 0x14053B640
 * Callers:
 *     MiTrimPte @ 0x140313650 (MiTrimPte.c)
 *     MiAgePte @ 0x140344190 (MiAgePte.c)
 *     MiResetAccessBitPte @ 0x14039B940 (MiResetAccessBitPte.c)
 *     MiSimpleAgePte @ 0x14053BF00 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x14053C7F0 (MiUpdateOldPte.c)
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
