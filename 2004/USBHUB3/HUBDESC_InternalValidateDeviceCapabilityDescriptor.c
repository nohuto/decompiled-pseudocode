/*
 * XREFs of HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0038400
 * Callers:
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0038CD0 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0026A64 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C00322CC (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x1C0035FE8 (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x1C00362DC (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x1C00365EC (HUBDESC_InternalValidatePlatformCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBillboardCapabilityDescriptor @ 0x1C0036C18 (HUBDESC_InternalValidateBillboardCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x1C0036ED4 (HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C0037204 (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C0037A80 (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C0038034 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        _WORD *a5,
        unsigned __int16 *a6,
        _BYTE *a7,
        int *a8,
        _BYTE *a9,
        _BYTE *a10,
        __int64 a11)
{
  int *v12; // rdi
  _WORD *v15; // r13
  unsigned __int16 *v16; // rdx
  unsigned int v17; // eax
  int v18; // ecx
  char v19; // r12
  unsigned int v20; // ebp
  __int64 v21; // rbp
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int8 **v28; // rax
  __int64 v30; // [rsp+28h] [rbp-60h]
  unsigned int v31; // [rsp+90h] [rbp+8h]
  int v32; // [rsp+98h] [rbp+10h] BYREF

  v12 = a4;
  v32 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v12 = &v32;
  }
  v15 = a5;
  if ( a5 )
    *a5 = 0;
  v16 = a6;
  if ( a6 )
    *a6 = 0;
  v17 = *a1;
  v18 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v19 = 1;
  v20 = *(_DWORD *)(a2 + 72) - v18;
  *a3 = v17;
  v31 = v20;
  v21 = a11;
  LODWORD(a5) = v18;
  if ( (unsigned __int8)v17 < 3u )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 72LL);
    if ( v31 < 3 )
    {
      *v12 = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_DDD(
          v21,
          2u,
          v22,
          0xD6u,
          (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
          (_DWORD)a5,
          *a1,
          3);
        goto LABEL_66;
      }
      goto LABEL_67;
    }
    *v12 = 2;
    *a3 = 3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        v21,
        2u,
        5u,
        0xD5u,
        (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
        (_DWORD)a5,
        *a1,
        3,
        3);
    v18 = (int)a5;
    v16 = a6;
  }
  if ( v31 < 3 )
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v12 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v30) = v18;
      WPP_RECORDER_SF_d(v21, 2u, 5u, 0xD7u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v30);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 73LL);
    goto LABEL_66;
  }
  if ( a1[2] == 2 )
  {
    HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor(a1, a2, a3, v12, a8, v21);
    if ( *v12 == 1 )
      goto LABEL_66;
    v28 = *(unsigned __int8 ***)(a2 + 80);
    if ( !*v28 )
    {
      *v28 = a1;
      goto LABEL_66;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v21, 2u, 5u, 0xD8u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
    v24 = 76LL;
  }
  else if ( a1[2] == 3 )
  {
    HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor(a1, a2, a3, v12, v15, v16, a7, v21);
    if ( *v12 == 1 )
      goto LABEL_66;
    v27 = *(_QWORD *)(a2 + 80);
    if ( !*(_QWORD *)(v27 + 8) )
    {
      *(_QWORD *)(v27 + 8) = a1;
      goto LABEL_66;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v21, 2u, 5u, 0xD9u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
    v24 = 75LL;
  }
  else if ( a1[2] == 4 )
  {
    HUBDESC_InternalValidateContainerIDCapabilityDescriptor(a1, a2, a3, v12, v21);
    if ( *v12 == 1 )
      goto LABEL_66;
    v26 = *(_QWORD *)(a2 + 80);
    if ( !*(_QWORD *)(v26 + 24) )
    {
      if ( !*(_BYTE *)(v26 + 41) )
        *(_QWORD *)(v26 + 24) = a1;
LABEL_66:
      if ( !*v12 )
        return v19;
      goto LABEL_67;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v21, 2u, 5u, 0xDBu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
    v24 = 74LL;
  }
  else
  {
    if ( a1[2] == 5 )
    {
      HUBDESC_InternalValidatePlatformCapabilityDescriptor(a1, a2, a3, v12, v21);
      goto LABEL_66;
    }
    if ( a1[2] == 6 )
    {
      HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor(a1, a2, a3, v12, v21);
      goto LABEL_66;
    }
    if ( a1[2] == 10 )
    {
      HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor(a1, a2, a3, v12, v21);
      if ( *v12 == 1 )
        goto LABEL_66;
      v25 = *(_QWORD *)(a2 + 80);
      if ( !*(_QWORD *)(v25 + 16) )
      {
        *(_QWORD *)(v25 + 16) = a1;
        goto LABEL_66;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(v21, 2u, 5u, 0xDAu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
      v24 = 203LL;
    }
    else
    {
      if ( a1[2] != 13 )
      {
        if ( a1[2] == 17 )
          HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor(a1, a2, (__int64)a3, v12, a9, a10, v21);
        goto LABEL_66;
      }
      HUBDESC_InternalValidateBillboardCapabilityDescriptor(a1, a2, (__int64)a3, v12, v21);
      if ( *v12 == 1 )
        goto LABEL_66;
      v23 = *(_QWORD *)(a2 + 80);
      if ( !*(_QWORD *)(v23 + 32) )
      {
        *(_QWORD *)(v23 + 32) = a1;
        goto LABEL_66;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(v21, 2u, 5u, 0xDCu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
      v24 = 245LL;
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v24);
  *v12 = 2;
LABEL_67:
  v19 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v21, 2u, 5u, 0xDDu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
  return v19;
}
