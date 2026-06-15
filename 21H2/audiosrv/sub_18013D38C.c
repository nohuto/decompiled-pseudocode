/*
 * XREFs of sub_18013D38C @ 0x18013D38C
 * Callers:
 *     sub_18013D630 @ 0x18013D630 (sub_18013D630.c)
 *     sub_18013DB38 @ 0x18013DB38 (sub_18013DB38.c)
 * Callees:
 *     sub_1800579F8 @ 0x1800579F8 (sub_1800579F8.c)
 *     sub_180057A40 @ 0x180057A40 (sub_180057A40.c)
 *     sub_180057A7C @ 0x180057A7C (sub_180057A7C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18013D38C(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, void *, __int64 *); // [rsp+28h] [rbp-20h] BYREF
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0;
  v14 = 0LL;
  v9 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 40) + 40LL))(
              *(_QWORD *)(a1 + 40),
              a2,
              &v14);
      if ( v10 < 0
        || (v10 = sub_180057A7C(v11, v14, (__int64)&v15), v10 < 0)
        || (v10 = sub_1800579F8(a1, v15, &v13), v9 = v13, v10 < 0)
        || (v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v13 + 48LL))(v13, a2, a3), v10 < 0) )
      {
        v8 = v10;
      }
      else if ( a4 )
      {
        sub_180057A40(&v13, a4);
      }
    }
    else
    {
      v8 = -2147467261;
    }
  }
  else
  {
    v8 = -2147024809;
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v14 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v14)[2])(v14);
  return v8;
}
