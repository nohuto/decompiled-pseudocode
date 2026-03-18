/*
 * XREFs of RtlUShortAdd @ 0x140303D34
 * Callers:
 *     FsRtlValidateReparsePointBuffer @ 0x140303B60 (FsRtlValidateReparsePointBuffer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407197E8 (_SysCtxRegOpenCurrentUserKey.c)
 *     IopAllocateUnicodeString @ 0x1407300CC (IopAllocateUnicodeString.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409028E0 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlAddResourceAttributeAce @ 0x14090DEE0 (RtlAddResourceAttributeAce.c)
 *     AslPathWildcardFindFirst @ 0x1409640FC (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140965268 (AslpPathWildcardAllocMatchNode.c)
 *     VfSuspectDriversAllocateEntry @ 0x1409D67B8 (VfSuspectDriversAllocateEntry.c)
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
