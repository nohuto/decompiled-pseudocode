/*
 * XREFs of HvlQueryHypervisorTscAdjustment @ 0x140382AA4
 * Callers:
 *     PopDiagComputeEarlyHiberStats @ 0x1409915B8 (PopDiagComputeEarlyHiberStats.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlQueryHypervisorTscAdjustment()
{
  __int64 v1; // rdi
  _DWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 *v6; // rsi
  __int128 v7; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v8; // [rsp+38h] [rbp-D0h]
  __int128 v9; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v10; // [rsp+58h] [rbp-B0h]
  _BYTE v11[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v12[2064]; // [rsp+78h] [rbp-90h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( (HvlpRootFlags & 1) == 0 )
    return 0LL;
  v1 = 0LL;
  v2 = (_DWORD *)HvlpAcquireHypercallPage(&v9, 1LL, v11, 8LL, v7, *((_QWORD *)&v7 + 1), v8);
  v3 = ((__int64 (__fastcall *)(__int128 *, __int64, _BYTE *, __int64))HvlpAcquireHypercallPage)(&v7, 2LL, v12, 1032LL);
  v4 = *((_QWORD *)&v8 + 1);
  v5 = *((_QWORD *)&v10 + 1);
  v6 = (__int64 *)v3;
  *v2 = 9;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123LL, v5, v4) )
    v1 = *v6;
  HvlpReleaseHypercallPage(&v7);
  HvlpReleaseHypercallPage(&v9);
  return v1;
}
