/*
 * XREFs of ?HandleDuckingIdGainChanged@CApplicationManager@@QEAAJPEAUDuckingGainValueChangedContext@@@Z @ 0x18001FF60
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001E454 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::HandleDuckingIdGainChanged(
        CApplicationManager *this,
        struct DuckingGainValueChangedContext *a2)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)g_StreamClassPolicyManager + 40LL))(
           g_StreamClassPolicyManager,
           *((unsigned int *)a2 + 2),
           *(_QWORD *)a2);
}
