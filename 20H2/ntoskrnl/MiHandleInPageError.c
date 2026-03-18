/*
 * XREFs of MiHandleInPageError @ 0x1403284DC
 * Callers:
 *     MiFinishHardFault @ 0x1402C80B0 (MiFinishHardFault.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053E278 (MiCopyFileOnlyGlobalSubsectionPage.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
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
