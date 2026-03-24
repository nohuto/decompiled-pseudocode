/*
 * XREFs of IsCompatableDSDTRevision @ 0x1C00022D4
 * Callers:
 *     LogOp2_32 @ 0x1C0002198 (LogOp2_32.c)
 *     ParseTerm @ 0x1C0007480 (ParseTerm.c)
 *     ParseAcquire @ 0x1C000A6C0 (ParseAcquire.c)
 *     ExprOp2_64 @ 0x1C0020F60 (ExprOp2_64.c)
 *     LNot @ 0x1C0021440 (LNot.c)
 *     ParsePackage @ 0x1C0022100 (ParsePackage.c)
 *     ParseIntObj @ 0x1C0022724 (ParseIntObj.c)
 *     ReadField @ 0x1C0024420 (ReadField.c)
 *     OSInterface @ 0x1C0024EB0 (OSInterface.c)
 *     CondRefOf @ 0x1C002BED0 (CondRefOf.c)
 *     ExprOp1 @ 0x1C002FC20 (ExprOp1.c)
 *     Concat @ 0x1C0068C00 (Concat.c)
 *     Match @ 0x1C0069A10 (Match.c)
 *     Match_32 @ 0x1C0069AF8 (Match_32.c)
 *     Match_64 @ 0x1C0069C1C (Match_64.c)
 *     ProcessWait @ 0x1C006A6A0 (ProcessWait.c)
 *     ToString @ 0x1C006AF40 (ToString.c)
 *     ConvertToBuffer @ 0x1C006B288 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C006B458 (ConvertToString.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
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
