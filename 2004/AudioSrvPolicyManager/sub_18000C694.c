/*
 * XREFs of sub_18000C694 @ 0x18000C694
 * Callers:
 *     sub_18000B3E0 @ 0x18000B3E0 (sub_18000B3E0.c)
 *     sub_18000BA80 @ 0x18000BA80 (sub_18000BA80.c)
 *     sub_18000C1F4 @ 0x18000C1F4 (sub_18000C1F4.c)
 *     sub_18000DC80 @ 0x18000DC80 (sub_18000DC80.c)
 * Callees:
 *     sub_180009F20 @ 0x180009F20 (sub_180009F20.c)
 *     ??B?$integral_constant@_N$00@boost@@QEBA?AU?$bool_@$00@mpl@1@XZ @ 0x18000CD54 (--B-$integral_constant@_N$00@boost@@QEBA-AU-$bool_@$00@mpl@1@XZ.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000C694(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rbx
  __int64 *v10; // rdi
  __int64 *v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 *v20; // rax
  __int64 *v21; // [rsp+28h] [rbp-18h]
  __int64 v22; // [rsp+30h] [rbp-10h] BYREF
  __int64 v23; // [rsp+70h] [rbp+30h] BYREF
  _QWORD *v24; // [rsp+88h] [rbp+48h] BYREF

  v24 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v8 = (_QWORD *)(a1 + 64);
  if ( &v24 != v8 )
  {
    v9 = (_QWORD *)*v8;
    boost::integral_constant<bool,1>::operator boost::mpl::bool_<1>(v7, &v23);
    v10 = (__int64 *)&v24;
    while ( v9 )
    {
      v11 = (__int64 *)*v10;
      if ( !*v10 )
      {
        v21 = &v22;
        do
        {
          v20 = sub_180009F20(0x10uLL);
          v20[1] = v9[1];
          *v21 = (__int64)v20;
          v21 = v20;
          v9 = (_QWORD *)*v9;
        }
        while ( v9 );
        *v20 = *v10;
        *v10 = v22;
        goto LABEL_8;
      }
      v11[1] = v9[1];
      v10 = v11;
      v9 = (_QWORD *)*v9;
    }
    v12 = (_QWORD *)*v10;
    *v10 = 0LL;
    if ( v12 )
    {
      do
      {
        v13 = (_QWORD *)*v12;
        sub_180039D98(v12);
        v12 = v13;
      }
      while ( v13 );
    }
  }
LABEL_8:
  if ( v6 )
    LeaveCriticalSection(v6);
  v14 = v24;
  if ( v24 )
  {
    do
    {
      v15 = v14[1];
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 72LL))(v15);
      if ( !(unsigned int)o__wcsicmp(a2, v16) )
      {
        v23 = v15;
        v17 = *(_QWORD *)(a3 + 56);
        if ( !v17 )
        {
          std::_Xbad_function_call();
          __debugbreak();
          JUMPOUT(0x18000C838LL);
        }
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 16LL))(v17, &v23);
      }
      v14 = (_QWORD *)*v14;
    }
    while ( v14 );
    v14 = v24;
  }
  v24 = 0LL;
  if ( v14 )
  {
    do
    {
      v18 = (_QWORD *)*v14;
      sub_180039D98(v14);
      v14 = v18;
    }
    while ( v18 );
  }
  return 0LL;
}
