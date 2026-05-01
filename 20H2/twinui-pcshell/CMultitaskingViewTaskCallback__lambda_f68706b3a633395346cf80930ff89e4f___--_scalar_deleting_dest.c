/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_f68706b3a633395346cf80930ff89e4f___::_scalar_deleting_destructor_ @ 0x180382B30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 *     _lambda_f68706b3a633395346cf80930ff89e4f_::__lambda_f68706b3a633395346cf80930ff89e4f_ @ 0x180382758 (_lambda_f68706b3a633395346cf80930ff89e4f_--__lambda_f68706b3a633395346cf80930ff89e4f_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall CMultitaskingViewTaskCallback__lambda_f68706b3a633395346cf80930ff89e4f___::_scalar_deleting_destructor_(
        __int64 *Block,
        char a2)
{
  lambda_f68706b3a633395346cf80930ff89e4f_::__lambda_f68706b3a633395346cf80930ff89e4f_(Block + 6);
  *((_DWORD *)Block + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 3);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
