/*
 * XREFs of MiCreateRetpolineBitmap @ 0x140A955EC
 * Callers:
 *     MiInitializeRetpoline @ 0x140A54F1C (MiInitializeRetpoline.c)
 * Callees:
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiInitializeDynamicBitmap @ 0x140782AFC (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiCreateRetpolineBitmap(__int64 *a1)
{
  ULONG_PTR v2; // rdi

  v2 = MiReservePtes((__int64)&qword_140C4EDC0, 0x10000u);
  if ( !v2 )
    return 3221225495LL;
  if ( !(unsigned int)MiInitializeDynamicBitmap(&qword_140C4CAD8, (__int64)(v2 << 25) >> 16, 0x80000000LL, 15) )
  {
    MiReleasePtes((__int64)&qword_140C4EDC0, (_QWORD *)v2, 0x10000u);
    return 3221225495LL;
  }
  *a1 = (__int64)(v2 << 25) >> 16;
  return 0LL;
}
