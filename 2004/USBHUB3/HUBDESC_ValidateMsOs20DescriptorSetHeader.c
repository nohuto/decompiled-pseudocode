/*
 * XREFs of HUBDESC_ValidateMsOs20DescriptorSetHeader @ 0x1C003A6E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20DescriptorSetHeader(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  char v6; // di

  v6 = 1;
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x132u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 154LL);
    v6 = 0;
  }
  if ( *a3 != 10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x133u,
        (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
        *a3);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 155LL);
    v6 = 0;
  }
  if ( v6 == 1 )
  {
    *(_DWORD *)a2 |= 2u;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x134u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
  }
  return v6;
}
