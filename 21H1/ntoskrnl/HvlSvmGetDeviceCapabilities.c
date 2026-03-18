/*
 * XREFs of HvlSvmGetDeviceCapabilities @ 0x1404F14B0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404F5274 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmGetDeviceCapabilities(int a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r8
  _DWORD *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned __int16 v10; // bx
  int v11; // ecx
  int v12; // eax
  __int128 v14; // [rsp+28h] [rbp-49h] BYREF
  __int128 v15; // [rsp+38h] [rbp-39h]
  __int128 v16; // [rsp+48h] [rbp-29h] BYREF
  __int128 v17; // [rsp+58h] [rbp-19h]
  _BYTE v18[32]; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v19[32]; // [rsp+88h] [rbp+17h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  v16 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v4 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v16, 1, (__int64)v18, 16LL);
  v5 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v14, 2, (__int64)v19, 16LL);
  v6 = *((_QWORD *)&v15 + 1);
  v7 = v5;
  v8 = *((_QWORD *)&v17 + 1);
  *v4 = 0x4000000000000000LL;
  *((_WORD *)v4 + 1) = HIWORD(a1);
  v4[1] = 0LL;
  *(_WORD *)v4 = a1;
  v10 = HvcallInitiateHypercall(170, v8, v6, v9);
  if ( !v10 )
  {
    *(_DWORD *)a2 ^= (*v7 ^ *(_DWORD *)a2) & 1;
    v11 = *(_DWORD *)a2 ^ ((unsigned __int8)*(_DWORD *)a2 ^ (unsigned __int8)*v7) & 2;
    *(_DWORD *)a2 = v11;
    v12 = v11 ^ (*v7 ^ v11) & 4;
    *(_DWORD *)a2 = v12;
    *(_DWORD *)a2 = *v7 ^ (*v7 ^ v12) & 0x7FFFFFFF;
    *(_DWORD *)(a2 + 4) = v7[1];
    *(_DWORD *)(a2 + 8) = v7[2];
  }
  HvlpReleaseHypercallPage((__int64)&v14);
  HvlpReleaseHypercallPage((__int64)&v16);
  return HvlpHvToNtStatus(v10);
}
