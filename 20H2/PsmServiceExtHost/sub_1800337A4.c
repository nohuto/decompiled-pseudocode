/*
 * XREFs of sub_1800337A4 @ 0x1800337A4
 * Callers:
 *     sub_180016DD0 @ 0x180016DD0 (sub_180016DD0.c)
 *     sub_18001A3C0 @ 0x18001A3C0 (sub_18001A3C0.c)
 *     sub_180021FFC @ 0x180021FFC (sub_180021FFC.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800337A4(__int64 a1, void *a2, __int64 a3, _QWORD *a4)
{
  _OWORD ProcessInformation[2]; // [rsp+30h] [rbp-38h] BYREF

  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  LODWORD(ProcessInformation[0]) = 3;
  NtQueryInformationProcess(a2, (PROCESSINFOCLASS)65, ProcessInformation, 0x20u, 0LL);
  *a4 += *((_QWORD *)&ProcessInformation[0] + 1);
  return 0LL;
}
