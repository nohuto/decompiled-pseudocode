/*
 * XREFs of RtlUShortAdd @ 0x140340B04
 * Callers:
 *     FsRtlValidateReparsePointBuffer @ 0x140340930 (FsRtlValidateReparsePointBuffer.c)
 *     RtlpCreateServerAcl @ 0x140701554 (RtlpCreateServerAcl.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14071BB78 (_SysCtxRegOpenCurrentUserKey.c)
 *     IopAllocateUnicodeString @ 0x140734AFC (IopAllocateUnicodeString.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409036F0 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlAddResourceAttributeAce @ 0x14090F280 (RtlAddResourceAttributeAce.c)
 *     AslPathWildcardFindFirst @ 0x14096549C (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140966608 (AslpPathWildcardAllocMatchNode.c)
 *     VfSuspectDriversAllocateEntry @ 0x1409D6818 (VfSuspectDriversAllocateEntry.c)
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
