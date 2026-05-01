/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0fe7ca22b45d32197121ecf13016f570___::_scalar_deleting_destructor_ @ 0x180471D20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007B66C (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0fe7ca22b45d32197121ecf13016f570___::_scalar_deleting_destructor_(
        __int64 *Block,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 3);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(Block + 2);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
