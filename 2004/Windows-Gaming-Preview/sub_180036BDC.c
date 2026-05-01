/*
 * XREFs of sub_180036BDC @ 0x180036BDC
 * Callers:
 *     sub_18003673C @ 0x18003673C (sub_18003673C.c)
 *     sub_180037030 @ 0x180037030 (sub_180037030.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall sub_180036BDC(_QWORD *a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = a1[27];
  if ( v2 < 0 )
  {
    v3 = (volatile signed __int32 *)(2 * v2);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v3 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
      if ( qword_18005ADB0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
    }
  }
  v4 = a1[17];
  if ( v4 )
  {
    a1[17] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = a1[14];
  if ( v5 )
  {
    a1[14] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = a1[12];
  if ( v6 )
  {
    a1[12] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return sub_180035740((__int64)a1);
}
