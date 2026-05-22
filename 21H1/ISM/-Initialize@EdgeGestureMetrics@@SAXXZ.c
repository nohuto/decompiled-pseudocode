/*
 * XREFs of ?Initialize@EdgeGestureMetrics@@SAXXZ @ 0x18017A2E4
 * Callers:
 *     ?Create@EdgyProcessor@@SAJPEAPEAV1@@Z @ 0x180177F34 (-Create@EdgyProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?GetHitTestSpanHimetric@EdgeGestureMetrics@@SA?AUD2D_VECTOR_2F@@XZ @ 0x18017A2B8 (-GetHitTestSpanHimetric@EdgeGestureMetrics@@SA-AUD2D_VECTOR_2F@@XZ.c)
 *     ?ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ @ 0x18017A6BC (-ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x18017B4CC (-OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 * Callees:
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180022264 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$make_shared@VEdgeGestureMetrics@@$$V@std@@YA?AV?$shared_ptr@VEdgeGestureMetrics@@@0@XZ @ 0x18017A104 (--$make_shared@VEdgeGestureMetrics@@$$V@std@@YA-AV-$shared_ptr@VEdgeGestureMetrics@@@0@XZ.c)
 *     ??4?$shared_ptr@VEdgeGestureMetrics@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017A15C (--4-$shared_ptr@VEdgeGestureMetrics@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void EdgeGestureMetrics::Initialize(void)
{
  _QWORD *v0; // rax
  __int64 v1; // rcx
  struct RegistryWatcher **v2; // r8
  struct RegistryWatcher **v3; // rbx
  HKEY v4; // rcx
  struct RegistryWatcher **v5; // rax
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+38h] [rbp-10h]

  if ( !EdgeGestureMetrics::s_edgeGestureMetrics )
  {
    v0 = std::make_shared<EdgeGestureMetrics,>(&v6);
    std::shared_ptr<EdgeGestureMetrics>::operator=(v1, (__int64)v0);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    v2 = EdgeGestureMetrics::s_edgeGestureMetrics;
    v3 = EdgeGestureMetrics::s_edgeGestureMetrics;
    v4 = (HKEY)*EdgeGestureMetrics::s_edgeGestureMetrics;
    if ( *EdgeGestureMetrics::s_edgeGestureMetrics )
    {
      *EdgeGestureMetrics::s_edgeGestureMetrics = 0LL;
      (*(void (__fastcall **)(HKEY))(*(_QWORD *)v4 + 16LL))(v4);
      v2 = EdgeGestureMetrics::s_edgeGestureMetrics;
    }
    if ( (int)RegistryWatcher::Create(
                v4,
                L"Software\\Microsoft\\Input\\Settings\\EdgeGestureMetrics",
                v2,
                (void (*)(void *, HKEY))lambda_f70b1d3ca5d586fe2915dfa0db6ded94_::_lambda_invoker_cdecl_,
                v3) < 0 )
    {
      v5 = EdgeGestureMetrics::s_edgeGestureMetrics;
      *((_DWORD *)EdgeGestureMetrics::s_edgeGestureMetrics + 2) = 1141473280;
      *((_DWORD *)v5 + 3) = 1141473280;
      *((_WORD *)EdgeGestureMetrics::s_edgeGestureMetrics + 8) = 35;
      *((_WORD *)EdgeGestureMetrics::s_edgeGestureMetrics + 9) = 250;
    }
  }
}
