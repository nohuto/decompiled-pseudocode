/*
 * XREFs of ACPIFanPrepareImpactZoneSupport @ 0x1C0090490
 * Callers:
 *     ACPIFanStartDevice @ 0x1C0090820 (ACPIFanStartDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0004A40 (WPP_RECORDER_SF_Dqss.c)
 *     AMLIEvalPkgDataElement @ 0x1C0019244 (AMLIEvalPkgDataElement.c)
 *     AMLIFreeDataBuffs @ 0x1C001C758 (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C004DEE0 (WPP_RECORDER_SF_dqss.c)
 *     WPP_RECORDER_SF_dDqss @ 0x1C0055480 (WPP_RECORDER_SF_dDqss.c)
 *     WPP_RECORDER_SF_ddqss @ 0x1C00558D0 (WPP_RECORDER_SF_ddqss.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0090340 (ACPIAmliEvaluateDsm.c)
 *     ACPIFanValidateImpactZoneSupport @ 0x1C00AE6D4 (ACPIFanValidateImpactZoneSupport.c)
 */

__int64 __fastcall ACPIFanPrepareImpactZoneSupport(__int64 a1)
{
  __int64 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  const char *v5; // rdi
  const char *v6; // rdx
  unsigned __int16 v7; // r9
  unsigned __int8 v8; // dl
  __int64 v9; // r13
  const char *v10; // rdi
  const char *v11; // r8
  const char *v12; // rdx
  unsigned __int8 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rcx
  const char *v16; // r10
  const char *v17; // r8
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  const char *v21; // rcx
  __int16 v22; // cx
  __int64 v23; // rax
  int v24; // r8d
  const char *v25; // rdx
  const char *v26; // rcx
  const char *v27; // r10
  const char *v28; // r8
  __int64 *v29; // rcx
  __int64 v30; // rdx
  const char *v31; // rcx
  __int64 v32; // r13
  __int64 v33; // rdx
  __int64 v34; // rcx
  const char *v35; // rax
  int v36; // edx
  __int64 v37; // rcx
  const char *v38; // rax
  unsigned int v39; // r12d
  int v40; // eax
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rax
  const char *v44; // rcx
  __int64 v45; // rcx
  const char *v46; // rax
  int v47; // [rsp+28h] [rbp-79h]
  int v48; // [rsp+28h] [rbp-79h]
  int v49; // [rsp+28h] [rbp-79h]
  char v50; // [rsp+30h] [rbp-71h]
  char v51; // [rsp+38h] [rbp-69h]
  const char *v52; // [rsp+40h] [rbp-61h]
  const char *v53; // [rsp+48h] [rbp-59h]
  __int64 v54; // [rsp+58h] [rbp-49h] BYREF
  int v55; // [rsp+60h] [rbp-41h]
  __int128 v56; // [rsp+68h] [rbp-39h] BYREF
  __int128 v57; // [rsp+78h] [rbp-29h] BYREF
  __int128 v58; // [rsp+88h] [rbp-19h]
  __int64 v59; // [rsp+98h] [rbp-9h]
  __int128 v60; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v61; // [rsp+B0h] [rbp+Fh]
  __int128 v62; // [rsp+C0h] [rbp+1Fh]

  v59 = 0LL;
  *(_DWORD *)(a1 + 320) = 0;
  v2 = *(__int64 **)(a1 + 760);
  v57 = 0LL;
  v55 = 0;
  v58 = 0LL;
  v60 = 0LL;
  v54 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v56 = FAN_EXTENSIONS_DSM_UUID;
  result = ACPIAmliEvaluateDsm(v2, (__int64)&v56, 0, 0, &v60, &v54);
  if ( (int)result >= 0 )
  {
    v9 = v54;
    if ( *(_WORD *)(v54 + 2) == 3 && *(_DWORD *)(v54 + 24) )
    {
      v10 = (const char *)&unk_1C006FB8B;
      v11 = (const char *)&unk_1C006FB8B;
      v12 = (const char *)&unk_1C006FB8B;
      v13 = **(_BYTE **)(v54 + 32);
      v14 = *(_QWORD *)(a1 + 8);
      v55 = v13;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v11 = *(const char **)(a1 + 608);
        if ( (v14 & 0x400000000000LL) != 0 )
          v12 = *(const char **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x10u,
          0x23u,
          (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
          v13,
          a1,
          v11,
          v12);
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 8);
      v10 = (const char *)&unk_1C006FB8B;
      v16 = (const char *)&unk_1C006FB8B;
      v17 = (const char *)&unk_1C006FB8B;
      if ( (v15 & 0x200000000000LL) != 0 )
      {
        v16 = *(const char **)(a1 + 608);
        if ( (v15 & 0x400000000000LL) != 0 )
          v17 = *(const char **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dDqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(unsigned __int16 *)(v54 + 2),
          (__int64)v17,
          0x24u,
          v47,
          *(_WORD *)(v54 + 2),
          *(_DWORD *)(v54 + 24),
          a1,
          v16,
          v17);
    }
    AMLIFreeDataBuffs(v9);
    result = v55 & 0xF;
    if ( (_BYTE)result != 15 )
      return result;
    v18 = *(__int64 **)(a1 + 760);
    v54 = 0LL;
    v60 = 0LL;
    v61 = 0LL;
    v62 = 0LL;
    v56 = FAN_EXTENSIONS_DSM_UUID;
    result = ACPIAmliEvaluateDsm(v18, (__int64)&v56, 0, 1u, &v60, &v54);
    if ( (int)result >= 0 )
    {
      v22 = *(_WORD *)(v54 + 2);
      v23 = *(_QWORD *)(a1 + 8);
      if ( v22 == 1 )
      {
        v24 = *(_DWORD *)(v54 + 16);
        v25 = (const char *)&unk_1C006FB8B;
        *(_DWORD *)(a1 + 324) = v24;
        v26 = (const char *)&unk_1C006FB8B;
        if ( (v23 & 0x200000000000LL) != 0 )
        {
          v25 = *(const char **)(a1 + 608);
          if ( (v23 & 0x400000000000LL) != 0 )
            v26 = *(const char **)(a1 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x10u,
            0x26u,
            (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
            v24,
            a1,
            v25,
            v26);
      }
      else
      {
        v27 = (const char *)&unk_1C006FB8B;
        v28 = (const char *)&unk_1C006FB8B;
        if ( (v23 & 0x200000000000LL) != 0 )
        {
          v27 = *(const char **)(a1 + 608);
          if ( (v23 & 0x400000000000LL) != 0 )
            v28 = *(const char **)(a1 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dDqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v19,
            (__int64)v28,
            0x27u,
            v48,
            v22,
            *(_DWORD *)(v54 + 24),
            a1,
            v27,
            v28);
      }
      AMLIFreeDataBuffs(v54);
      v29 = *(__int64 **)(a1 + 760);
      v54 = 0LL;
      v60 = 0LL;
      v61 = 0LL;
      v62 = 0LL;
      v56 = FAN_EXTENSIONS_DSM_UUID;
      result = ACPIAmliEvaluateDsm(v29, (__int64)&v56, 0, 3u, &v60, &v54);
      if ( (int)result >= 0 )
      {
        v32 = v54;
        v33 = *(unsigned __int16 *)(v54 + 2);
        if ( (_WORD)v33 == 4 )
        {
          v36 = **(_DWORD **)(v54 + 32);
          if ( v36 == 4 )
          {
            v39 = 0;
            v54 = a1 + 328;
            while ( 1 )
            {
              v40 = AMLIEvalPkgDataElement(v32, v39, (__int64)&v57);
              v42 = (unsigned int)v40;
              if ( v40 < 0 )
                break;
              if ( WORD1(v57) != 1 )
              {
                v43 = *(_QWORD *)(a1 + 8);
                v44 = (const char *)&unk_1C006FB8B;
                if ( (v43 & 0x200000000000LL) != 0 )
                {
                  v10 = *(const char **)(a1 + 608);
                  if ( (v43 & 0x400000000000LL) != 0 )
                    v44 = *(const char **)(a1 + 616);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_dDqss(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    v42,
                    v41,
                    0x2Cu,
                    v49,
                    v39,
                    SBYTE2(v57),
                    a1,
                    v10,
                    v44);
                AMLIFreeDataBuffs((__int64)&v57);
                return AMLIFreeDataBuffs(v32);
              }
              *(_DWORD *)v54 = v58;
              AMLIFreeDataBuffs((__int64)&v57);
              ++v39;
              v54 += 4LL;
              if ( v39 >= 4 )
              {
                if ( (unsigned __int8)ACPIFanValidateImpactZoneSupport(a1) )
                  *(_DWORD *)(a1 + 320) = v55;
                return AMLIFreeDataBuffs(v32);
              }
            }
            v45 = *(_QWORD *)(a1 + 8);
            v46 = (const char *)&unk_1C006FB8B;
            if ( (v45 & 0x200000000000LL) != 0 )
            {
              v10 = *(const char **)(a1 + 608);
              if ( (v45 & 0x400000000000LL) != 0 )
                v46 = *(const char **)(a1 + 616);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_dDqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                v42,
                v41,
                0x2Bu,
                v49,
                v39,
                v42,
                a1,
                v10,
                v46);
          }
          else
          {
            v37 = *(_QWORD *)(a1 + 8);
            v38 = (const char *)&unk_1C006FB8B;
            if ( (v37 & 0x200000000000LL) != 0 )
            {
              v10 = *(const char **)(a1 + 608);
              if ( (v37 & 0x400000000000LL) != 0 )
                v38 = *(const char **)(a1 + 616);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_ddqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                0x10u,
                0x2Au,
                (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
                4,
                v36,
                a1,
                v10,
                v38);
          }
        }
        else
        {
          v34 = *(_QWORD *)(a1 + 8);
          v35 = (const char *)&unk_1C006FB8B;
          if ( (v34 & 0x200000000000LL) != 0 )
          {
            v10 = *(const char **)(a1 + 608);
            if ( (v34 & 0x400000000000LL) != 0 )
              v35 = *(const char **)(a1 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dDqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v33,
              4LL,
              0x29u,
              v49,
              v33,
              *(_DWORD *)(v54 + 24),
              a1,
              v10,
              v35);
        }
        return AMLIFreeDataBuffs(v32);
      }
      v30 = *(_QWORD *)(a1 + 8);
      v31 = (const char *)&unk_1C006FB8B;
      if ( (v30 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a1 + 608);
        if ( (v30 & 0x400000000000LL) != 0 )
          v31 = *(const char **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return result;
      v53 = v31;
      v7 = 40;
      v52 = v10;
      v51 = a1;
      v50 = result;
    }
    else
    {
      v20 = *(_QWORD *)(a1 + 8);
      v21 = (const char *)&unk_1C006FB8B;
      if ( (v20 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a1 + 608);
        if ( (v20 & 0x400000000000LL) != 0 )
          v21 = *(const char **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return result;
      v53 = v21;
      v7 = 37;
      v52 = v10;
      v51 = a1;
      v50 = result;
    }
    v8 = 2;
    return WPP_RECORDER_SF_Dqss(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             v8,
             0x10u,
             v7,
             (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
             v50,
             v51,
             v52,
             v53);
  }
  v4 = *(_QWORD *)(a1 + 8);
  v5 = (const char *)&unk_1C006FB8B;
  v6 = (const char *)&unk_1C006FB8B;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v5 = *(const char **)(a1 + 608);
    if ( (v4 & 0x400000000000LL) != 0 )
      v6 = *(const char **)(a1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v53 = v6;
    v7 = 34;
    v52 = v5;
    v51 = a1;
    v50 = result;
    v8 = 3;
    return WPP_RECORDER_SF_Dqss(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             v8,
             0x10u,
             v7,
             (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
             v50,
             v51,
             v52,
             v53);
  }
  return result;
}
