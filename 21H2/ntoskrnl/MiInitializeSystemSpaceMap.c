/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x140786910
 * Callers:
 *     MiSessionCreate @ 0x1407863CC (MiSessionCreate.c)
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     MiInitializePteInfo @ 0x140A4F918 (MiInitializePteInfo.c)
 */

__int64 __fastcall MiInitializeSystemSpaceMap(_QWORD *a1)
{
  __int64 result; // rax

  a1[1] = a1;
  *a1 = 0LL;
  result = 1LL;
  a1[2] = 0LL;
  if ( a1 == qword_140C4CDA8 )
    return MiInitializePteInfo((unsigned int)&unk_140C4EB38, 12, 0, 3, qword_140C4FBC8, 0x8000000000LL, 16);
  return result;
}
