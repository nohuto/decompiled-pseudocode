/*
 * XREFs of ViErrorDisplayDescription @ 0x1409DB218
 * Callers:
 *     ViErrorReport1 @ 0x1405A04E8 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405A056C (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405A0600 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405A06A4 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409CA550 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409CA820 (ViGenericVerifyNewIrp.c)
 *     VfIoDetachDevice @ 0x1409D9234 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409DB030 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409DB0C8 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x1409DB150 (VfErrorReport9.c)
 *     VerifierNtCreateFile @ 0x1409EA6D0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409EA880 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1409EA9D0 (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x14059ECC4 (VfUtilDbgPrint.c)
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
