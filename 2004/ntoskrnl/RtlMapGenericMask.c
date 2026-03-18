/*
 * XREFs of RtlMapGenericMask @ 0x140677E80
 * Callers:
 *     SepCreateAccessStateFromSubjectContext @ 0x140299240 (SepCreateAccessStateFromSubjectContext.c)
 *     ObDuplicateObject @ 0x1405E96C0 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x1405F6330 (ObpCreateHandle.c)
 *     AlpcpCheckConnectionSecurity @ 0x14062DAA8 (AlpcpCheckConnectionSecurity.c)
 *     ObpAdjustCreatorAccessState @ 0x14066844C (ObpAdjustCreatorAccessState.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     RtlpCopyEffectiveAce @ 0x14067E890 (RtlpCopyEffectiveAce.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1406DCA90 (CmpVEPerformOpenAccessCheck.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406E908C (ObCaptureObjectStateForDuplication.c)
 *     IoCheckDesiredAccess @ 0x1408906B0 (IoCheckDesiredAccess.c)
 *     CMFCheckAccess @ 0x140954C34 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x140954E84 (CMFCreateSecurityDescriptor.c)
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
