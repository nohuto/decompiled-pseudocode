/*
 * XREFs of HvlSvmGetDeviceCapabilities @ 0x1404F6E90
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404FAC74 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmGetDeviceCapabilities(int a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _DWORD *v5; // r14
  unsigned __int16 v6; // bx
  int v7; // ecx
  int v8; // eax
  _OWORD v10[2]; // [rsp+28h] [rbp-49h] BYREF
  _OWORD v11[2]; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v12[32]; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v13[32]; // [rsp+88h] [rbp+17h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  memset(v11, 0, sizeof(v11));
  memset(v10, 0, sizeof(v10));
  v4 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v11, 1, (__int64)v12, 16LL);
  v5 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v10, 2, (__int64)v13, 16LL);
  *v4 = 0x4000000000000000LL;
  *((_WORD *)v4 + 1) = HIWORD(a1);
  v4[1] = 0LL;
  *(_WORD *)v4 = a1;
  v6 = HvcallInitiateHypercall(170);
  if ( !v6 )
  {
    *(_DWORD *)a2 ^= (*v5 ^ *(_DWORD *)a2) & 1;
    v7 = *(_DWORD *)a2 ^ ((unsigned __int8)*(_DWORD *)a2 ^ (unsigned __int8)*v5) & 2;
    *(_DWORD *)a2 = v7;
    v8 = v7 ^ (*v5 ^ v7) & 4;
    *(_DWORD *)a2 = v8;
    *(_DWORD *)a2 = *v5 ^ (*v5 ^ v8) & 0x7FFFFFFF;
    *(_DWORD *)(a2 + 4) = v5[1];
    *(_DWORD *)(a2 + 8) = v5[2];
  }
  HvlpReleaseHypercallPage((__int64)v10);
  HvlpReleaseHypercallPage((__int64)v11);
  return HvlpHvToNtStatus(v6);
}
