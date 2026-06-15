/*
 * XREFs of sub_1800FC614 @ 0x1800FC614
 * Callers:
 *     sub_1800FE540 @ 0x1800FE540 (sub_1800FE540.c)
 * Callees:
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800FA1F4 @ 0x1800FA1F4 (sub_1800FA1F4.c)
 *     sub_1800FCFB4 @ 0x1800FCFB4 (sub_1800FCFB4.c)
 *     sub_1800FEE8C @ 0x1800FEE8C (sub_1800FEE8C.c)
 *     sub_1800FF980 @ 0x1800FF980 (sub_1800FF980.c)
 *     sub_180104244 @ 0x180104244 (sub_180104244.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_1800FC614(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rbx
  unsigned __int64 i; // r15
  __int64 v9; // r8
  __int64 v10; // rbx
  unsigned __int64 j; // rbx
  __int64 v12; // rcx
  ATL::CAtlException *v13; // rbx
  _QWORD *v14; // [rsp+20h] [rbp-68h] BYREF
  ATL::CAtlException *v15; // [rsp+28h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-58h] BYREF
  char v17; // [rsp+38h] [rbp-50h]
  __int64 v18; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]
  __int64 v20; // [rsp+50h] [rbp-38h]
  int v21; // [rsp+58h] [rbp-30h]
  __int64 v22; // [rsp+90h] [rbp+8h] BYREF
  __int64 v23; // [rsp+98h] [rbp+10h]
  int v24; // [rsp+A0h] [rbp+18h]
  __int64 v25; // [rsp+A8h] [rbp+20h] BYREF

  v23 = a2;
  v22 = a1;
  v2 = a1;
  v3 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 72);
  v17 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  v5 = *(_QWORD **)(v2 + 112);
  v14 = v5;
  while ( v5 )
  {
    v6 = sub_1800B91A0(v4, &v14);
    sub_180048790(&v25, *v6);
    v7 = v25;
    if ( (unsigned __int8)sub_1800FCFB4(v25, v23) )
    {
      try
      {
        sub_1800FA1F4(&v18, v7);
      }
      catch ( ATL::CAtlException *v15 )
      {
        v13 = v15;
        if ( *(_DWORD *)v15 == -1073741571 )
          o__resetstkoflw();
        v24 = *(_DWORD *)v13;
        if ( v24 < 0 )
        {
          v4 = v25;
          if ( v25 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          v2 = v22;
          v3 = v18;
          goto LABEL_13;
        }
        v2 = v22;
        v7 = v25;
      }
      v3 = v18;
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_13:
    v5 = v14;
  }
  for ( i = 0LL; i < v19; ++i )
  {
    sub_180048790(&v22, *(_QWORD *)(v3 + 8 * i));
    v10 = v22;
    if ( *(_BYTE *)(v22 + 49) )
    {
      sub_180104244(*(_QWORD *)(v22 + 200));
      sub_1800FF980(v10);
    }
    else
    {
      LOBYTE(v9) = 1;
      sub_1800FEE8C(v2, v22, v9);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v3 )
  {
    for ( j = 0LL; j < v19; ++j )
    {
      v12 = *(_QWORD *)(v3 + 8 * j);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    _o_free(v3);
  }
}
