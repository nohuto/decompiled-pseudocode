/*
 * XREFs of MiCreateRetpolineBitmap @ 0x140A902FC
 * Callers:
 *     MiInitializeRetpoline @ 0x140A4EB9C (MiInitializeRetpoline.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x1407720EC (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiCreateRetpolineBitmap(__int64 *a1)
{
  ULONG_PTR v2; // rdi

  v2 = MiReservePtes((__int64)&qword_140C4EE80, 0x10000LL);
  if ( !v2 )
    return 3221225495LL;
  if ( !(unsigned int)MiInitializeDynamicBitmap(&qword_140C4CB98, (__int64)(v2 << 25) >> 16, 0x80000000LL, 15) )
  {
    MiReleasePtes((__int64)&qword_140C4EE80, (_QWORD *)v2, 0x10000u);
    return 3221225495LL;
  }
  *a1 = (__int64)(v2 << 25) >> 16;
  return 0LL;
}
