/*
 * XREFs of RtlUShortAdd @ 0x1403118B4
 * Callers:
 *     FsRtlValidateReparsePointBuffer @ 0x1403116E0 (FsRtlValidateReparsePointBuffer.c)
 *     RtlpCreateServerAcl @ 0x1406D4C44 (RtlpCreateServerAcl.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140729B68 (_SysCtxRegOpenCurrentUserKey.c)
 *     IopAllocateUnicodeString @ 0x140743F8C (IopAllocateUnicodeString.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140909310 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlAddResourceAttributeAce @ 0x140914DC0 (RtlAddResourceAttributeAce.c)
 *     SepAddTokenOriginClaim @ 0x140925380 (SepAddTokenOriginClaim.c)
 *     AslPathWildcardFindFirst @ 0x14096B26C (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardAllocMatchNode @ 0x14096C3D8 (AslpPathWildcardAllocMatchNode.c)
 *     VfSuspectDriversAllocateEntry @ 0x1409DC838 (VfSuspectDriversAllocateEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUShortAdd(USHORT usAugend, USHORT usAddend, USHORT *pusResult)
{
  bool v3; // cf
  USHORT v4; // dx

  v3 = (unsigned __int16)(usAddend + usAugend) < usAugend;
  if ( (unsigned __int16)(usAddend + usAugend) < usAugend )
    v4 = -1;
  else
    v4 = usAddend + usAugend;
  *pusResult = v4;
  return v3 ? 0xC0000095 : 0;
}
