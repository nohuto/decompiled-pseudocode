/*
 * XREFs of sub_180035258 @ 0x180035258
 * Callers:
 *     sub_1800351CC @ 0x1800351CC (sub_1800351CC.c)
 *     sub_180036BA0 @ 0x180036BA0 (sub_180036BA0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_180035258(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _UNKNOWN **result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = a1[14];
  if ( v2 )
  {
    a1[14] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = a1[12];
  if ( v3 )
  {
    a1[12] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  result = &off_18004C248;
  *a1 = &off_18004C248;
  v5 = a1[5];
  if ( v5 )
  {
    a1[5] = 0LL;
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = a1[3];
  if ( v6 )
  {
    a1[3] = 0LL;
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return result;
}
