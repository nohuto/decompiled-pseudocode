/*
 * XREFs of HUBDESC_ValidateMsOs20VendorRevision @ 0x1C003BCF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20VendorRevision(__int64 a1, int *a2, unsigned __int16 *a3)
{
  char v5; // dl
  int v6; // eax
  __int64 v7; // rdx
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+28h] [rbp-10h]

  v5 = 1;
  v6 = *a2;
  if ( (*a2 & 0x400) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), 2u, 5u, 0x15Du, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
    v7 = 258LL;
  }
  else if ( *a3 == 6 )
  {
    if ( a3[2] )
    {
      *((_QWORD *)a2 + 8) = a3;
      *a2 = v6 | 0x400;
      return v5;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 0;
      WPP_RECORDER_SF_d(
        *((_QWORD *)a2 + 12),
        2u,
        5u,
        0x15Fu,
        (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
        v10);
    }
    v7 = 260LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = *a3;
      WPP_RECORDER_SF_d(
        *((_QWORD *)a2 + 12),
        2u,
        5u,
        0x15Eu,
        (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
        v9);
    }
    v7 = 259LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v7);
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), 2u, 5u, 0x160u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
    return 0;
  }
  return v5;
}
