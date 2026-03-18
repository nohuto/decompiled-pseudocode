/*
 * XREFs of MiReleaseSystemImageVa @ 0x140A95DA8
 * Callers:
 *     MiHandleBootImage @ 0x140A4E1C8 (MiHandleBootImage.c)
 * Callees:
 *     MiReleaseDriverPtes @ 0x140758DC8 (MiReleaseDriverPtes.c)
 *     MiReleasePrivilegedPtes @ 0x14076FB38 (MiReleasePrivilegedPtes.c)
 */

void __fastcall MiReleaseSystemImageVa(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rdi

  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiReleasePrivilegedPtes();
  MiReleaseDriverPtes(0, v3, a2);
}
