/*
 * XREFs of MiHandleInPageError @ 0x140231B9C
 * Callers:
 *     MiHardFaultPageRelease @ 0x140231A68 (MiHardFaultPageRelease.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14059DB28 (MiCopyFileOnlyGlobalSubsectionPage.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x14033FAA4 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiHandleInPageError(ULONG_PTR a1)
{
  __int64 result; // rax

  MiRestoreTransitionPte(a1);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  result = *(_QWORD *)(a1 + 16);
  if ( (result & 0x400) == 0 )
  {
    result &= 0xFFFFFFFFFFFFFFF9uLL;
    *(_QWORD *)(a1 + 16) = result;
  }
  return result;
}
