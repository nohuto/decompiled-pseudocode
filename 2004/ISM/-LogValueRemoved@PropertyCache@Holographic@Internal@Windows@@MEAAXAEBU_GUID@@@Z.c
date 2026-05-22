/*
 * XREFs of ?LogValueRemoved@PropertyCache@Holographic@Internal@Windows@@MEAAXAEBU_GUID@@@Z @ 0x1801602B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x1801601AC (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?PropertyCache_RemoveValue_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1@Z @ 0x18016243C (-PropertyCache_RemoveValue_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167B74 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall Windows::Internal::Holographic::PropertyCache::LogValueRemoved(
        Windows::Internal::Holographic::PropertyCache *this,
        const struct _GUID *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( HolographicDriverClientTrace::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v4,
      _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    HolographicDriverClientTrace::PropertyCache_RemoveValue_(v5, *((unsigned int *)this + 2), (char *)this + 12, a2);
  }
}
