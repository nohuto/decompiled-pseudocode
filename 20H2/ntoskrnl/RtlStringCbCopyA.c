/*
 * XREFs of RtlStringCbCopyA @ 0x140253AB0
 * Callers:
 *     PfpPrivSourceEnum @ 0x1406593DC (PfpPrivSourceEnum.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     ObpRegisterObject @ 0x1408E160C (ObpRegisterObject.c)
 *     EtwpLogRefSetAutoMark @ 0x140940680 (EtwpLogRefSetAutoMark.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     IopStoreArcInformation @ 0x140A5C708 (IopStoreArcInformation.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x140253AF4 (RtlStringCopyWorkerA.c)
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
