/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_d1e6a144d1c072a4513c9689836cf967___::_scalar_deleting_destructor_ @ 0x180381F20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall CMultitaskingViewTaskCallback__lambda_d1e6a144d1c072a4513c9689836cf967___::_scalar_deleting_destructor_(
        __int64 *Block,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 6);
  *((_DWORD *)Block + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 3);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
