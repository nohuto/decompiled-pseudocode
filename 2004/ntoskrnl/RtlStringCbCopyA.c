/*
 * XREFs of RtlStringCbCopyA @ 0x1402CCA08
 * Callers:
 *     PfpPrivSourceEnum @ 0x1406980C8 (PfpPrivSourceEnum.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     ObpRegisterObject @ 0x1408DB7CC (ObpRegisterObject.c)
 *     EtwpLogRefSetAutoMark @ 0x14093A850 (EtwpLogRefSetAutoMark.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 *     IopStoreArcInformation @ 0x140A4D76C (IopStoreArcInformation.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1402CCA4C (RtlStringCopyWorkerA.c)
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
