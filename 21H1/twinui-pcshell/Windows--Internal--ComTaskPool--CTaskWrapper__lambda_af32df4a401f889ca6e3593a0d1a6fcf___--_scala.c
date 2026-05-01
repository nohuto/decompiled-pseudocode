/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___::_scalar_deleting_destructor_ @ 0x1803EA7A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1803EC1F0 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___::_scalar_deleting_destructor_(
        _DWORD *Block,
        char a2)
{
  Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(Block + 4);
  Block[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
