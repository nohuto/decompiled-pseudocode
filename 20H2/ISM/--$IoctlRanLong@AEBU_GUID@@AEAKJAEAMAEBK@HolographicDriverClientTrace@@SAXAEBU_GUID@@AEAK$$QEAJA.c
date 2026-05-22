/*
 * XREFs of ??$IoctlRanLong@AEBU_GUID@@AEAKJAEAMAEBK@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEAK$$QEAJAEAMAEBK@Z @ 0x18014EDF0
 * Callers:
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x18015B2B4 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 * Callees:
 *     ?IoctlRanLong_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KJMK@Z @ 0x18015FEDC (-IoctlRanLong_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KJMK@Z.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016011C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167AE4 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::IoctlRanLong<_GUID const &,unsigned long &,long,float &,unsigned long const &>(
        struct _GUID *a1,
        unsigned int *a2,
        int *a3,
        float *a4)
{
  __int64 v8; // rcx
  HolographicDriverClientTrace *v9; // rcx

  if ( HolographicDriverClientTrace::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v8,
      _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    HolographicDriverClientTrace::IoctlRanLong_(v9, a1, *a2, *a3, *a4, 0x1F4u);
  }
}
