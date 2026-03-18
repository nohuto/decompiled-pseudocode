/*
 * XREFs of HvlNotifyDebugDeviceAvailable @ 0x1404F02E0
 * Callers:
 *     PopHiberCheckResume @ 0x140993F10 (PopHiberCheckResume.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlNotifyDebugDeviceAvailable()
{
  _QWORD *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r9
  __int16 v3; // bx
  __int128 v5; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v6; // [rsp+30h] [rbp-A8h]
  _BYTE v7[112]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v8; // [rsp+B0h] [rbp-28h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v0 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v5, 1, (__int64)&v8, 8LL);
  v1 = *((_QWORD *)&v6 + 1);
  *(_DWORD *)v0 = 1;
  v3 = HvcallInitiateHypercall(135, v1, 0LL, v2);
  HvlpReleaseHypercallPage((__int64)&v5);
  if ( v3 )
    return 3221225473LL;
  if ( VslVsmEnabled )
  {
    memset(v7, 0, 0x68uLL);
    VslpEnterIumSecureMode(2u, 265, 0, (__int64)v7);
  }
  return 0LL;
}
