/*
 * XREFs of ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C0197840
 * Callers:
 *     ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x1C019B0D0 (-IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069AA8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C01969D4 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerEventTarget(
        struct _KTHREAD **this,
        const struct CPointerInfoNode *a2,
        HWND *a3)
{
  __int64 ThreadWin32Thread; // rax
  CInputDest *v8; // [rsp+40h] [rbp+8h] BYREF

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( (*(_DWORD *)a2 & 0x100) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v8 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  CTouchProcessor::GetPointerCapture(
    this,
    *((_QWORD *)a2 + 2),
    (*(_DWORD *)(ThreadWin32Thread + 1216) >> 13) & 1,
    &v8,
    0LL);
  if ( v8 )
    *a3 = CInputDest::GetWindowHandle(v8);
  else
    *a3 = (HWND)*((_QWORD *)a2 + 24);
  return 1LL;
}
