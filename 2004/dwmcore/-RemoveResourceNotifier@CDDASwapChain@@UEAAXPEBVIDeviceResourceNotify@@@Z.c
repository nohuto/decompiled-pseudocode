/*
 * XREFs of ?RemoveResourceNotifier@CDDASwapChain@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x18024EDA8
 * Callers:
 *     ?RemoveResourceNotifier@CDDASwapChain@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F2620 (-RemoveResourceNotifier@CDDASwapChain@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDDASwapChain::RemoveResourceNotifier(CDDASwapChain *this, const struct IDeviceResourceNotify *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this - 21) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this - 21) + 8LL) + 8LL);
  (*(void (__fastcall **)(__int64, const struct IDeviceResourceNotify *))(*(_QWORD *)v2 + 48LL))(v2, a2);
}
