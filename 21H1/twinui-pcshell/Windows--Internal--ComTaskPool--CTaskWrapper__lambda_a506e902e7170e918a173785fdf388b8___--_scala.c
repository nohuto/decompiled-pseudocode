/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8___::_scalar_deleting_destructor_ @ 0x1803E4940
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x180365D2C (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
volatile int **__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8___::_scalar_deleting_destructor_(
        volatile int **Block,
        char a2)
{
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(Block + 2);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
