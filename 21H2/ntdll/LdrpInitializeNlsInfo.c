/*
 * XREFs of LdrpInitializeNlsInfo @ 0x1800D1E80
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1EC0 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitNlsTables @ 0x1800E54E0 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1800E5560 (RtlResetRtlTranslations.c)
 */

__int64 __fastcall LdrpInitializeNlsInfo(_QWORD *a1)
{
  _BYTE v2[152]; // [rsp+20h] [rbp-98h] BYREF

  RtlInitNlsTables(a1[20], a1[21], a1[22], v2);
  return RtlResetRtlTranslations(v2);
}
