/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAHPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@Z @ 0x180086C14
 * Callers:
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180090460 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x1800062A0 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        CBaseObject **Buffer)
{
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(Buffer + 3);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(Buffer + 1);
  return RtlDeleteElementGenericTable(Table, Buffer);
}
