/*
 * XREFs of ??1?$unique_ptr@U_WorkTask@@U?$default_delete@U_WorkTask@@@std@@@std@@QEAA@XZ @ 0x1800D4EA4
 * Callers:
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$98 @ 0x180079950 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$98.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$37 @ 0x180079B30 (_CAudioResourceManager--DestroyStream_--_1_--dtor$37.c)
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$2 @ 0x18007C9B6 (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$2.c)
 * Callees:
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x1800D531C (--_G_WorkTask@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<_WorkTask>::~unique_ptr<_WorkTask>(_WorkTask **a1, unsigned int a2)
{
  _WorkTask *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return _WorkTask::`scalar deleting destructor'(v2, a2);
  return result;
}
