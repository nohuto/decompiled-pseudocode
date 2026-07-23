/*
 * XREFs of MiBuildDynamicRegion @ 0x1403B60F4
 * Callers:
 *     MiInitializeKernelStacks @ 0x140A4E410 (MiInitializeKernelStacks.c)
 *     MiInitializeSystemPtes @ 0x140A4F1C4 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A4F39C (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A4F614 (MiBuildPagedPool.c)
 *     MiInitializeDynamicRegion @ 0x140A4F6D4 (MiInitializeDynamicRegion.c)
 *     MiInitializeDriverImages @ 0x140A4F6F4 (MiInitializeDriverImages.c)
 * Callees:
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     MiInitializeDynamicBitmap @ 0x140786A9C (MiInitializeDynamicBitmap.c)
 */

ULONG_PTR __fastcall MiBuildDynamicRegion(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rcx
  ULONG_PTR result; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx

  if ( a1 == &qword_140C4E1F8 )
    qword_140C4E088 = a3;
  a1[8] = 0LL;
  a1[4] = a2;
  v4 = a3 >> 21;
  v5 = ExGenRandom(1) & 0x7FFF;
  a1[3] = v5;
  if ( a1 == &qword_140C4E0D8 )
    a1[3] = v5 & 0xFFF;
  a1[2] = v4;
  v7 = 1LL;
  if ( a1 == &qword_140C4E0D8 && (v12 = a1[1]) != 0 )
  {
    v10 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    v8 = 8 * ((v4 >> 6) + ((v4 & 0x3F) != 0));
    result = MiReservePtes((__int64)&qword_140C4EF80, (unsigned int)(v8 >> 12) + ((v8 & 0xFFF) != 0), v6, 1uLL);
    v10 = result;
    if ( !result )
      return result;
    v7 = 3LL;
  }
  MiInitializeDynamicBitmap(a1, v10 << 25 >> 16, v4, v7);
  *a1 = 0LL;
  v11 = ExGenRandom(1) & 0x7FFF;
  a1[3] = v11;
  if ( a1 == &qword_140C4E0D8 )
    a1[3] = v11 & 0xFFF;
  return 1LL;
}
