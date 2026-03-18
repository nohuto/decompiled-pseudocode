/*
 * XREFs of HUBHSM_ValidatingAndParsingHubDescriptor @ 0x1C0009560
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     HUBDESC_Validate30HubDescriptor @ 0x1C003A51C (HUBDESC_Validate30HubDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x1C003A918 (HUBDESC_Validate20HubDescriptor.c)
 */

__int64 __fastcall HUBHSM_ValidatingAndParsingHubDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax
  __int16 v4; // ax
  unsigned int v5; // edi
  __int16 v6; // cx
  __int16 v7; // cx
  __int16 v8; // ax
  __int16 v9; // cx
  _WORD v11[2]; // [rsp+30h] [rbp-48h] BYREF
  int v12; // [rsp+34h] [rbp-44h]
  __int128 v13; // [rsp+38h] [rbp-40h]
  __int64 (__fastcall *v14)(); // [rsp+48h] [rbp-30h]
  __int64 (__fastcall *v15)(); // [rsp+50h] [rbp-28h]
  __int64 v16; // [rsp+58h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 960);
  v11[1] = 0;
  v13 = 0LL;
  v3 = *(_WORD *)(v2 + 2458);
  v17 = 0LL;
  v11[0] = v3;
  v12 = *(_DWORD *)(v2 + 256);
  v14 = HUBMISC_LogDescriptorValidationErrorForHub;
  v15 = HUBMISC_LogDescriptorValidationWarningForHub;
  v16 = v2;
  if ( v12 <= 0 )
    goto LABEL_16;
  if ( v12 > 2 )
  {
    if ( v12 == 3 && (unsigned __int8)HUBDESC_Validate30HubDescriptor(v2 + 1180, a2, v11, *(_QWORD *)(v2 + 2520)) )
    {
      v4 = *(unsigned __int8 *)(v2 + 1182);
      v5 = 2053;
      *(_WORD *)(v2 + 48) = v4;
      *(_WORD *)(v2 + 150) = v4;
      v6 = *(_WORD *)(v2 + 1183);
      if ( (v6 & 1) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(v2 + 40), 4u);
        v6 = *(_WORD *)(v2 + 1183);
      }
      v7 = v6 & 0x18;
      if ( ((v7 - 16) & 0xFFF7) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(v2 + 40), 0x10u);
        return v5;
      }
      if ( v7 == 8 )
        goto LABEL_9;
      return v5;
    }
LABEL_16:
    v5 = 2045;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v2 + 2520), 2u, 3u, 0x21u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids);
    return v5;
  }
  if ( !(unsigned __int8)HUBDESC_Validate20HubDescriptor(v2 + 1180, a2, v11, *(_QWORD *)(v2 + 2520)) )
    goto LABEL_16;
  v8 = *(unsigned __int8 *)(v2 + 1182);
  v5 = 2053;
  *(_WORD *)(v2 + 48) = v8;
  *(_WORD *)(v2 + 144) = v8;
  v9 = *(_WORD *)(v2 + 1183);
  if ( (v9 & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v2 + 40), 4u);
    v9 = *(_WORD *)(v2 + 1183);
  }
  if ( (v9 & 8) != 0 )
LABEL_9:
    _InterlockedOr((volatile signed __int32 *)(v2 + 40), 8u);
  return v5;
}
