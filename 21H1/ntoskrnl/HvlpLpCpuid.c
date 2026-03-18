/*
 * XREFs of HvlpLpCpuid @ 0x140A8D190
 * Callers:
 *     HvlpDiscoverTopologyAmd @ 0x140A8CDCC (HvlpDiscoverTopologyAmd.c)
 *     HvlpDiscoverTopologyIntel @ 0x140A8D018 (HvlpDiscoverTopologyIntel.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlpLpCpuid(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  _DWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // r8
  _DWORD *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r9
  __int128 v20; // [rsp+28h] [rbp-48h] BYREF
  __int128 v21; // [rsp+38h] [rbp-38h]
  __int128 v22; // [rsp+48h] [rbp-28h] BYREF
  __int128 v23; // [rsp+58h] [rbp-18h]

  v22 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( a1 == -1 )
  {
    _RAX = a2;
    __asm { cpuid }
    *a4 = _RAX;
    a4[1] = _RBX;
    a4[2] = _RCX;
    a4[3] = _RDX;
  }
  else
  {
    v13 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v22, 1, 0LL, 16LL);
    v14 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v20, 2, 0LL, 16LL);
    v15 = *((_QWORD *)&v21 + 1);
    v16 = v14;
    v17 = *((_QWORD *)&v23 + 1);
    *v13 = a1;
    v13[1] = 0x10000;
    v13[2] = a2;
    v13[3] = a3;
    HvcallInitiateHypercall(136, v17, v15, v18);
    *a4 = *v16;
    a4[1] = v16[1];
    a4[2] = v16[2];
    a4[3] = v16[3];
    HvlpReleaseHypercallPage((__int64)&v20);
    LOBYTE(_RAX) = HvlpReleaseHypercallPage((__int64)&v22);
  }
  return _RAX;
}
