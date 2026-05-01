/*
 * XREFs of sub_18003C9B0 @ 0x18003C9B0
 * Callers:
 *     sub_180046D30 @ 0x180046D30 (sub_180046D30.c)
 *     sub_180046D40 @ 0x180046D40 (sub_180046D40.c)
 * Callees:
 *     sub_18003C93C @ 0x18003C93C (sub_18003C93C.c)
 *     sub_18003CA2C @ 0x18003CA2C (sub_18003CA2C.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003C9B0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx
  __int64 *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // ebx
  _QWORD *v8; // r8

  *a3 = 0LL;
  if ( (unsigned int)sub_18003CA2C(a2, &qword_180095B58) || (unsigned int)sub_18003CA2C(v3, &xmmword_180095B68) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  else
  {
    v7 = sub_18003C93C(v5, v6);
    if ( v7 >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  }
  return (unsigned int)v7;
}
