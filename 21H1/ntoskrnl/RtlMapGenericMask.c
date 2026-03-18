/*
 * XREFs of RtlMapGenericMask @ 0x1405FFDA0
 * Callers:
 *     SepCreateAccessStateFromSubjectContext @ 0x140206730 (SepCreateAccessStateFromSubjectContext.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     RtlpCopyEffectiveAce @ 0x1406067B0 (RtlpCopyEffectiveAce.c)
 *     ObpAdjustCreatorAccessState @ 0x140616FB4 (ObpAdjustCreatorAccessState.c)
 *     ObDuplicateObject @ 0x14061ECE0 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x14062B8A0 (ObpCreateHandle.c)
 *     AlpcpCheckConnectionSecurity @ 0x14064B658 (AlpcpCheckConnectionSecurity.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1406BB850 (CmpVEPerformOpenAccessCheck.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406C89CC (ObCaptureObjectStateForDuplication.c)
 *     IoCheckDesiredAccess @ 0x14088F390 (IoCheckDesiredAccess.c)
 *     CMFCheckAccess @ 0x140953564 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x1409537B4 (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlMapGenericMask(PACCESS_MASK AccessMask, PGENERIC_MAPPING GenericMapping)
{
  ACCESS_MASK v2; // eax

  v2 = *AccessMask;
  if ( (*AccessMask & 0x80000000) != 0 )
  {
    v2 |= GenericMapping->GenericRead;
    *AccessMask = v2;
  }
  if ( (v2 & 0x40000000) != 0 )
  {
    v2 |= GenericMapping->GenericWrite;
    *AccessMask = v2;
  }
  if ( (v2 & 0x20000000) != 0 )
  {
    v2 |= GenericMapping->GenericExecute;
    *AccessMask = v2;
  }
  if ( (v2 & 0x10000000) != 0 )
    v2 |= GenericMapping->GenericAll;
  *AccessMask = v2 & 0xFFFFFFF;
}
