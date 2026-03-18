/*
 * XREFs of HUBDESC_InternalValidateStringDescriptor @ 0x1C003917C
 * Callers:
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x1C0020420 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1C00205B0 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x1C0029610 (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x1C002995C (HUBDTX_ValidateAndCacheProductIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C0029B38 (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C003243C (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateStringDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v7; // ebx
  __int64 v9; // rbp
  char v10; // bl
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h]
  int v18; // [rsp+78h] [rbp+10h]

  v18 = 0;
  v7 = a2;
  if ( (unsigned int)a2 >= 2 )
  {
    v12 = *a1;
    v9 = a5;
    *a3 = v12;
    if ( v12 > (unsigned int)a2 )
    {
      v18 = 2;
      *a3 = a2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddd(a5, a2, (__int64)a3, 0xF0u, v15);
      (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 129LL);
    }
    if ( *a1 <= 2u )
    {
      v18 = 2;
      *a3 = v7;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF1u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v7);
      (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 130LL);
    }
    if ( a1[1] != 3 )
    {
      v18 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = a1[1];
        WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xF2u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v16, 3);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 133LL);
    }
    v13 = *a1;
    if ( (v13 & 1) != 0 )
    {
      v14 = *a3 & 0xFFFFFFFE;
      v18 = 2;
      *a3 = v14;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v14;
        LODWORD(v16) = v13;
        WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xF3u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v16, v17);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 128LL);
    }
    if ( *a1 != v7 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v7;
        LODWORD(v16) = *a1;
        WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xF4u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v16, v17);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 134LL);
    }
    if ( !v18 )
      return 1;
  }
  else
  {
    *a3 = 0;
    v9 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xEFu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, a2);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 131LL);
  }
  v10 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v9, 2u, 5u, 0xF5u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
  return v10;
}
