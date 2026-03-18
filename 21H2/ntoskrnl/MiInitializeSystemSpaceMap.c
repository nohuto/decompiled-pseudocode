/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x14082BC44
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     MiInitializePteInfo @ 0x140B04AE0 (MiInitializePteInfo.c)
 */

__int64 MiInitializeSystemSpaceMap()
{
  qword_140C4F5E8 = 0LL;
  P = 0LL;
  return MiInitializePteInfo((unsigned int)&unk_140C52F40, 12, 0, 3, qword_140C54120, 0x8000000000LL, 16);
}
