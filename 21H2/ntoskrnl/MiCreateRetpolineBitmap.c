/*
 * XREFs of MiCreateRetpolineBitmap @ 0x140A9344C
 * Callers:
 *     MiInitializeRetpoline @ 0x140A57538 (MiInitializeRetpoline.c)
 * Callees:
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiInitializeDynamicBitmap @ 0x140786A9C (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiCreateRetpolineBitmap(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR v5; // rdi

  v5 = MiReservePtes((__int64)&qword_140C4EF80, 0x10000u, a3, a4);
  if ( !v5 )
    return 3221225495LL;
  if ( !(unsigned int)MiInitializeDynamicBitmap(&qword_140C4CC98, (__int64)(v5 << 25) >> 16, 0x80000000LL, 15) )
  {
    MiReleasePtes((__int64)&qword_140C4EF80, (_QWORD *)v5, 0x10000u);
    return 3221225495LL;
  }
  *a1 = (__int64)(v5 << 25) >> 16;
  return 0LL;
}
