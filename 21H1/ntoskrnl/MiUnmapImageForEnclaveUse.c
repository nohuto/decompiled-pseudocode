/*
 * XREFs of MiUnmapImageForEnclaveUse @ 0x1408CF2AC
 * Callers:
 *     MiInitializeVsmEnclave @ 0x1408CE748 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CEC20 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiUnmapViewOfSection @ 0x140635E10 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MiUnmapImageForEnclaveUse(unsigned __int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // r8
  _DWORD *v6; // r9
  _OWORD v8[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0LL, (__int64)v8, a4);
  MiUnmapViewOfSection((_KPROCESS *)PsSecureSystemProcess, a1, 0, 0LL);
  return KiUnstackDetachProcess((__int64)v8, 0LL, v5, v6);
}
