/*
 * XREFs of ??B?$ComPtrRef@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIInputTarget@@XZ @ 0x1800AF09C
 * Callers:
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801357A0 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801880C0 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IInputTarget>>::operator IInputTarget * *(
        __int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(*a1);
  return v1;
}
