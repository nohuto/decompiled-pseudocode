/*
 * XREFs of XamlExplorerHostWindowCreatedCallback__lambda_e7233f2d7fbbc8c446f08901eacadde9___::_scalar_deleting_destructor_ @ 0x1802FE2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::__lambda_e7233f2d7fbbc8c446f08901eacadde9_ @ 0x1802FC108 (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--__lambda_e7233f2d7fbbc8c446f08901eacadde9_.c)
 */

__int64 *__fastcall XamlExplorerHostWindowCreatedCallback__lambda_e7233f2d7fbbc8c446f08901eacadde9___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_e7233f2d7fbbc8c446f08901eacadde9_::__lambda_e7233f2d7fbbc8c446f08901eacadde9_(a1 + 6);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 3);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x1C8);
  return a1;
}
