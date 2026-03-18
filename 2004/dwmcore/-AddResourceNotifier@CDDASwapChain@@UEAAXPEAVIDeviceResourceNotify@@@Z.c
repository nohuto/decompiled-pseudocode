/*
 * XREFs of ?AddResourceNotifier@CDDASwapChain@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x18024E70C
 * Callers:
 *     ?AddResourceNotifier@CDDASwapChain@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F25C0 (-AddResourceNotifier@CDDASwapChain@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDDASwapChain::AddResourceNotifier(CDDASwapChain *this, struct IDeviceResourceNotify *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this - 21) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this - 21) + 8LL) + 8LL);
  (*(void (__fastcall **)(__int64, struct IDeviceResourceNotify *))(*(_QWORD *)v2 + 40LL))(v2, a2);
}
