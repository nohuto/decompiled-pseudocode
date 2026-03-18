/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x14036A950
 * Callers:
 *     RtlUnicodeStringPrintf @ 0x14036A8CC (RtlUnicodeStringPrintf.c)
 *     CmpFinishSystemHivesLoad @ 0x14078E760 (CmpFinishSystemHivesLoad.c)
 *     IopDeviceRemovalForResetComplete @ 0x14089C2F0 (IopDeviceRemovalForResetComplete.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x1408EFAC0 (PopIdleWakeGenerateDescriptionString.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_0 @ 0x14025C55C (RtlUnicodeStringValidateWorker_0.c)
 */

NTSTATUS __stdcall RtlUnicodeStringValidateDestWorker(
        PCUNICODE_STRING DestinationString,
        wchar_t **ppszDest,
        size_t *pcchDest,
        size_t *pcchDestLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  NTSTATUS result; // eax
  __int64 v7; // rcx
  unsigned __int64 *v8; // r10
  _QWORD *v9; // r11
  __int64 v10; // rdx

  *ppszDest = 0LL;
  *pcchDest = 0LL;
  result = RtlUnicodeStringValidateWorker_0(DestinationString, (const size_t)ppszDest, (ULONG)pcchDest);
  if ( result >= 0 )
  {
    if ( v7 )
    {
      v10 = *(_QWORD *)(v7 + 8);
      *v8 = (unsigned __int64)*(unsigned __int16 *)(v7 + 2) >> 1;
      *v9 = v10;
    }
  }
  return result;
}
