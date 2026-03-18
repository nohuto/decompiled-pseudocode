/*
 * XREFs of MiBuildDynamicRegion @ 0x1403B4904
 * Callers:
 *     MiInitializeKernelStacks @ 0x140A4BE70 (MiInitializeKernelStacks.c)
 *     MiInitializeSystemPtes @ 0x140A4CC24 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A4CDFC (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A4D074 (MiBuildPagedPool.c)
 *     MiInitializeDynamicRegion @ 0x140A4D134 (MiInitializeDynamicRegion.c)
 *     MiInitializeDriverImages @ 0x140A4D154 (MiInitializeDriverImages.c)
 * Callees:
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     ExGenRandom @ 0x1402D7710 (ExGenRandom.c)
 *     MiInitializeDynamicBitmap @ 0x140782AFC (MiInitializeDynamicBitmap.c)
 */

ULONG_PTR __fastcall MiBuildDynamicRegion(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  ULONG_PTR result; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx

  if ( a1 == &qword_140C4E038 )
    qword_140C4DEC8 = a3;
  a1[8] = 0LL;
  a1[4] = a2;
  v4 = a3 >> 21;
  v5 = ExGenRandom(1) & 0x7FFF;
  a1[3] = v5;
  if ( a1 == &qword_140C4DF18 )
    a1[3] = v5 & 0xFFF;
  a1[2] = v4;
  v6 = 1LL;
  if ( a1 == &qword_140C4DF18 && (v11 = a1[1]) != 0 )
  {
    v9 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    v7 = 8 * ((v4 >> 6) + ((v4 & 0x3F) != 0));
    result = MiReservePtes((__int64)&qword_140C4EDC0, (unsigned int)(v7 >> 12) + ((v7 & 0xFFF) != 0));
    v9 = result;
    if ( !result )
      return result;
    v6 = 3LL;
  }
  MiInitializeDynamicBitmap(a1, v9 << 25 >> 16, v4, v6);
  *a1 = 0LL;
  v10 = ExGenRandom(1) & 0x7FFF;
  a1[3] = v10;
  if ( a1 == &qword_140C4DF18 )
    a1[3] = v10 & 0xFFF;
  return 1LL;
}
