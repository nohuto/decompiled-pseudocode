/*
 * XREFs of ??0?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1800DB0F4
 * Callers:
 *     _dynamic_initializer_for__CManipulationManager::s_InputQueue__ @ 0x180003540 (_dynamic_initializer_for__CManipulationManager--s_InputQueue__.c)
 * Callees:
 *     <none>
 */

void **CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>()
{
  dword_1803484C0 = 0;
  qword_1803484B8 = (__int64)&CManipulationManager::s_InputQueue;
  CManipulationManager::s_InputQueue = &CManipulationManager::s_InputQueue;
  byte_1803484C4 = 0;
  InitializeCriticalSection(&CriticalSection);
  return &CManipulationManager::s_InputQueue;
}
