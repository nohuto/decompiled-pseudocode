/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x1403B7368
 * Callers:
 *     FsRtlpHeatRegisterVolume @ 0x14088D0C8 (FsRtlpHeatRegisterVolume.c)
 *     PnpDiagInitialize @ 0x140A53304 (PnpDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x140762CB0 (EtwRegister.c)
 */

NTSTATUS __fastcall McGenEventRegister_EtwRegister(const GUID *a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  NTSTATUS result; // eax

  result = 0;
  if ( !*a4 )
    return EtwRegister(a1, McGenControlCallbackV2, a3, a4);
  return result;
}
