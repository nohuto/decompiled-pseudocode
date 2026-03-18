/*
 * XREFs of Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C006F3C0
 * Callers:
 *     <none>
 * Callees:
 *     Interrupter_SetSecondaryInterrupterCount @ 0x1C0001904 (Interrupter_SetSecondaryInterrupterCount.c)
 *     WPP_RECORDER_SF_qq @ 0x1C001665C (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Interrupter_IoResList_GetMessageCountAndType @ 0x1C006F4C4 (Interrupter_IoResList_GetMessageCountAndType.c)
 *     Interrupter_FilterMessageDescriptors @ 0x1C006F628 (Interrupter_FilterMessageDescriptors.c)
 *     Interrupter_DetermineSecondaryInterrupterCount @ 0x1C00778E0 (Interrupter_DetermineSecondaryInterrupterCount.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C00779A0 (Interrupter_FilterAllMSIResources.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceFilterRemoveResourceRequirements(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v8; // rcx
  _DWORD v9[6]; // [rsp+40h] [rbp-18h] BYREF
  char v10; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00613D8)
                 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(v4 + 72),
      4u,
      4u,
      0xD2u,
      (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
      a1,
      a2);
  v5 = *(_QWORD *)(v4 + 128);
  v6 = 0;
  v10 = 0;
  v9[0] = 0;
  v11 = 0;
  if ( (*(_QWORD *)(*(_QWORD *)(v5 + 8) + 336LL) & 0x200LL) != 0 )
  {
    Interrupter_SetSecondaryInterrupterCount(v5, 0);
    return (unsigned int)Interrupter_FilterAllMSIResources(v8, a2);
  }
  else
  {
    Interrupter_IoResList_GetMessageCountAndType(a2, v9, &v11, &v10);
    if ( v10 )
      Interrupter_DetermineSecondaryInterrupterCount(v5, v11);
    else
      Interrupter_SetSecondaryInterrupterCount(v5, 0);
    Interrupter_FilterMessageDescriptors(v5, a2, v9[0], (unsigned int)(*(_DWORD *)(v5 + 20) + 1));
  }
  return v6;
}
