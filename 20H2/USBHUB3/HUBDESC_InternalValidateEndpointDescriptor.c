/*
 * XREFs of HUBDESC_InternalValidateEndpointDescriptor @ 0x1C00332A4
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0035C28 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0026A64 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C00322CC (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C00327E4 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     HUBDESC_InternalValidateLastEndpoint @ 0x1C0033038 (HUBDESC_InternalValidateLastEndpoint.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateEndpointDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // r14
  int v9; // r15d
  __int64 v10; // r12
  unsigned int v11; // ebp
  char v12; // r13
  void *v13; // r8
  __int64 v14; // r8
  unsigned int v15; // ecx
  __int64 v16; // rdx
  int v17; // edx
  unsigned __int16 v18; // bx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  unsigned __int16 v24; // r9
  __int64 v25; // rdx
  unsigned __int16 v26; // ax
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  unsigned __int16 v30; // r9
  int v31; // r9d
  __int64 v32; // rcx
  __int16 v33; // r9
  unsigned __int16 v34; // r10
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  unsigned __int16 v38; // r9
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  unsigned __int16 v42; // r9
  int v43; // r9d
  __int64 v44; // rcx
  __int16 v45; // r9
  __int16 v46; // r9
  __int64 v47; // [rsp+28h] [rbp-60h]
  __int64 v48; // [rsp+30h] [rbp-58h]
  __int64 v49; // [rsp+38h] [rbp-50h]
  __int64 v50; // [rsp+40h] [rbp-48h]
  unsigned __int8 v51; // [rsp+90h] [rbp+8h]
  int v52; // [rsp+98h] [rbp+10h] BYREF

  v5 = a4;
  v52 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v52;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = a5;
  v11 = *(_DWORD *)(a2 + 72) - v9;
  *a3 = *a1;
  HUBDESC_InternalValidateLastEndpoint(a2, v5, v10);
  v12 = 1;
  v13 = &WPP_aa79356b1e693837079f99291824f69e_Traceguids;
  if ( *v5 == 1 )
  {
LABEL_83:
    if ( !*v5 )
      return v12;
    goto LABEL_84;
  }
  if ( *a1 >= 7u )
  {
LABEL_20:
    if ( *a1 > 7u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v49) = 7;
        LODWORD(v48) = v9;
        LODWORD(v47) = *a1;
        WPP_RECORDER_SF_DDD(
          v10,
          3u,
          (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
          0x1Fu,
          (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
          v47,
          v48,
          v49);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 32))(*(_QWORD *)(a2 + 40), 80LL, v13);
    }
    if ( *a3 > v11 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v47) = v9;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x20u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v47);
      }
      v16 = 83LL;
LABEL_32:
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), v16, v13);
      goto LABEL_83;
    }
    v51 = a1[2];
    if ( (*(_DWORD *)(a2 + 256) & 1) == 0 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v47) = v9;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x21u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v47);
      }
      v16 = 85LL;
      goto LABEL_32;
    }
    if ( (a1[2] & 0xF) == 0 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v47) = v9;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x22u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v47);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 86LL, v13);
    }
    if ( (a1[2] & 0x70) != 0 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v48) = a1[2];
        LODWORD(v47) = v9;
        WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x23u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v47, v48);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 84LL);
    }
    if ( (a1[3] & 0xC0) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v48) = v9;
        LODWORD(v47) = a1[3];
        WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x24u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v47, v48);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 82LL);
    }
    v17 = a1[3];
    v18 = *((_WORD *)a1 + 2);
    if ( (a1[3] & 3) != 0 )
    {
      if ( (a1[3] & 3) != 1 )
      {
        if ( (a1[3] & 3) != 2 )
        {
          if ( (a1[3] & 3) != 3 )
            goto LABEL_74;
          v19 = *(_DWORD *)(a2 + 4);
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              v21 = v20 - 1;
              if ( v21 )
              {
                if ( v21 != 1 || v18 <= 0x400u )
                  goto LABEL_74;
                if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                  *v5 = 2;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v48) = v9;
                  LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
                  WPP_RECORDER_SF_dD(
                    v10,
                    2u,
                    5u,
                    0x35u,
                    (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                    v47,
                    v48);
                }
              }
              else
              {
                if ( (v17 & 0xFFFFFFFC) != 0 )
                {
                  if ( *(_BYTE *)(a2 + 15) )
                    *v5 = 2;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v48) = v9;
                    LODWORD(v47) = a1[3];
                    WPP_RECORDER_SF_dD(
                      v10,
                      2u,
                      5u,
                      0x31u,
                      (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                      v47,
                      v48);
                  }
                  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 108LL);
                }
                if ( (v18 & 0x7FFu) > 0x400 )
                {
                  if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                    *v5 = 2;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v48) = v9;
                    LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
                    WPP_RECORDER_SF_dD(
                      v10,
                      2u,
                      5u,
                      0x32u,
                      (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                      v47,
                      v48);
                  }
                  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
                }
                if ( v18 >= 0x2000u )
                {
                  if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                    *v5 = 2;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v48) = v9;
                    LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
                    WPP_RECORDER_SF_dD(
                      v10,
                      2u,
                      5u,
                      0x33u,
                      (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                      v47,
                      v48);
                  }
                  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
                }
                if ( (v18 & 0x1800) != 0x1800 )
                  goto LABEL_74;
                if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                  *v5 = 2;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v48) = v9;
                  LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
                  WPP_RECORDER_SF_dD(
                    v10,
                    2u,
                    5u,
                    0x34u,
                    (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                    v47,
                    v48);
                }
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
LABEL_74:
              if ( _bittest64(*(const signed __int64 **)(a2 + 144), v51) )
              {
                if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
                  *v5 = 2;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v50) = *(unsigned __int8 *)(a2 + 81);
                  LODWORD(v49) = *(unsigned __int8 *)(a2 + 80);
                  LODWORD(v48) = v9;
                  LODWORD(v47) = v51;
                  WPP_RECORDER_SF_DDDD(
                    v10,
                    2u,
                    5u,
                    0x45u,
                    (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                    v47,
                    v48,
                    v49,
                    v50);
                }
                (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 102LL);
              }
              RtlSetBit((PRTL_BITMAP)(a2 + 136), v51);
              v22 = *(_DWORD *)(a2 + 256);
              ++*(_BYTE *)(a2 + 185);
              *(_QWORD *)(a2 + 192) = a1;
              *(_DWORD *)(a2 + 256) = v22 & 0xFFFFFFEB | 4;
              goto LABEL_83;
            }
            if ( (v17 & 0xFFFFFFFC) != 0 )
            {
              if ( *(_BYTE *)(a2 + 15) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v48) = v9;
                LODWORD(v47) = a1[3];
                WPP_RECORDER_SF_dD(
                  v10,
                  2u,
                  5u,
                  0x2Eu,
                  (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                  v47,
                  v48);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 108LL);
            }
            if ( *((_WORD *)a1 + 2) > 0x40u )
            {
              *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v48) = v9;
                LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  v10,
                  2u,
                  5u,
                  0x2Fu,
                  (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                  v47,
                  v48);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
            }
            if ( a1[6] )
              goto LABEL_74;
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_127;
            v24 = 48;
          }
          else
          {
            if ( (v17 & 0xFFFFFFFC) != 0 )
            {
              if ( *(_BYTE *)(a2 + 15) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v48) = v9;
                LODWORD(v47) = a1[3];
                WPP_RECORDER_SF_dD(
                  v10,
                  2u,
                  5u,
                  0x2Au,
                  (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                  v47,
                  v48);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 108LL);
            }
            v26 = *((_WORD *)a1 + 2);
            if ( v26 > 8u )
            {
              *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v48) = v9;
                LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  v10,
                  2u,
                  5u,
                  0x2Bu,
                  (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                  v47,
                  v48);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
              v26 = *((_WORD *)a1 + 2);
            }
            if ( !v26 )
            {
              *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v48) = v9;
                LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  v10,
                  2u,
                  5u,
                  0x2Cu,
                  (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                  v47,
                  v48);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
            }
            if ( a1[6] )
              goto LABEL_74;
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_127;
            v24 = 45;
          }
          LODWORD(v48) = v9;
          LODWORD(v47) = a1[6];
          WPP_RECORDER_SF_dD(v10, 2u, 5u, v24, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v47, v48);
LABEL_127:
          v25 = 109LL;
LABEL_128:
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v25);
          goto LABEL_74;
        }
        if ( (v17 & 0xFFFFFFFC) != 0 )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v48) = v9;
            LODWORD(v47) = a1[3];
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x36u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v47, v48);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 31LL);
        }
        v27 = *(_DWORD *)(a2 + 4);
        if ( !v27 )
        {
          *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v47) = v9;
            WPP_RECORDER_SF_d(v10, 2u, 5u, 0x37u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v47);
          }
          v25 = 30LL;
          goto LABEL_128;
        }
        v28 = v27 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            if ( v29 != 1 || *((_WORD *)a1 + 2) == 1024 )
              goto LABEL_74;
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_164;
            v30 = 58;
          }
          else
          {
            if ( *((_WORD *)a1 + 2) == 512 )
              goto LABEL_74;
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_164;
            v30 = 57;
          }
        }
        else
        {
          v31 = *((unsigned __int16 *)a1 + 2);
          if ( (unsigned __int16)(v31 - 8) <= 0x38u )
          {
            v32 = 0x100000001000101LL;
            if ( _bittest64(&v32, (unsigned int)(v31 - 8)) )
              goto LABEL_74;
          }
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          {
            *v5 = 2;
            v33 = *((_WORD *)a1 + 2);
          }
          if ( !v33 )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_164;
          v30 = v34;
        }
        LODWORD(v48) = v9;
        LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
        WPP_RECORDER_SF_dD(v10, 2u, 5u, v30, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v47, v48);
LABEL_164:
        v25 = 32LL;
        goto LABEL_128;
      }
      if ( !*(_BYTE *)(a2 + 81) && v18 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v48) = *((unsigned __int16 *)a1 + 2);
          LODWORD(v47) = v9;
          WPP_RECORDER_SF_dD(v10, 3u, 5u, 0x3Bu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v47, v48);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 233LL);
      }
      v35 = *(_DWORD *)(a2 + 4);
      if ( !v35 )
      {
        *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v47) = v9;
          WPP_RECORDER_SF_d(v10, 2u, 5u, 0x3Cu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v47);
        }
        v25 = 111LL;
        goto LABEL_128;
      }
      v36 = v35 - 1;
      if ( v36 )
      {
        v37 = v36 - 1;
        if ( v37 )
        {
          if ( v37 != 1 )
            goto LABEL_74;
          if ( *((_WORD *)a1 + 2) > 0x400u )
          {
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v48) = v9;
              LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x43u,
                (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                v47,
                v48);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
          }
          if ( (unsigned __int8)(a1[6] - 1) <= 0xFu )
            goto LABEL_74;
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_202;
          v38 = 68;
        }
        else
        {
          if ( (v18 & 0x7FFu) > 0x400 )
          {
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v48) = v9;
              LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x3Fu,
                (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                v47,
                v48);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
          }
          if ( v18 >= 0x2000u )
          {
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v48) = v9;
              LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x40u,
                (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                v47,
                v48);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
          }
          if ( (v18 & 0x1800) == 0x1800 )
          {
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v48) = v9;
              LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x41u,
                (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                v47,
                v48);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
          }
          if ( (unsigned __int8)(a1[6] - 1) <= 0xFu )
            goto LABEL_74;
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_202;
          v38 = 66;
        }
      }
      else
      {
        if ( *((_WORD *)a1 + 2) > 0x3FFu )
        {
          *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v48) = v9;
            LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x3Du, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v47, v48);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
        }
        if ( (unsigned __int8)(a1[6] - 1) <= 0xFu )
          goto LABEL_74;
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_202;
        v38 = 62;
      }
      LODWORD(v48) = v9;
      LODWORD(v47) = a1[6];
      WPP_RECORDER_SF_dD(v10, 2u, 5u, v38, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v47, v48);
LABEL_202:
      v25 = 112LL;
      goto LABEL_128;
    }
    if ( (v17 & 0xFFFFFFFC) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v48) = v9;
        LODWORD(v47) = a1[3];
        WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x25u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v47, v48);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 67LL);
    }
    v39 = *(_DWORD *)(a2 + 4);
    if ( v39 )
    {
      v40 = v39 - 1;
      if ( v40 )
      {
        v41 = v40 - 1;
        if ( v41 )
        {
          if ( v41 != 1 || *((_WORD *)a1 + 2) == 512 )
            goto LABEL_74;
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_254;
          v42 = 41;
        }
        else
        {
          if ( *((_WORD *)a1 + 2) == 64 )
            goto LABEL_74;
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_254;
          v42 = 40;
        }
      }
      else
      {
        v43 = *((unsigned __int16 *)a1 + 2);
        if ( (unsigned __int16)(v43 - 8) <= 0x38u )
        {
          v44 = 0x100000001000101LL;
          if ( _bittest64(&v44, (unsigned int)(v43 - 8)) )
            goto LABEL_74;
        }
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        {
          *v5 = 2;
          v45 = *((_WORD *)a1 + 2);
        }
        if ( !v45 )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_254;
        v42 = 39;
      }
    }
    else
    {
      if ( *((_WORD *)a1 + 2) == 8 )
        goto LABEL_74;
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      {
        *v5 = 2;
        v46 = *((_WORD *)a1 + 2);
      }
      if ( (unsigned __int16)(v46 - 1) > 7u )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_254;
      v42 = 38;
    }
    LODWORD(v48) = v9;
    LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
    WPP_RECORDER_SF_dD(v10, 2u, 5u, v42, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v47, v48);
LABEL_254:
    v25 = 68LL;
    goto LABEL_128;
  }
  (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
    *(_QWORD *)(a2 + 40),
    81LL,
    &WPP_aa79356b1e693837079f99291824f69e_Traceguids);
  if ( v11 < 7 )
  {
    v15 = *a3;
  }
  else
  {
    *a3 = 7;
    v15 = 7;
  }
  if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
    *v5 = 2;
  if ( v15 >= 7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        v10,
        2u,
        5u,
        0x1Eu,
        (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
        *a1,
        v9,
        7,
        v15);
    v13 = &WPP_aa79356b1e693837079f99291824f69e_Traceguids;
    goto LABEL_20;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v10, 2u, v14, 0x1Du, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, *a1, v9, 7);
    goto LABEL_83;
  }
LABEL_84:
  v12 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v10, 2u, 5u, 0x46u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
  return v12;
}
