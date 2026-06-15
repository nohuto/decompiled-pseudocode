/*
 * XREFs of ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x1800EA4B0
 * Callers:
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$16 @ 0x1800EBF7E (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$16.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$21 @ 0x1800EBFBA (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$21.c)
 * Callees:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800E3BCC (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 */

LPVOID *__fastcall std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(LPVOID **a1)
{
  LPVOID *v1; // rcx
  LPVOID *result; // rax

  v1 = *a1;
  if ( v1 )
    return SaDeviceParams::`scalar deleting destructor'(v1);
  return result;
}
