/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x140786750
 * Callers:
 *     MiSessionCreate @ 0x14078620C (MiSessionCreate.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     MiInitializePteInfo @ 0x140A4E918 (MiInitializePteInfo.c)
 */

__int64 __fastcall MiInitializeSystemSpaceMap(_QWORD *a1)
{
  __int64 result; // rax

  a1[1] = a1;
  *a1 = 0LL;
  result = 1LL;
  a1[2] = 0LL;
  if ( a1 == qword_140C4CD68 )
    return MiInitializePteInfo((unsigned int)&unk_140C4EAF8, 12, 0, 3, qword_140C4FB88, 0x8000000000LL, 16);
  return result;
}
