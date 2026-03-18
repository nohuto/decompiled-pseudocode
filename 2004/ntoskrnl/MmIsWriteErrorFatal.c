/*
 * XREFs of MmIsWriteErrorFatal @ 0x1402F81A8
 * Callers:
 *     MiWriteComplete @ 0x1402F79F0 (MiWriteComplete.c)
 *     CcIsFatalWriteError @ 0x14034FA44 (CcIsFatalWriteError.c)
 *     MiFlushControlArea @ 0x1405242E4 (MiFlushControlArea.c)
 *     FsRtlLogCcFlushError @ 0x140887D00 (FsRtlLogCcFlushError.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x1402F8220 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MmIsWriteErrorFatal(int a1, int a2, NTSTATUS a3)
{
  if ( a3 != -1073741740 && a1 && a2 || a3 == -1073741672 || a3 == -1073741566 || a3 == -1073741202 || a3 == -1073741810 )
    return 1LL;
  if ( a3 == -1073741667 )
  {
    if ( !a1 || !a2 )
      return 1LL;
  }
  else if ( a3 == -1073741662 && a1 )
  {
    return 1LL;
  }
  return !FsRtlIsTotalDeviceFailure(a3);
}
