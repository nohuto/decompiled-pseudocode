/*
 * XREFs of MI_TIGHTER_PERMISSIONS @ 0x1402BBEA4
 * Callers:
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402BBFB0 (MmSetAddressRangeModifiedEx.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiProtectEnclavePages @ 0x140545010 (MiProtectEnclavePages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_TIGHTER_PERMISSIONS(__int64 a1, __int64 a2)
{
  return (a2 & 0x40) == 0 && (a1 & 0x40) != 0 || (a2 & 2) == 0 && (a1 & 2) != 0 || a2 < 0 && a1 >= 0;
}
