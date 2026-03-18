/*
 * XREFs of IsPci3MsiInterrupt @ 0x1C000BBEC
 * Callers:
 *     NVMeControllerFilterResouceRequirements @ 0x1C000C2CC (NVMeControllerFilterResouceRequirements.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPci3MsiInterrupt(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) == 2
      && (*(_BYTE *)(a1 + 4) & 3) != 0
      && *(_DWORD *)(a1 + 8) == -2
      && *(_DWORD *)(a1 + 12) == -2;
}
