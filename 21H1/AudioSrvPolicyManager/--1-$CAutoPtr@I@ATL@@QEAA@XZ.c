/*
 * XREFs of ??1?$CAutoPtr@I@ATL@@QEAA@XZ @ 0x18001D100
 * Callers:
 *     _CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor$1 @ 0x1800417A4 (_CProcess--GetActiveStreamCountStatsForEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<unsigned int>::~CAutoPtr<unsigned int>(void **a1)
{
  operator delete(*a1, (const struct std::nothrow_t *)4);
  *a1 = 0LL;
}
