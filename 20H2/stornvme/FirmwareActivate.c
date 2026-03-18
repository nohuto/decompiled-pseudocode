/*
 * XREFs of FirmwareActivate @ 0x1C0010104
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C0001738 (IoctlFirmwareProcess.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0012C70 (NVMeFirmwareActivateCompletion.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     BuildFirmwareActivateCommand @ 0x1C000F978 (BuildFirmwareActivateCommand.c)
 *     IsFirmwareActivateWithoutResetEnabled @ 0x1C0012740 (IsFirmwareActivateWithoutResetEnabled.c)
 */

__int64 __fastcall FirmwareActivate(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // r10
  __int64 SrbExtension; // r14
  char v7; // bl
  _DWORD *v8; // r9
  char *v9; // rdi
  int v10; // r15d

  v3 = 0;
  SrbExtension = GetSrbExtension(a2);
  v7 = 0;
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v8 = *(_DWORD **)(v4 + 64);
  else
    v8 = *(_DWORD **)(v4 + 24);
  v9 = (char *)v8 + (unsigned int)v8[11];
  if ( v8[12] < 0xCu
    || (unsigned __int8)v9[8] > (unsigned __int8)((*(_BYTE *)(*(_QWORD *)(a1 + 1608) + 260LL) >> 1) & 7) )
  {
    v8[5] = 3;
    *(_BYTE *)(v4 + 3) = 21;
    StorPortExtendedFunction(
      87LL,
      a1,
      0LL,
      1LL,
      1,
      L"Firmware Activate",
      64LL,
      2,
      0,
      v5,
      L"SrbStatus",
      21LL,
      L"ReturnCode",
      (unsigned int)v8[5],
      L"BufferLength",
      (unsigned int)v8[12],
      L"SlotToActivate",
      (unsigned __int8)v9[8]);
    return (unsigned int)-1056964602;
  }
  else
  {
    v10 = v8[10] >> 31;
    *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
    SrbAssignQueueId(a1, v4);
    if ( (unsigned __int8)IsFirmwareActivateWithoutResetEnabled(a1) && (*(_DWORD *)(a1 + 24) & 0x400) == 0 )
      v7 = 1;
    BuildFirmwareActivateCommand(SrbExtension + 4096, v9[8], v10, v7);
    *(_QWORD *)(SrbExtension + 4224) = NVMeFirmwareActivateCompletion;
  }
  return v3;
}
