/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x140782970
 * Callers:
 *     MiSessionCreate @ 0x14078242C (MiSessionCreate.c)
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 * Callees:
 *     MiInitializePteInfo @ 0x140A4D378 (MiInitializePteInfo.c)
 */

__int64 __fastcall MiInitializeSystemSpaceMap(_QWORD *a1)
{
  __int64 result; // rax

  a1[1] = a1;
  *a1 = 0LL;
  result = 1LL;
  a1[2] = 0LL;
  if ( a1 == qword_140C4CBE8 )
    return MiInitializePteInfo((unsigned int)&unk_140C4E978, 12, 0, 3, qword_140C4FA08, 0x8000000000LL, 16);
  return result;
}
