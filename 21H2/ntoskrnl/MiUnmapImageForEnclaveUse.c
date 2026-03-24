/*
 * XREFs of MiUnmapImageForEnclaveUse @ 0x1408D3BFC
 * Callers:
 *     MiInitializeVsmEnclave @ 0x1408D3098 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D3570 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MiUnmapViewOfSection @ 0x14061E0F0 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MiUnmapImageForEnclaveUse(unsigned __int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _OWORD v6[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v6, 0, sizeof(v6));
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0LL, (__int64)v6, a4);
  MiUnmapViewOfSection((_KPROCESS *)PsSecureSystemProcess, a1, 0, 0LL);
  return KiUnstackDetachProcess((__int64)v6, 0);
}
