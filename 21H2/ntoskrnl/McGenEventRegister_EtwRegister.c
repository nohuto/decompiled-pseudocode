/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x1403B74D8
 * Callers:
 *     FsRtlpHeatRegisterVolume @ 0x14088D228 (FsRtlpHeatRegisterVolume.c)
 *     PnpDiagInitialize @ 0x140A54304 (PnpDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x140762E70 (EtwRegister.c)
 */

NTSTATUS __fastcall McGenEventRegister_EtwRegister(const GUID *a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  NTSTATUS result; // eax

  result = 0;
  if ( !*a4 )
    return EtwRegister(a1, McGenControlCallbackV2, a3, a4);
  return result;
}
