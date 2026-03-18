/*
 * XREFs of IsCompatableDSDTRevision @ 0x1C00022D4
 * Callers:
 *     LogOp2_32 @ 0x1C0002198 (LogOp2_32.c)
 *     ParseTerm @ 0x1C00070C0 (ParseTerm.c)
 *     ParseAcquire @ 0x1C000A300 (ParseAcquire.c)
 *     ExprOp2_64 @ 0x1C0020D00 (ExprOp2_64.c)
 *     LNot @ 0x1C00211E0 (LNot.c)
 *     ParsePackage @ 0x1C0021EA0 (ParsePackage.c)
 *     ParseIntObj @ 0x1C00224C4 (ParseIntObj.c)
 *     ReadField @ 0x1C00241C0 (ReadField.c)
 *     OSInterface @ 0x1C0024C50 (OSInterface.c)
 *     CondRefOf @ 0x1C002BC70 (CondRefOf.c)
 *     ExprOp1 @ 0x1C002F9C0 (ExprOp1.c)
 *     Concat @ 0x1C0068A70 (Concat.c)
 *     Match @ 0x1C0069880 (Match.c)
 *     Match_32 @ 0x1C0069968 (Match_32.c)
 *     Match_64 @ 0x1C0069A8C (Match_64.c)
 *     ProcessWait @ 0x1C006A510 (ProcessWait.c)
 *     ToString @ 0x1C006ADB0 (ToString.c)
 *     ConvertToBuffer @ 0x1C006B0F8 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C006B2C8 (ConvertToString.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

bool IsCompatableDSDTRevision()
{
  char v0; // bl
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( ghGetAcpiTableVersion )
  {
    ghGetAcpiTableVersion(1413763908LL, &v2);
    return v2 >= 2;
  }
  return v0;
}
