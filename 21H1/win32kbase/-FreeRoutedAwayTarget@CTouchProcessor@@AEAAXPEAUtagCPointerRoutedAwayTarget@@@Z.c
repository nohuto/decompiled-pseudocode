/*
 * XREFs of ?FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z @ 0x1C0194744
 * Callers:
 *     ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C019BC44 (-PopRoutedAwayTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C019EDBC (-RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeRoutedAwayTarget(struct _KTHREAD **this, struct tagCPointerRoutedAwayTarget ***a2)
{
  struct tagCPointerRoutedAwayTarget **v3; // rax
  struct tagCPointerRoutedAwayTarget **v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v3 = *a2;
  if ( (*a2)[1] != (struct tagCPointerRoutedAwayTarget *)a2
    || (v4 = a2[1], *v4 != (struct tagCPointerRoutedAwayTarget *)a2) )
  {
    __fastfail(3u);
  }
  *v4 = (struct tagCPointerRoutedAwayTarget *)v3;
  v3[1] = (struct tagCPointerRoutedAwayTarget *)v4;
  CInputDest::SetEmpty((CInputDest *)(a2 + 2));
  Win32FreePool((__int64)a2, v5, v6);
}
