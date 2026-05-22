/*
 * XREFs of ?LogCleared@PropertyCache@Holographic@Internal@Windows@@MEAAXXZ @ 0x180160180
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016011C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?PropertyCache_Cleared_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@@Z @ 0x180162328 (-PropertyCache_Cleared_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167AE4 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall Windows::Internal::Holographic::PropertyCache::LogCleared(
        Windows::Internal::Holographic::PropertyCache *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( HolographicDriverClientTrace::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v2,
      _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    HolographicDriverClientTrace::PropertyCache_Cleared_(v3, *((unsigned int *)this + 2), (char *)this + 12);
  }
}
