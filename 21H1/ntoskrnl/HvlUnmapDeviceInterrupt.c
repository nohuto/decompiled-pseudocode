/*
 * XREFs of HvlUnmapDeviceInterrupt @ 0x1404F18E0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404F5274 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlUnmapDeviceInterrupt(__int64 a1, __int128 *a2)
{
  _QWORD *v4; // rax
  __int128 v5; // xmm0
  _OWORD v7[2]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v8[80]; // [rsp+40h] [rbp-68h] BYREF

  memset(v7, 0, sizeof(v7));
  v4 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v7, 1, (__int64)v8, 40LL);
  *v4 = -1LL;
  v4[1] = a1;
  v5 = *a2;
  *((_DWORD *)v4 + 8) = 0;
  *((_OWORD *)v4 + 1) = v5;
  LOWORD(a1) = HvcallInitiateHypercall(125);
  HvlpReleaseHypercallPage((__int64)v7);
  return HvlpHvToNtStatus((unsigned __int16)a1);
}
