/*
 * XREFs of ViErrorDisplayDescription @ 0x1409D5198
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
 *     VfUtilDbgPrint @ 0x14059AB34 (VfUtilDbgPrint.c)
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
