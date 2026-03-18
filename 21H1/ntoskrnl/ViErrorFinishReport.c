/*
 * XREFs of ViErrorFinishReport @ 0x1409D51EC
 * Callers:
 *     ViErrorReport1 @ 0x14059C358 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14059C3DC (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14059C470 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14059C514 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409C4520 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409C47F0 (ViGenericVerifyNewIrp.c)
 *     VfIoDetachDevice @ 0x1409D31B4 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409D4FB0 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409D5048 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x1409D50D0 (VfErrorReport9.c)
 *     VerifierNtCreateFile @ 0x1409E4650 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409E4800 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1409E4950 (VerifierNtWriteFile.c)
 * Callees:
 *     DbgPrompt @ 0x14057FAB0 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x14059AB34 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD34 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x1409D514C (VfErrorStoreTriageInformation.c)
 */

__int64 __fastcall ViErrorFinishReport(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4)
{
  ULONG_PTR v4; // rsi
  __int64 result; // rax
  _DWORD *i; // r10

  v4 = a1;
  VfUtilDbgPrint("************************************************************\n\n");
  result = 0LL;
  for ( i = &ViErrorDescriptions; *i != (_DWORD)v4; i += 4 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x3F )
      return result;
  }
  result = *((unsigned int *)&ViErrorDescriptions + 4 * result + 1);
  if ( (result & 1) == 0 )
  {
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    {
      VfErrorStoreTriageInformation(201LL, v4, a2, a3, a4);
      __debugbreak();
    }
    result = (unsigned int)MmVerifierData;
    if ( (MmVerifierData & 0x10) != 0 )
      return VerifierBugCheckIfAppropriate(0xC9u, v4, a2, a3, a4);
  }
  return result;
}
