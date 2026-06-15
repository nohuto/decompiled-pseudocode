/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800EB0E0
 * Callers:
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$17 @ 0x1800ECC1A (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$17.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$22 @ 0x1800ECC56 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$22.c)
 * Callees:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800E485C (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 */

LPVOID *__fastcall wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>(
        __int64 a1)
{
  LPVOID *result; // rax
  LPVOID *v2; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(LPVOID **)(a1 + 8);
    v2 = **(LPVOID ***)a1;
    **(_QWORD **)a1 = result;
    if ( v2 )
      return SaDeviceParams::`scalar deleting destructor'(v2);
  }
  return result;
}
