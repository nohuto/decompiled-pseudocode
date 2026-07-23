/*
 * XREFs of PiIsHVCIEnabled @ 0x1407C1E4C
 * Callers:
 *     PiIsDriverBlocked @ 0x14076B764 (PiIsDriverBlocked.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1403F3C80 (ZwQuerySystemInformation.c)
 */

bool PiIsHVCIEnabled()
{
  char v0; // bl
  __int64 SystemInformation; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, 0LL) >= 0 )
    return (SystemInformation & 0x40000000000LL) != 0;
  return v0;
}
