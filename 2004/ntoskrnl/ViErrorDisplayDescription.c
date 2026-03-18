/*
 * XREFs of ViErrorDisplayDescription @ 0x1409D51F8
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
 *     VfUtilDbgPrint @ 0x14059B224 (VfUtilDbgPrint.c)
 */

__int64 __fastcall ViErrorDisplayDescription(int a1)
{
  __int64 result; // rax
  _DWORD *i; // rdx

  VfUtilDbgPrint("************************************************************\nDriver Verifier detected violation:\n\n");
  LODWORD(result) = 0;
  for ( i = &ViErrorDescriptions; *i != a1; i += 4 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x3F )
      return result;
  }
  return VfUtilDbgPrint("%s\n\n", *((const char **)&ViErrorDescriptions + 2 * (unsigned int)result + 1));
}
