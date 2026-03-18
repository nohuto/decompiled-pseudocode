/*
 * XREFs of ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C00E3260
 * Callers:
 *     _lambda_3837b0e11e5c1550d1f290a74bcd7a94_::operator() @ 0x1C00E2ABC (_lambda_3837b0e11e5c1550d1f290a74bcd7a94_--operator().c)
 *     GreMakeFontDir @ 0x1C02B9A6C (GreMakeFontDir.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02C0CA0 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::LoadFontFile(
        PDEVOBJ *this,
        unsigned int a2,
        unsigned __int64 *a3,
        void **a4,
        unsigned int *a5,
        struct tagDESIGNVECTOR *a6,
        unsigned int a7,
        unsigned int a8)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, void **, unsigned int *, struct tagDESIGNVECTOR *, unsigned int, unsigned int))(*(_QWORD *)this + 3048LL))(
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
