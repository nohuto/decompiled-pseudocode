/*
 * XREFs of ??$invoke@P6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@Z @ 0x1C0026ED8
 * Callers:
 *     AdjustCcdDatabasePermissions @ 0x1C02EF9B0 (AdjustCcdDatabasePermissions.c)
 *     CheckCallerMatchesSid @ 0x1C02F00CC (CheckCallerMatchesSid.c)
 *     CreateServiceSid @ 0x1C02F0348 (CreateServiceSid.c)
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C02F0448 (DxgkPrepareCcdDatabaseForAccess.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z @ 0x1C02F55D0 (-_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::invoke<void (*)(_KEY_BASIC_INFORMATION *),_KEY_BASIC_INFORMATION * &>(
        __int64 (__fastcall **a1)(_QWORD),
        _QWORD *a2)
{
  return (*a1)(*a2);
}
