/*
 * XREFs of HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C0029B38
 * Callers:
 *     HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice @ 0x1C001FA60 (HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0006A7C (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C0030F70 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x1C003917C (HUBDESC_InternalValidateStringDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0042A80 (memmove.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheSerialNumberStringDescriptor(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ecx
  int v4; // ecx
  bool v5; // cf
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // r14
  unsigned int v9; // esi
  int v10; // r9d
  __int64 v11; // rcx
  char v12; // r12
  unsigned int v13; // r13d
  unsigned int v14; // r14d
  unsigned __int16 *v15; // rdi
  unsigned int v16; // edi
  void *v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // edi
  PVOID PoolWithTag; // rax
  _DWORD *v22; // rcx
  int v23; // eax
  __int64 v24; // [rsp+28h] [rbp-41h]
  unsigned int NumberOfBytes; // [rsp+30h] [rbp-39h]
  __int64 v26; // [rsp+38h] [rbp-31h]
  _WORD v27[2]; // [rsp+40h] [rbp-29h] BYREF
  int v28; // [rsp+44h] [rbp-25h]
  __int64 v29; // [rsp+48h] [rbp-21h]
  int v30; // [rsp+50h] [rbp-19h]
  int v31; // [rsp+54h] [rbp-15h]
  __int64 (__fastcall *v32)(_QWORD, _QWORD); // [rsp+58h] [rbp-11h]
  void *v33; // [rsp+60h] [rbp-9h]
  __int64 v34; // [rsp+68h] [rbp-1h]
  _BOOL8 v35; // [rsp+70h] [rbp+7h]
  int v36; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v37; // [rsp+D8h] [rbp+6Fh]
  unsigned int v38; // [rsp+E0h] [rbp+77h]
  unsigned int v39; // [rsp+E8h] [rbp+7Fh]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00661C0);
  v27[0] = *(_WORD *)(a1 + 1990);
  v3 = *(_DWORD *)(a1 + 172);
  v29 = 0LL;
  v28 = v3;
  v4 = *(_DWORD *)(v2 + 4);
  v35 = 0LL;
  v27[1] = 0;
  *(_WORD *)((char *)&v29 + 5) = (v4 & 0x20) != 0;
  v31 = 0;
  HIBYTE(v29) = (v4 & 0x2000) != 0;
  v5 = (v4 & 0x4000) != 0;
  v6 = *(_QWORD *)(a1 + 8);
  v34 = a1;
  v7 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  v8 = *(_QWORD *)(v6 + 1432);
  BYTE4(v29) = v5;
  v26 = v8;
  v35 = !v7;
  v30 = *(_DWORD *)(v6 + 220);
  v32 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v33 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  v9 = *(_DWORD *)(a1 + 256);
  NumberOfBytes = v9;
  v39 = v9;
  v36 = 0;
  v12 = HUBDESC_InternalValidateStringDescriptor((int)a1 + 1732, v9, (unsigned int)&v36, v10, v8, (__int64)v27);
  if ( v12 )
  {
    v13 = *(unsigned __int8 *)(a1 + 1732);
    v14 = 0;
    v38 = v13;
    v9 = v13 - 2;
    v37 = v13 - 2;
    if ( (v13 - 2) >> 1 )
    {
      v15 = (unsigned __int16 *)(a1 + 1734);
      do
      {
        v11 = *v15;
        if ( !(_WORD)v11 )
          break;
        if ( (unsigned __int16)(v11 - 32) > 0x5Fu || (_DWORD)v11 == 44 )
        {
          v12 = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v24) = *v15;
            WPP_RECORDER_SF_d(v26, 2u, 5u, 0x117u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v24);
          }
          HUBMISC_LogDescriptorValidationErrorForDevice(a1, 132LL);
        }
        ++v14;
        ++v15;
      }
      while ( v14 < (v13 - 2) >> 1 );
      v9 = v37;
      v13 = v38;
    }
    if ( v12 )
    {
      v9 = v13;
      goto LABEL_17;
    }
    v8 = v26;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v8, 2u, 5u, 0x118u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
LABEL_17:
  if ( v12 )
  {
    v18 = *(void **)(a1 + 2152);
    if ( v18 )
      ExFreePoolWithTag(v18, 0x64334855u);
    v19 = v39 + 12;
    if ( (*(_DWORD *)(a1 + 1636) & 0x800) == 0 )
      v19 = NumberOfBytes;
    v20 = v19;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v19, 0x64334855u);
    *(_QWORD *)(a1 + 2152) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_19;
    *(_DWORD *)(a1 + 2148) = v20;
    memset(PoolWithTag, 0, v20);
    v22 = *(_DWORD **)(a1 + 2152);
    if ( (*(_DWORD *)(a1 + 1632) & 2) != 0 )
    {
      if ( *(_WORD *)(a1 + 1990) < 0x300u )
      {
        *(_QWORD *)v22 = *(_QWORD *)L"MSFT20";
        v23 = *(_DWORD *)L"20";
LABEL_32:
        v22[2] = v23;
        v22 += 3;
        goto LABEL_33;
      }
    }
    else if ( (*(_DWORD *)(a1 + 1636) & 0x800) == 0 )
    {
LABEL_33:
      memmove(v22, (const void *)(a1 + 1734), v9 - 2LL);
      _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x40u);
      return 4077;
    }
    *(_QWORD *)v22 = *(_QWORD *)L"MSFT30";
    v23 = *(_DWORD *)L"30";
    goto LABEL_32;
  }
  *(_DWORD *)(a1 + 2432) = 1073807384;
LABEL_19:
  v16 = 4065;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      v11,
      &USBHUB3_ETW_EVENT_INVALID_SERIAL_NUMBER_STRING_DESCRIPTOR,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(a1 + 24));
  return v16;
}
