/*
 * XREFs of ?FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z @ 0x1C018EA44
 * Callers:
 *     ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C0195F54 (-PopRoutedAwayTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C01990CC (-RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeRoutedAwayTarget(
        struct _KTHREAD **this,
        struct tagCPointerRoutedAwayTarget ***a2,
        __int64 a3,
        __int64 a4)
{
  struct tagCPointerRoutedAwayTarget **v5; // rax
  struct tagCPointerRoutedAwayTarget **v6; // rcx

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v5 = *a2;
  if ( (*a2)[1] != (struct tagCPointerRoutedAwayTarget *)a2
    || (v6 = a2[1], *v6 != (struct tagCPointerRoutedAwayTarget *)a2) )
  {
    __fastfail(3u);
  }
  *v6 = (struct tagCPointerRoutedAwayTarget *)v5;
  v5[1] = (struct tagCPointerRoutedAwayTarget *)v6;
  CInputDest::SetEmpty((CInputDest *)(a2 + 2));
  Win32FreePool((__int64)a2);
}
