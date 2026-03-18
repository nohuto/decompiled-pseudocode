/*
 * XREFs of MiUnmapImageForEnclaveUse @ 0x1408D05FC
 * Callers:
 *     MiInitializeVsmEnclave @ 0x1408CFA98 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CFF70 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiUnmapViewOfSection @ 0x140600DD0 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MiUnmapImageForEnclaveUse(unsigned __int64 a1)
{
  _OWORD v3[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v3, 0, sizeof(v3));
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0LL, (__int64)v3);
  MiUnmapViewOfSection((_KPROCESS *)PsSecureSystemProcess, a1, 0, 0);
  return KiUnstackDetachProcess((__int64)v3, 0LL);
}
