/*
 * XREFs of HvlQueryHypervisorTscAdjustment @ 0x140398488
 * Callers:
 *     PopSstDiagInitializeResumeTimer @ 0x140A529EC (PopSstDiagInitializeResumeTimer.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 HvlQueryHypervisorTscAdjustment()
{
  __int64 v1; // rdi
  _DWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 *v6; // rsi
  _QWORD v7[3]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v8; // [rsp+38h] [rbp-D0h]
  __m256i v9; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A8h]
  _BYTE v11[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v12[2064]; // [rsp+78h] [rbp-90h] BYREF

  LODWORD(v10) = 0;
  v8 = 0LL;
  v9.m256i_i32[0] = 0;
  memset(&v9.m256i_u64[1], 0, 24);
  *(_OWORD *)&v7[1] = 0LL;
  if ( (HvlpRootFlags & 1) == 0 )
    return 0LL;
  v1 = 0LL;
  v2 = (_DWORD *)HvlpAcquireHypercallPage(&v9.m256i_u64[1], 1LL, v11, 8LL, v7[1], v7[2], v8);
  v3 = ((__int64 (__fastcall *)(_QWORD *, __int64, _BYTE *, __int64))HvlpAcquireHypercallPage)(&v7[1], 2LL, v12, 1032LL);
  v4 = v9.m256i_i64[0];
  v5 = v10;
  v6 = (__int64 *)v3;
  *v2 = 9;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123LL, v5, v4) )
    v1 = *v6;
  HvlpReleaseHypercallPage(&v7[1]);
  HvlpReleaseHypercallPage(&v9.m256i_u64[1]);
  return v1;
}
