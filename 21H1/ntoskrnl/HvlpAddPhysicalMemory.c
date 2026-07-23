/*
 * XREFs of HvlpAddPhysicalMemory @ 0x1405C395C
 * Callers:
 *     KeConfigureDynamicMemory @ 0x14050D288 (KeConfigureDynamicMemory.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpDepositPages @ 0x1404ED1A8 (HvlpDepositPages.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404F5274 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpAddPhysicalMemory(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v4; // esi
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  unsigned __int16 v7; // bx
  __int64 v8; // rdx
  _OWORD v10[2]; // [rsp+28h] [rbp-39h] BYREF
  _OWORD v11[2]; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v12[16]; // [rsp+68h] [rbp+7h] BYREF
  _BYTE v13[32]; // [rsp+78h] [rbp+17h] BYREF

  v2 = a2;
  v4 = 0;
  memset(v11, 0, sizeof(v11));
  memset(v10, 0, sizeof(v10));
  if ( a2 )
  {
    do
    {
      v5 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v11, 1, (__int64)v13, 16LL);
      v6 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v10, 2, (__int64)v12, 8LL);
      *v5 = a1;
      v5[1] = v2;
      v7 = HvcallInitiateHypercall(188);
      v2 -= *v6;
      a1 += *v6;
      HvlpReleaseHypercallPage((__int64)v10);
      HvlpReleaseHypercallPage((__int64)v11);
      if ( v7 == 11 )
      {
        v4 = HvlpDepositPages(0, v8, 0);
        if ( v4 < 0 )
          return (unsigned int)-1073741670;
      }
      else if ( v7 )
      {
        return (unsigned int)HvlpHvToNtStatus(v7);
      }
    }
    while ( v2 );
  }
  return (unsigned int)v4;
}
