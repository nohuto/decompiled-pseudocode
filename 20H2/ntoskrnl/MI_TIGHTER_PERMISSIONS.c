/*
 * XREFs of MI_TIGHTER_PERMISSIONS @ 0x1402528DC
 * Callers:
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x140252230 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x14029ECE0 (MmSetAddressRangeModifiedEx.c)
 *     MiProtectEnclavePages @ 0x140549030 (MiProtectEnclavePages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_TIGHTER_PERMISSIONS(__int64 a1, __int64 a2)
{
  return (a2 & 0x40) == 0 && (a1 & 0x40) != 0 || (a2 & 2) == 0 && (a1 & 2) != 0 || a2 < 0 && a1 >= 0;
}
