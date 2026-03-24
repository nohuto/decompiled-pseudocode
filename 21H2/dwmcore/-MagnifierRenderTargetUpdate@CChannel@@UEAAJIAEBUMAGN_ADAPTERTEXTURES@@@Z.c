/*
 * XREFs of ?MagnifierRenderTargetUpdate@CChannel@@UEAAJIAEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x180150740
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005D6EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005DBF8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18005E020 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 */

__int64 __fastcall CChannel::MagnifierRenderTargetUpdate(
        CChannel *this,
        unsigned int a2,
        const struct MAGN_ADAPTERTEXTURES *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  unsigned int v18; // ebx
  int v20; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v21; // [rsp+24h] [rbp-E4h] BYREF
  __int128 v22; // [rsp+28h] [rbp-E0h]
  __int128 v23; // [rsp+38h] [rbp-D0h]
  __int128 v24; // [rsp+48h] [rbp-C0h]
  __int128 v25; // [rsp+58h] [rbp-B0h]
  __int128 v26; // [rsp+68h] [rbp-A0h]
  __int128 v27; // [rsp+78h] [rbp-90h]
  __int128 v28; // [rsp+88h] [rbp-80h]
  __int128 v29; // [rsp+98h] [rbp-70h]
  __int128 v30; // [rsp+A8h] [rbp-60h]
  __int128 v31; // [rsp+B8h] [rbp-50h]
  __int128 v32; // [rsp+C8h] [rbp-40h]
  __int128 v33; // [rsp+D8h] [rbp-30h]
  __int128 v34; // [rsp+E8h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+110h] [rbp+8h] BYREF

  v35 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 102);
  v20 = 257;
  memset_0(&v21, 0, 0xD4uLL);
  v6 = *(_OWORD *)a3;
  v21 = a2;
  v7 = *((_OWORD *)a3 + 1);
  v22 = v6;
  v8 = *((_OWORD *)a3 + 2);
  v23 = v7;
  v9 = *((_OWORD *)a3 + 3);
  v24 = v8;
  v10 = *((_OWORD *)a3 + 4);
  v25 = v9;
  v11 = *((_OWORD *)a3 + 5);
  v26 = v10;
  v12 = *((_OWORD *)a3 + 6);
  v27 = v11;
  v28 = v12;
  v13 = *((_OWORD *)a3 + 7);
  a3 = (const struct MAGN_ADAPTERTEXTURES *)((char *)a3 + 128);
  v29 = v13;
  v14 = *((_OWORD *)a3 + 1);
  v30 = *(_OWORD *)a3;
  v15 = *((_OWORD *)a3 + 2);
  v31 = v14;
  v16 = *((_OWORD *)a3 + 3);
  v32 = v15;
  v17 = *((_OWORD *)a3 + 4);
  v33 = v16;
  v34 = v17;
  v18 = CChannel::SendCommand(this, &v20, 0xD8u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v35);
  return v18;
}
