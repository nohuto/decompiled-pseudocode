/*
 * XREFs of IsCompatableDSDTRevision @ 0x1C0019BAC
 * Callers:
 *     ParseIntObj @ 0x1C000B2AC (ParseIntObj.c)
 *     ParsePackage @ 0x1C0012D00 (ParsePackage.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 *     ParseAcquire @ 0x1C0017EA0 (ParseAcquire.c)
 *     LNot @ 0x1C00191C0 (LNot.c)
 *     CondRefOf @ 0x1C0019C00 (CondRefOf.c)
 *     OSInterface @ 0x1C0022310 (OSInterface.c)
 *     Concat @ 0x1C0027500 (Concat.c)
 *     LogOp2_32 @ 0x1C00276D0 (LogOp2_32.c)
 *     ExprOp1 @ 0x1C002BDB0 (ExprOp1.c)
 *     ProcessWait @ 0x1C002D500 (ProcessWait.c)
 *     Match @ 0x1C006A510 (Match.c)
 *     Match_32 @ 0x1C006A5F8 (Match_32.c)
 *     Match_64 @ 0x1C006A71C (Match_64.c)
 *     ToString @ 0x1C006B340 (ToString.c)
 *     ConvertToBuffer @ 0x1C006B518 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C006B6E8 (ConvertToString.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
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
