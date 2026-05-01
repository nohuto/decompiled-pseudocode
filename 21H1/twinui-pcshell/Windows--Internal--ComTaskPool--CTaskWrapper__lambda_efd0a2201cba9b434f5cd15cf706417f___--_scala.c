/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___::_scalar_deleting_destructor_ @ 0x1803EF4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x180360388 (-InternalRelease@-$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
volatile int **__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___::_scalar_deleting_destructor_(
        volatile int **Block,
        char a2)
{
  Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(Block + 2);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
