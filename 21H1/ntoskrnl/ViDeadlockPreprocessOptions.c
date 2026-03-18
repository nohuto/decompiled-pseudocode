/*
 * XREFs of ViDeadlockPreprocessOptions @ 0x1409DC7A8
 * Callers:
 *     VfDeadlockAcquireResource @ 0x1409DA558 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1409DB2C8 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x1409DB7C8 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x1409DBB24 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x1409DC9DC (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x1409DCB78 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrintEx @ 0x14037C640 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x14059AB34 (VfUtilDbgPrint.c)
 */

__int64 ViDeadlockPreprocessOptions(_DWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  __int64 result; // rax
  unsigned __int64 v9; // rax

  result = (unsigned int)*a1;
  if ( (_DWORD)result == -1 )
  {
    v9 = a3 & 0xFFF;
    if ( v9 >= 0xC )
      result = 4LL;
    else
      result = *(unsigned int *)&ViDeadlockDefaultActions[2 * v9];
    *a1 = result;
  }
  if ( (_DWORD)result )
  {
    if ( (result & 0x10) != 0 )
      *a1 = 0;
    ViDeadlockIssue = a3;
    qword_140C1C9A8 = a4;
    qword_140C1C9B0 = a5;
    qword_140C1C9B8 = a6;
    VfUtilDbgPrint("************ Verifier Detected a Potential Deadlock *************\n");
    VfUtilDbgPrint("**\n");
    VfUtilDbgPrint("** ");
    if ( a2 )
      DbgPrintEx(0x65u, 0, a2, a4, a5, a6);
    VfUtilDbgPrint("\n");
    VfUtilDbgPrint("**\n");
    return VfUtilDbgPrint("*****************************************************************\n");
  }
  return result;
}
