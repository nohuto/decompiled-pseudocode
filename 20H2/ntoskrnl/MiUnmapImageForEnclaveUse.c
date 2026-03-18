/*
 * XREFs of MiUnmapImageForEnclaveUse @ 0x1408D643C
 * Callers:
 *     MiInitializeVsmEnclave @ 0x1408D58D8 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D5DB0 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiUnmapViewOfSection @ 0x140685830 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MiUnmapImageForEnclaveUse(unsigned __int64 a1)
{
  _OWORD v3[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v3, 0, sizeof(v3));
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v3);
  MiUnmapViewOfSection((_KPROCESS *)PsSecureSystemProcess, a1, 0, 0);
  return KiUnstackDetachProcess((__int64)v3, 0);
}
