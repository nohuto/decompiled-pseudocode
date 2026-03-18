/*
 * XREFs of ?Present@CVisualCapture@@UEAAJ_N@Z @ 0x1801F3260
 * Callers:
 *     ?Present@CVisualCapture@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1800F1150 (-Present@CVisualCapture@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801F2CDC (-CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

__int64 __fastcall CVisualCapture::Present(CVisualCapture *this)
{
  CVisualCapture::CheckForCaptureCompleted((CVisualCapture *)((char *)this - 1984));
  if ( !*((_BYTE *)this - 55) )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 246) + 504LL) + 96LL))(
      *(_QWORD *)(*((_QWORD *)this - 246) + 504LL),
      0LL,
      1024LL);
  return 0LL;
}
