/*
 * XREFs of sub_1800561E0 @ 0x1800561E0
 * Callers:
 *     sub_180056100 @ 0x180056100 (sub_180056100.c)
 *     sub_18013D630 @ 0x18013D630 (sub_18013D630.c)
 * Callees:
 *     sub_1800562D0 @ 0x1800562D0 (sub_1800562D0.c)
 *     sub_1800565B4 @ 0x1800565B4 (sub_1800565B4.c)
 *     sub_1800579F8 @ 0x1800579F8 (sub_1800579F8.c)
 *     sub_180057A7C @ 0x180057A7C (sub_180057A7C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013D350 @ 0x18013D350 (sub_18013D350.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800561E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+28h] [rbp-8h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+38h] BYREF
  char v14; // [rsp+78h] [rbp+48h] BYREF

  v6 = 0;
  v11 = 0LL;
  v7 = 0LL;
  v12 = 0LL;
  if ( a2 )
  {
    v8 = sub_1800562D0(a2, &v11);
    if ( v8 < 0
      || (v8 = sub_180057A7C(v9, a2, &v13), v8 < 0)
      || (v8 = sub_1800579F8(a1, v13, &v12), v7 = v12, v8 < 0)
      || (v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v11), v8 < 0)
      || (v8 = sub_1800565B4(a1, a2, &v14), v8 < 0) )
    {
      v6 = v8;
    }
    else if ( a3 )
    {
      sub_18013D350(&v11, a3);
    }
  }
  else
  {
    v6 = -2147024809;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v6;
}
