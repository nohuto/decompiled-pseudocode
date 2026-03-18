/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x1403B4368
 * Callers:
 *     FsRtlpHeatRegisterVolume @ 0x140889FD8 (FsRtlpHeatRegisterVolume.c)
 *     PnpDiagInitialize @ 0x140A5167C (PnpDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x14074F8E0 (EtwRegister.c)
 */

NTSTATUS __fastcall McGenEventRegister_EtwRegister(const GUID *a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  NTSTATUS result; // eax

  result = 0;
  if ( !*a4 )
    return EtwRegister(a1, McGenControlCallbackV2, a3, a4);
  return result;
}
