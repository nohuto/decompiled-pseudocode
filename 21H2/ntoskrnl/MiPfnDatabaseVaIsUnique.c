/*
 * XREFs of MiPfnDatabaseVaIsUnique @ 0x14052EDCC
 * Callers:
 *     MiGetNextNonGapPfnPage @ 0x1403B9B70 (MiGetNextNonGapPfnPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPfnDatabaseVaIsUnique(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  result = 1LL;
  if ( (v1 & 1) == 0
    || qword_140C4EE08 != (PVOID)qword_140C4EE10 && (PVOID)((v1 >> 12) & 0xFFFFFFFFFLL) == qword_140C4EE08 )
  {
    return 0LL;
  }
  return result;
}
