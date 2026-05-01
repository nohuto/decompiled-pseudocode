/*
 * XREFs of XamlExplorerHostWindowCreatedCallback__lambda_fac65b3379140ccb2da51a4d302d8ccb___::_scalar_deleting_destructor_ @ 0x180310B30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_fac65b3379140ccb2da51a4d302d8ccb_::__lambda_fac65b3379140ccb2da51a4d302d8ccb_ @ 0x18030FF60 (_lambda_fac65b3379140ccb2da51a4d302d8ccb_--__lambda_fac65b3379140ccb2da51a4d302d8ccb_.c)
 */

_QWORD *__fastcall XamlExplorerHostWindowCreatedCallback__lambda_fac65b3379140ccb2da51a4d302d8ccb___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  lambda_fac65b3379140ccb2da51a4d302d8ccb_::__lambda_fac65b3379140ccb2da51a4d302d8ccb_(a1 + 6);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 3);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x1A8);
  return a1;
}
