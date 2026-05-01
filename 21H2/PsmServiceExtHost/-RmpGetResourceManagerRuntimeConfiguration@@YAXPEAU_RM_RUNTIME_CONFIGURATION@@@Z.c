/*
 * XREFs of ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x180041678
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x18003FE7C (RmpCreateResourceManagerServer.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     RtlQueryResourcePolicy @ 0x18003FA7C (RtlQueryResourcePolicy.c)
 *     ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x180041BFC (-RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 *     ?RmpSystemIsSdBusBased@@YAKXZ @ 0x1800787C8 (-RmpSystemIsSdBusBased@@YAKXZ.c)
 */

void __fastcall RmpGetResourceManagerRuntimeConfiguration(struct _RM_RUNTIME_CONFIGURATION *a1)
{
  BOOL v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rdx
  char v5; // bl
  _OWORD *v6; // rax
  __int128 v7; // xmm2
  __int128 v8; // xmm1
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _OWORD *v16; // rsi
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rcx
  int v20; // r9d
  _DWORD v21[4]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v22[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h]
  int v24; // [rsp+58h] [rbp-A8h]
  int v25; // [rsp+5Ch] [rbp-A4h]
  int v26; // [rsp+60h] [rbp-A0h]
  int v27; // [rsp+64h] [rbp-9Ch]
  int v28; // [rsp+68h] [rbp-98h]
  int v29; // [rsp+6Ch] [rbp-94h]
  int v30; // [rsp+70h] [rbp-90h]
  int v31; // [rsp+74h] [rbp-8Ch]
  int v32; // [rsp+78h] [rbp-88h]
  int v33; // [rsp+7Ch] [rbp-84h]
  int v34; // [rsp+80h] [rbp-80h]
  int v35; // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+BCh] [rbp-44h]
  int v37; // [rsp+C0h] [rbp-40h]
  int v38; // [rsp+C4h] [rbp-3Ch]
  int v39; // [rsp+C8h] [rbp-38h]
  int v40; // [rsp+CCh] [rbp-34h]
  int v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D4h] [rbp-2Ch]
  int v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+DCh] [rbp-24h]
  int v45; // [rsp+E0h] [rbp-20h]
  int v46; // [rsp+E4h] [rbp-1Ch]
  char v47; // [rsp+E8h] [rbp-18h]
  _BYTE v48[176]; // [rsp+F0h] [rbp-10h] BYREF
  __m256i v49; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v50; // [rsp+1C0h] [rbp+C0h]

  memset_0(v22, 0, 0xB0uLL);
  memset_0(v48, 0, sizeof(v48));
  v2 = 0;
  if ( (int)RtlQueryResourcePolicy(0, v3, (__int64)v21) >= 0
    && v21[0] <= 10
    && (int)RtlQueryResourcePolicy(2, v4, (__int64)v21) >= 0 )
  {
    v2 = v21[0] > 10;
  }
  v5 = 0;
  if ( v2 )
  {
    v5 = 7;
    v22[0] = 7;
    if ( RmpSystemIsSdBusBased() )
    {
      v5 = 15;
      v22[0] = 15;
    }
  }
  v37 = 0;
  v35 = 35;
  v36 = 5000;
  v27 = 90;
  v29 = 90;
  v38 = 5000;
  v39 = 5000;
  v44 = 5000;
  v45 = 5000;
  v40 = 60000;
  v43 = 60000;
  v23 = 52428800LL;
  v24 = 50;
  v25 = 70;
  v26 = 170;
  v28 = 75;
  v30 = 95;
  v33 = 89;
  v31 = 10;
  v32 = 65;
  v34 = 85;
  v41 = 0x200000;
  v42 = 2;
  v46 = 1000;
  v47 = 30;
  if ( (int)RmpGetResourceManagerRegistryOverrides(
              (struct _RM_RUNTIME_CONFIGURATION *)v22,
              (struct _RM_RUNTIME_CONFIGURATION *)v48) < 0 )
  {
    if ( (unsigned int)dword_1800B31E0 > 2 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    {
      *(_QWORD *)&v50 = v21;
      v21[0] = v20;
      *((_QWORD *)&v50 + 1) = 4LL;
      tlgWriteTransfer_EventWriteTransfer(
        v19,
        (unsigned __int8 *)dword_18009AB8A,
        0LL,
        0LL,
        3u,
        (PEVENT_DATA_DESCRIPTOR)&v49);
    }
    v6 = v22;
  }
  else
  {
    v5 = v48[0];
    v6 = v48;
  }
  v7 = 0LL;
  v49.m256i_i32[0] = 0;
  *(_OWORD *)&v49.m256i_u64[2] = 0LL;
  *(__m128i *)((char *)v49.m256i_i64 + 4) = _mm_load_si128((const __m128i *)&_xmm);
  v50 = 0LL;
  if ( (v5 & 4) == 0 )
  {
    *(_QWORD *)&v50 = 0x300000003LL;
    HIDWORD(v50) = 1;
    v7 = v50;
    v49.m256i_i32[7] = 2;
  }
  v8 = *(_OWORD *)&v49.m256i_u64[2];
  *(_OWORD *)((char *)v6 + 72) = *(_OWORD *)v49.m256i_i8;
  *(_OWORD *)((char *)v6 + 88) = v8;
  *(_OWORD *)((char *)v6 + 104) = v7;
  v9 = v6[1];
  *(_OWORD *)a1 = *v6;
  v10 = v6[2];
  *((_OWORD *)a1 + 1) = v9;
  v11 = v6[3];
  *((_OWORD *)a1 + 2) = v10;
  v12 = v6[4];
  *((_OWORD *)a1 + 3) = v11;
  v13 = v6[5];
  *((_OWORD *)a1 + 4) = v12;
  v14 = v6[6];
  *((_OWORD *)a1 + 5) = v13;
  v15 = v6[8];
  *((_OWORD *)a1 + 6) = v14;
  v16 = (_OWORD *)((char *)a1 + 128);
  *(v16 - 1) = v6[7];
  v17 = v6[9];
  *v16 = v15;
  v18 = v6[10];
  v16[1] = v17;
  v16[2] = v18;
}
