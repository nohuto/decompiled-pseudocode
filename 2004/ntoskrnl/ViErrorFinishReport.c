/*
 * XREFs of ViErrorFinishReport @ 0x1409D524C
 * Callers:
 *     ViErrorReport1 @ 0x14059CA48 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14059CACC (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14059CB60 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14059CC04 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409C4530 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409C4800 (ViGenericVerifyNewIrp.c)
 *     VfIoDetachDevice @ 0x1409D3214 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409D5010 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409D50A8 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x1409D5130 (VfErrorReport9.c)
 *     VerifierNtCreateFile @ 0x1409E46B0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409E4860 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1409E49B0 (VerifierNtWriteFile.c)
 * Callees:
 *     DbgPrompt @ 0x140580200 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x14059B224 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x1409D51AC (VfErrorStoreTriageInformation.c)
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
