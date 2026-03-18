/*
 * XREFs of ??$invoke@P6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@Z @ 0x1C002616C
 * Callers:
 *     AdjustCcdDatabasePermissions @ 0x1C02EB440 (AdjustCcdDatabasePermissions.c)
 *     CheckCallerMatchesSid @ 0x1C02EBB5C (CheckCallerMatchesSid.c)
 *     CreateServiceSid @ 0x1C02EBDD8 (CreateServiceSid.c)
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C02EBED8 (DxgkPrepareCcdDatabaseForAccess.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z @ 0x1C02F1060 (-_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::invoke<void (*)(_KEY_BASIC_INFORMATION *),_KEY_BASIC_INFORMATION * &>(
        __int64 (__fastcall **a1)(_QWORD),
        _QWORD *a2)
{
  return (*a1)(*a2);
}
