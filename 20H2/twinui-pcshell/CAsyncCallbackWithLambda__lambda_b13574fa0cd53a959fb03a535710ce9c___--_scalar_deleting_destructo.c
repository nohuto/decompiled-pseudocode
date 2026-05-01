/*
 * XREFs of CAsyncCallbackWithLambda__lambda_b13574fa0cd53a959fb03a535710ce9c___::_scalar_deleting_destructor_ @ 0x18038A280
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall CAsyncCallbackWithLambda__lambda_b13574fa0cd53a959fb03a535710ce9c___::_scalar_deleting_destructor_(
        __int64 *Block,
        char a2)
{
  void *v4; // rcx

  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(Block + 7);
  v4 = (void *)Block[6];
  if ( v4 )
    DeleteObject(v4);
  *((_DWORD *)Block + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 4);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
