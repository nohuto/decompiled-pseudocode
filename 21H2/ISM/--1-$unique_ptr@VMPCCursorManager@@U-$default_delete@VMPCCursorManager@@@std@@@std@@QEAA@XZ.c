/*
 * XREFs of ??1?$unique_ptr@VMPCCursorManager@@U?$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ @ 0x18007555C
 * Callers:
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$8 @ 0x18004EC2E (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$8.c)
 * Callees:
 *     ??_GMPCCursorManager@@QEAAPEAXI@Z @ 0x180075830 (--_GMPCCursorManager@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<MPCCursorManager>::~unique_ptr<MPCCursorManager>(
        MPCCursorManager **a1,
        unsigned int a2)
{
  MPCCursorManager *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return MPCCursorManager::`scalar deleting destructor'(v2, a2);
  return result;
}
