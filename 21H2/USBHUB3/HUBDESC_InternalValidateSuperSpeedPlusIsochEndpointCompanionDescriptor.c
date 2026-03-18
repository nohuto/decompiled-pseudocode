/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x1C0035714
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C003649C (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002204 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0026F14 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0032B34 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_Dddd @ 0x1C0032D94 (WPP_RECORDER_SF_Dddd.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C003304C (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  __int64 v7; // r9
  int v9; // r12d
  bool v10; // zf
  unsigned int v11; // eax
  __int64 v12; // r15
  __int64 result; // rax
  int v14; // ecx
  __int64 v15; // r8
  int v16; // eax
  int v17; // [rsp+20h] [rbp-68h]
  __int64 v18; // [rsp+28h] [rbp-60h]
  int v19; // [rsp+28h] [rbp-60h]
  int v20; // [rsp+28h] [rbp-60h]
  int v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+30h] [rbp-58h]
  int v23; // [rsp+30h] [rbp-58h]
  int v24; // [rsp+30h] [rbp-58h]
  __int64 v25; // [rsp+38h] [rbp-50h]
  int v26; // [rsp+38h] [rbp-50h]
  int v27; // [rsp+38h] [rbp-50h]
  int v28; // [rsp+40h] [rbp-48h]
  unsigned int v29; // [rsp+90h] [rbp+8h]
  int v30; // [rsp+98h] [rbp+10h] BYREF
  unsigned int *v31; // [rsp+A0h] [rbp+18h]

  v31 = a3;
  v7 = 0LL;
  v30 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    a4 = &v30;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = *(_DWORD *)(a2 + 4) == 3;
  v29 = *(_DWORD *)(a2 + 72) - v9;
  v11 = *a1;
  *a3 = v11;
  if ( !v10 || !*(_DWORD *)(a2 + 16) )
  {
    v12 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = v9;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0x5Fu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v21);
    }
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 205LL);
    *a4 = 2;
    goto LABEL_47;
  }
  v12 = a5;
  if ( (unsigned __int8)v11 >= 8u )
    goto LABEL_12;
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 208LL);
  result = (__int64)v31;
  *a4 = 2;
  if ( v29 >= 8 )
  {
    *(_DWORD *)result = 8;
    v14 = 8;
    goto LABEL_10;
  }
  v14 = *(_DWORD *)result;
  if ( *(_DWORD *)result < 8u )
  {
    *a4 = 1;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v27 = 8;
    v24 = v9;
    v20 = *a1;
    result = WPP_RECORDER_SF_DDD(
               v12,
               2u,
               (__int64)a3,
               0x60u,
               (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
               v20,
               v24,
               v27);
LABEL_47:
    if ( !*a4 )
      return result;
    goto LABEL_48;
  }
LABEL_10:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v28 = v14;
    v26 = 8;
    v23 = v9;
    v19 = *a1;
    WPP_RECORDER_SF_DDDD(
      v12,
      2u,
      5u,
      0x61u,
      (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
      v19,
      v23,
      v26,
      v28);
  }
LABEL_12:
  if ( *a1 > 8u )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *a4 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v25) = 8;
      LODWORD(v22) = v9;
      LODWORD(v18) = *a1;
      WPP_RECORDER_SF_DDD(v12, 2u, v15, 0x62u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v18, v22, v25);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 207LL);
  }
  v16 = *(_DWORD *)(a2 + 256);
  if ( (v16 & 8) != 0 )
  {
    *(_DWORD *)(a2 + 256) = v16 & 0xFFFFFFD7 | 0x20;
    if ( *v31 <= v29 )
    {
      if ( *((_WORD *)a1 + 1) )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *a4 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v22) = *((unsigned __int16 *)a1 + 1);
          LODWORD(v18) = v9;
          WPP_RECORDER_SF_DD(v12, 2u, 5u, 0x65u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v18, v22);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 210LL);
      }
      result = (unsigned int)(*((_DWORD *)a1 + 1) - 49153);
      if ( (unsigned int)result > 0xFF3FFE )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *a4 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dddd(v12, a2, (__int64)a3, v7, v17);
        result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 211LL);
      }
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *a4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = v9;
        WPP_RECORDER_SF_d(v12, 2u, 5u, 0x64u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v18);
      }
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 209LL);
    }
    goto LABEL_47;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v18) = v9;
    WPP_RECORDER_SF_d(v12, 2u, 5u, 0x63u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v18);
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 206LL);
  *a4 = 2;
LABEL_48:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_(v12, 2u, 5u, 0x67u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
  return result;
}
