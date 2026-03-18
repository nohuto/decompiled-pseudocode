/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x140771F60
 * Callers:
 *     MiSessionCreate @ 0x140771A1C (MiSessionCreate.c)
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     MiInitializePteInfo @ 0x140A41880 (MiInitializePteInfo.c)
 */

__int64 __fastcall MiInitializeSystemSpaceMap(_QWORD *a1)
{
  __int64 result; // rax

  a1[1] = a1;
  *a1 = 0LL;
  result = 1LL;
  a1[2] = 0LL;
  if ( a1 == qword_140C4CCA8 )
    return MiInitializePteInfo((unsigned int)&unk_140C4EA38, 12, 0, 3, qword_140C4FAC8, 0x8000000000LL, 16);
  return result;
}
