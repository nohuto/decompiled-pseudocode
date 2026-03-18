/*
 * XREFs of MI_TIGHTER_PERMISSIONS @ 0x14033F3EC
 * Callers:
 *     MmSetAddressRangeModifiedEx @ 0x14033D860 (MmSetAddressRangeModifiedEx.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 *     MiProtectEnclavePages @ 0x1405A9744 (MiProtectEnclavePages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_TIGHTER_PERMISSIONS(__int64 a1, __int64 a2)
{
  return (a2 & 0x40) == 0 && (a1 & 0x40) != 0 || (a2 & 2) == 0 && (a1 & 2) != 0 || a2 < 0 && a1 >= 0;
}
