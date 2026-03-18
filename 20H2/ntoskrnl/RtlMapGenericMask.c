/*
 * XREFs of RtlMapGenericMask @ 0x1406002F0
 * Callers:
 *     SepCreateAccessStateFromSubjectContext @ 0x140211030 (SepCreateAccessStateFromSubjectContext.c)
 *     AlpcpCheckConnectionSecurity @ 0x1405E5AF4 (AlpcpCheckConnectionSecurity.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     RtlpCopyEffectiveAce @ 0x140606420 (RtlpCopyEffectiveAce.c)
 *     ObpCreateHandle @ 0x140616FD0 (ObpCreateHandle.c)
 *     ObDuplicateObject @ 0x140677E70 (ObDuplicateObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406A5B84 (ObCaptureObjectStateForDuplication.c)
 *     ObpAdjustCreatorAccessState @ 0x1406BD90C (ObpAdjustCreatorAccessState.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1406C3144 (CmpVEPerformOpenAccessCheck.c)
 *     IoCheckDesiredAccess @ 0x1408961A0 (IoCheckDesiredAccess.c)
 *     CMFCheckAccess @ 0x14095A9F4 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x14095AC44 (CMFCreateSecurityDescriptor.c)
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
