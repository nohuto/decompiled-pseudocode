/*
 * XREFs of RtlStringCbCopyA @ 0x140239BD8
 * Callers:
 *     PfpPrivSourceEnum @ 0x1405EEBC8 (PfpPrivSourceEnum.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     ObpRegisterObject @ 0x1408DA45C (ObpRegisterObject.c)
 *     EtwpLogRefSetAutoMark @ 0x1409395B0 (EtwpLogRefSetAutoMark.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     IopStoreArcInformation @ 0x140A56308 (IopStoreArcInformation.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x140239C1C (RtlStringCopyWorkerA.c)
 */

NTSTATUS __stdcall RtlStringCbCopyA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringCopyWorkerA(pszDest, cbDest, 0LL, pszSrc, v5);
  if ( cbDest )
    *pszDest = 0;
  return v3;
}
