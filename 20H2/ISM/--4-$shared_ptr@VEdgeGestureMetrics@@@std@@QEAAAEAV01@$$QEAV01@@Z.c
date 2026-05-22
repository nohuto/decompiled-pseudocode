/*
 * XREFs of ??4?$shared_ptr@VEdgeGestureMetrics@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180179C0C
 * Callers:
 *     ?Initialize@EdgeGestureMetrics@@SAXXZ @ 0x180179D94 (-Initialize@EdgeGestureMetrics@@SAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

struct RegistryWatcher ***__fastcall std::shared_ptr<EdgeGestureMetrics>::operator=(__int64 a1, __int64 a2)
{
  struct RegistryWatcher **v2; // rax
  std::_Ref_count_base *v3; // r8
  std::_Ref_count_base *v4; // rcx

  v2 = *(struct RegistryWatcher ***)a2;
  *(_QWORD *)a2 = 0LL;
  v3 = *(std::_Ref_count_base **)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  v4 = qword_180208860;
  EdgeGestureMetrics::s_edgeGestureMetrics = v2;
  qword_180208860 = v3;
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return &EdgeGestureMetrics::s_edgeGestureMetrics;
}
