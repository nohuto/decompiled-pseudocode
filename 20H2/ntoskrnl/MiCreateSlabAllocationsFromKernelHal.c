/*
 * XREFs of MiCreateSlabAllocationsFromKernelHal @ 0x140A4EB84
 * Callers:
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 * Callees:
 *     MiActOnLargeKernelHalPages @ 0x1407974CC (MiActOnLargeKernelHalPages.c)
 */

__int64 MiCreateSlabAllocationsFromKernelHal()
{
  int v0; // ebx
  __int64 *i; // rdi
  __int64 result; // rax
  int v3; // ecx

  v0 = 0;
  for ( i = &qword_140C4CB98; ; ++i )
  {
    result = MiActOnLargeKernelHalPages(
               *(char **)(*i + 48),
               (__int64 (__fastcall *)(char *, char *))MiCreateKernelHalSlabRange);
    if ( (int)result < 0 )
      break;
    if ( ++v0 )
    {
      v3 = dword_140C50C04 | 0x10;
      dword_140C50C04 |= 0x10u;
      if ( (MiFlags & 0x8000) != 0 )
        dword_140C50C04 = v3 | 8;
      return 0LL;
    }
  }
  return result;
}
