/*
 * XREFs of ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x1800EB160
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$0 @ 0x1800775B0 (_BuildDeviceGraphForStream_--_1_--dtor$0.c)
 *     _DeriveStreamGroupParametersForStream_::_1_::dtor$3 @ 0x1800776F0 (_DeriveStreamGroupParametersForStream_--_1_--dtor$3.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$11 @ 0x1800ECBD2 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$11.c)
 * Callees:
 *     ??_GStreamGroupParams@@QEAAPEAXI@Z @ 0x1800EB3CC (--_GStreamGroupParams@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(
        StreamGroupParams **a1,
        unsigned int a2)
{
  StreamGroupParams *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return StreamGroupParams::`scalar deleting destructor'(v2, a2);
  return result;
}
