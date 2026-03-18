/*
 * XREFs of HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x1C0003234
 * Callers:
 *     HUBHSM_ValidatingHubConfigurationDescriptor @ 0x1C0009730 (HUBHSM_ValidatingHubConfigurationDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002204 (WPP_RECORDER_SF_DD.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C003649C (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0043840 (memmove.c)
 */

__int64 __fastcall HUBHTX_ValidateAndCacheHubConfigDescriptor(__int64 a1)
{
  __int16 v1; // ax
  unsigned __int16 *v3; // rsi
  unsigned __int16 *v4; // rcx
  void *Pool2; // rax
  int v6; // ebx
  void *v7; // rcx
  int v9; // [rsp+28h] [rbp-60h]
  int v10; // [rsp+30h] [rbp-58h]
  _WORD v11[2]; // [rsp+40h] [rbp-48h] BYREF
  int v12; // [rsp+44h] [rbp-44h]
  __int128 v13; // [rsp+48h] [rbp-40h]
  __int64 (__fastcall *v14)(); // [rsp+58h] [rbp-30h]
  __int64 (__fastcall *v15)(); // [rsp+60h] [rbp-28h]
  __int64 v16; // [rsp+68h] [rbp-20h]
  __int64 v17; // [rsp+70h] [rbp-18h]

  v1 = *(_WORD *)(a1 + 2458);
  v11[1] = 0;
  v13 = 0LL;
  v17 = 0LL;
  v11[0] = v1;
  v3 = 0LL;
  v12 = *(_DWORD *)(a1 + 256);
  v14 = HUBMISC_LogDescriptorValidationErrorForHub;
  v16 = a1;
  v4 = *(unsigned __int16 **)(a1 + 1256);
  v15 = HUBMISC_LogDescriptorValidationWarningForHub;
  if ( v4[1] >= 0xFFu )
  {
LABEL_7:
    if ( (unsigned __int8)HUBDESC_ValidateConfigurationDescriptorSet(
                            (_DWORD)v4,
                            v4[1],
                            (unsigned int)v11,
                            *(_QWORD *)(a1 + 2520),
                            0LL) )
    {
      if ( *(_WORD *)(*(_QWORD *)(a1 + 1256) + 2LL) == *(_WORD *)(a1 + 2604) )
      {
        v6 = 0;
        goto LABEL_14;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = *(unsigned __int16 *)(a1 + 2604);
        v9 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1256) + 2LL);
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(a1 + 2520),
          2u,
          3u,
          0x16u,
          (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
          v9,
          v10);
      }
      ((void (__fastcall *)(__int64, __int64))v14)(v16, 61LL);
    }
    v6 = -1073741823;
    goto LABEL_14;
  }
  v3 = v4;
  Pool2 = (void *)ExAllocatePool2(64LL, v4[1], 1748191317LL);
  *(_QWORD *)(a1 + 1256) = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, v3, v3[1]);
    v4 = *(unsigned __int16 **)(a1 + 1256);
    goto LABEL_7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x15u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids);
  v6 = -1073741670;
LABEL_14:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x68334855u);
  if ( v6 < 0 )
  {
    v7 = *(void **)(a1 + 1256);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x68334855u);
      *(_QWORD *)(a1 + 1256) = 0LL;
    }
  }
  return ((v6 >> 31) & 0xFFFFFFF8) + 2053;
}
