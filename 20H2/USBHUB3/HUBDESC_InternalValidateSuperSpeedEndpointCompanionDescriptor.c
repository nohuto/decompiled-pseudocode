/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C003440C
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0035C28 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C000BDB4 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0026A64 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C00322CC (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C003243C (WPP_RECORDER_SF_ddd.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C00327E4 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5,
        _BYTE *a6)
{
  int *v6; // r14
  _BYTE *v10; // r12
  int v11; // r15d
  bool v12; // zf
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // ecx
  char v16; // r12
  __int64 v17; // r8
  int v18; // r10d
  __int64 v19; // r11
  int v20; // edx
  unsigned int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned __int8 v28; // al
  __int64 v29; // rdx
  unsigned int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rdx
  int v35; // [rsp+20h] [rbp-58h]
  __int64 v36; // [rsp+28h] [rbp-50h]
  __int64 v37; // [rsp+30h] [rbp-48h]
  __int64 v38; // [rsp+38h] [rbp-40h]
  int v39; // [rsp+80h] [rbp+8h] BYREF

  v39 = 0;
  v6 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v6 = &v39;
  }
  v10 = a6;
  if ( a6 )
    *a6 = 0;
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = *(_DWORD *)(a2 + 4) == 3;
  LODWORD(a6) = *(_DWORD *)(a2 + 72) - v11;
  v13 = *a1;
  *a3 = v13;
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0x47u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v11);
    v14 = 40LL;
LABEL_150:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v14);
    goto LABEL_151;
  }
  if ( (unsigned __int8)v13 >= 6u )
  {
LABEL_20:
    if ( *a1 > 6u )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v38) = v18;
        LODWORD(v37) = v11;
        LODWORD(v36) = *a1;
        WPP_RECORDER_SF_DDD(a5, 2u, v17, 0x4Au, v19, v36, v37, v38);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 42LL);
    }
    v20 = *(_DWORD *)(a2 + 256);
    if ( (v20 & 4) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v36) = v11;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0x4Bu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v36);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 41LL);
      *v6 = 2;
      goto LABEL_30;
    }
    v22 = (unsigned int)a6;
    v23 = v20 & 0xFFFFFFEB | 0x10;
    *(_DWORD *)(a2 + 256) = v23;
    if ( *a3 > v22 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v36) = v11;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0x4Cu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v36);
      }
      v14 = 44LL;
      goto LABEL_150;
    }
    v24 = *(_QWORD *)(a2 + 192);
    switch ( *(_BYTE *)(v24 + 3) & 3 )
    {
      case 0:
        if ( a1[2] )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[2];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x4Du, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 38LL);
        }
        if ( a1[3] )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[3];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x4Eu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 37LL);
        }
        if ( !*((_WORD *)a1 + 2) )
          goto LABEL_151;
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v37) = *((unsigned __int16 *)a1 + 2);
          LODWORD(v36) = v11;
          WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x4Fu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v36, v37);
        }
        v14 = 39LL;
        goto LABEL_150;
      case 1:
        v30 = v23 & 0xFFFFFFDF;
        *(_DWORD *)(a2 + 256) = v30;
        v31 = v30 & 0xFFFFFFF7;
        *(_DWORD *)(a2 + 256) = v31 | (a1[3] >> 4) & 0xFFFFFF8;
        if ( a1[2] > 0xFu )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[2];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x58u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 50LL);
        }
        if ( a1[2] && *(_WORD *)(*(_QWORD *)(a2 + 192) + 4LL) != 1024 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v38) = *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL);
            LODWORD(v37) = a1[2];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_DDD(
              a5,
              2u,
              v32,
              0x59u,
              (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
              v36,
              v37,
              v38);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 51LL);
        }
        if ( (*(_DWORD *)(a2 + 256) & 8) == 0 && (a1[3] & 3) == 3 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[3] & 3;
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_Ld(a5, v33, 5u, 0x5Au, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 52LL);
        }
        if ( (a1[3] & 0x7C) != 0 )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[3];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x5Bu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 49LL);
        }
        v16 = 1;
        if ( (*(_DWORD *)(a2 + 256) & 8) == 0 )
        {
          v34 = (a1[2] + 1) * *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL) * ((a1[3] & 3u) + 1);
          if ( *((unsigned __int16 *)a1 + 2) <= (unsigned int)v34 )
            break;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ddd(a5, v34, (__int64)a3, 0x5Cu, v35);
          v27 = 53LL;
LABEL_67:
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), v27);
          break;
        }
        if ( *((_WORD *)a1 + 2) != 1 )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = *((unsigned __int16 *)a1 + 2);
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_Ld(a5, v31, 5u, 0x5Du, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 204LL);
        }
        break;
      case 2:
        if ( a1[2] > 0xFu )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[2];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x50u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 34LL);
        }
        v28 = a1[3];
        if ( (v28 & 0x1F) != 0 && v10 )
        {
          *v10 = 1;
          v28 = a1[3];
        }
        if ( (v28 & 0x1Fu) > 0x10 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[3] & 0x1F;
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_Ld(a5, v29, 5u, 0x51u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 35LL);
        }
        if ( a1[3] >= 0x20u )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[3];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x52u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 33LL);
        }
        if ( !*((_WORD *)a1 + 2) )
          goto LABEL_151;
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v37) = *((unsigned __int16 *)a1 + 2);
          LODWORD(v36) = v11;
          WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x53u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v36, v37);
        }
        v14 = 36LL;
        goto LABEL_150;
      case 3:
        if ( a1[2] > 0xFu )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[2];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x54u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 45LL);
        }
        if ( a1[2] && *(_WORD *)(*(_QWORD *)(a2 + 192) + 4LL) != 1024 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v38) = *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL);
            LODWORD(v37) = a1[2];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_DDD(
              a5,
              2u,
              v25,
              0x55u,
              (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
              v36,
              v37,
              v38);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 46LL);
        }
        if ( a1[3] )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[3];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x56u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 47LL);
        }
        v16 = 1;
        v26 = (a1[2] + 1) * *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL) * ((a1[3] & 3u) + 1);
        if ( *((unsigned __int16 *)a1 + 2) > (unsigned int)v26 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ddd(a5, v26, (__int64)a3, 0x57u, v35);
          v27 = 48LL;
          goto LABEL_67;
        }
        break;
      default:
LABEL_151:
        v16 = 1;
        break;
    }
LABEL_152:
    if ( !*v6 )
      return v16;
    goto LABEL_30;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 43LL);
  if ( (unsigned int)a6 < 6 )
  {
    v15 = *a3;
  }
  else
  {
    *a3 = 6;
    v15 = 6;
  }
  *v6 = 2;
  if ( v15 >= 6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        a5,
        2u,
        5u,
        0x49u,
        (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
        *a1,
        v11,
        6,
        v15);
    goto LABEL_20;
  }
  v16 = 1;
  *v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(
      a5,
      2u,
      (__int64)a3,
      0x48u,
      (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
      *a1,
      v11,
      6);
    goto LABEL_152;
  }
LABEL_30:
  v16 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a5, 2u, 5u, 0x5Eu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
  return v16;
}
