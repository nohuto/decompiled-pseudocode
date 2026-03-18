/*
 * XREFs of MiUnmapImageForEnclaveUse @ 0x14097AC04
 * Callers:
 *     MiInitializeVsmEnclave @ 0x14097A228 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14097A714 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MiUnmapViewOfSection @ 0x1406F8D30 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MiUnmapImageForEnclaveUse(unsigned __int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _OWORD v6[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v6, 0, sizeof(v6));
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0LL, (__int64)v6, a4);
  MiUnmapViewOfSection(PsSecureSystemProcess, a1, 0, 0LL);
  return KiUnstackDetachProcess((__int64)v6, 0LL);
}
