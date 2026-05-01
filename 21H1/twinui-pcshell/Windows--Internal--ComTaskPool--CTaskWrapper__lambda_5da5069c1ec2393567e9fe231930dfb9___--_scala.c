/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5da5069c1ec2393567e9fe231930dfb9___::_scalar_deleting_destructor_ @ 0x1803E2BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1803E3650 (-InternalRelease@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5da5069c1ec2393567e9fe231930dfb9___::_scalar_deleting_destructor_(
        __int64 *Block,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 3);
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease(Block + 2);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
