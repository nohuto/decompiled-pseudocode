/*
 * XREFs of HUBDESC_InternalValidateBillboardCapabilityDescriptor @ 0x1C0036C18
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0038400 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0026A64 (WPP_RECORDER_SF_DDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall HUBDESC_InternalValidateBillboardCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  int v8; // r15d
  unsigned int v9; // r14d
  unsigned __int8 result; // al
  __int64 v11; // r8
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // [rsp+28h] [rbp-50h]
  int v18; // [rsp+80h] [rbp+8h] BYREF
  unsigned int *v19; // [rsp+90h] [rbp+18h]

  v19 = (unsigned int *)a3;
  v5 = a4;
  v18 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v18;
  }
  v8 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v9 = *(_DWORD *)(a2 + 72) - v8;
  if ( v9 >= 0x30 )
  {
    v13 = a1[4];
    v14 = *a1;
    v12 = a5;
    if ( v14 != 4 * v13 + 44 )
    {
      v15 = 4 * v13 + 44;
      *v19 = v15;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDD(v12, 2u, a3, 0x9Cu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v8, v14, v15);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 236LL);
      if ( ((*a1 - 40) & 0xFB) != 0 )
      {
        if ( *(_BYTE *)(a2 + 12) || *(_WORD *)a2 == 784 )
          *v5 = 2;
      }
      else
      {
        *a1 = *(_BYTE *)v19;
      }
    }
    if ( *v19 <= v9 )
    {
      result = a1[4];
      if ( result )
      {
        if ( result <= 0x80u )
        {
          if ( a1[5] <= result )
            goto LABEL_36;
          *v5 = 1;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v17) = a1[5];
            WPP_RECORDER_SF_d(v12, 2u, 5u, 0xA0u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v17);
          }
          v16 = 241LL;
        }
        else
        {
          *v5 = 1;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v17) = a1[4];
            WPP_RECORDER_SF_d(v12, 2u, 5u, 0x9Fu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v17);
          }
          v16 = 239LL;
        }
      }
      else
      {
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v12, 2u, 5u, 0x9Eu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
        v16 = 238LL;
      }
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v8;
        WPP_RECORDER_SF_d(v12, 2u, 5u, 0x9Du, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v17);
      }
      v16 = 237LL;
    }
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v16);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 237LL);
    *v5 = 1;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v12 = a5;
    result = WPP_RECORDER_SF_DDD(
               a5,
               2u,
               v11,
               0x9Bu,
               (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
               v9,
               v8,
               48);
  }
LABEL_36:
  if ( *v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_(v12, 2u, 5u, 0xA4u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
  }
  return result;
}
