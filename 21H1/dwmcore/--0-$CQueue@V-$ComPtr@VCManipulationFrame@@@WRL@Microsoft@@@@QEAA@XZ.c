/*
 * XREFs of ??0?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1800D3ADC
 * Callers:
 *     _dynamic_initializer_for__CManipulationManager::s_InputQueue__ @ 0x180003560 (_dynamic_initializer_for__CManipulationManager--s_InputQueue__.c)
 * Callees:
 *     <none>
 */

void **CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>()
{
  dword_18034D530 = 0;
  qword_18034D528 = (__int64)&CManipulationManager::s_InputQueue;
  CManipulationManager::s_InputQueue = &CManipulationManager::s_InputQueue;
  byte_18034D534 = 0;
  InitializeCriticalSection(&stru_18034D538);
  return &CManipulationManager::s_InputQueue;
}
