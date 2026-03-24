/*
 * XREFs of MiInsertVmAccessedEntry @ 0x14053B400
 * Callers:
 *     MiTrimPte @ 0x140308900 (MiTrimPte.c)
 *     MiAgePte @ 0x140339440 (MiAgePte.c)
 *     MiResetAccessBitPte @ 0x14039B7F0 (MiResetAccessBitPte.c)
 *     MiSimpleAgePte @ 0x14053BCC0 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x14053C5B0 (MiUpdateOldPte.c)
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
