/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x140774370
 * Callers:
 *     MiSessionCreate @ 0x140773E2C (MiSessionCreate.c)
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     MiInitializePteInfo @ 0x140A470DC (MiInitializePteInfo.c)
 */

__int64 __fastcall MiInitializeSystemSpaceMap(_QWORD *a1)
{
  __int64 result; // rax

  a1[1] = a1;
  *a1 = 0LL;
  result = 1LL;
  a1[2] = 0LL;
  if ( a1 == qword_140C4CB68 )
    return MiInitializePteInfo((unsigned int)&unk_140C4E8F8, 12, 0, 3, qword_140C4F988, 0x8000000000LL, 16);
  return result;
}
