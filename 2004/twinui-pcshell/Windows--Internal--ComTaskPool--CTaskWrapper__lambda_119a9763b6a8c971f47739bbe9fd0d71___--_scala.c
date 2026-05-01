/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119a9763b6a8c971f47739bbe9fd0d71___::_scalar_deleting_destructor_ @ 0x1801898E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x180189348 (--1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119a9763b6a8c971f47739bbe9fd0d71___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow((CFramePresentationTelemetry::UnpresentWindow *)(a1 + 6));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
