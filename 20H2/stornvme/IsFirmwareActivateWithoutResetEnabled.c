/*
 * XREFs of IsFirmwareActivateWithoutResetEnabled @ 0x1C0012740
 * Callers:
 *     FirmwareActivate @ 0x1C0010104 (FirmwareActivate.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0012C70 (NVMeFirmwareActivateCompletion.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C0014280 (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C0014380 (NVMeWriteBufferFirmwareActivateCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsFirmwareActivateWithoutResetEnabled(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *(_QWORD *)(a1 + 1608);
  v2 = 0;
  if ( v1 && (*(_BYTE *)(v1 + 260) & 0x10) != 0 )
    return *(_DWORD *)(a1 + 140) == 0;
  return v2;
}
