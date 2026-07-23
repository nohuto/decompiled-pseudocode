/*
 * XREFs of LdrpInitializeNlsInfo @ 0x1800D1EC0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitNlsTables @ 0x1800E5650 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1800E56D0 (RtlResetRtlTranslations.c)
 */

void __fastcall LdrpInitializeNlsInfo(PUSHORT *a1)
{
  _NLSTABLEINFO TableInfo; // [rsp+20h] [rbp-98h] BYREF

  RtlInitNlsTables(a1[20], a1[21], a1[22], &TableInfo);
  RtlResetRtlTranslations(&TableInfo);
}
