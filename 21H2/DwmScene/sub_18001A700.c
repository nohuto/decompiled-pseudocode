/*
 * XREFs of sub_18001A700 @ 0x18001A700
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DD78 @ 0x18000DD78 (sub_18000DD78.c)
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_180017EA4 @ 0x180017EA4 (sub_180017EA4.c)
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18007ABF8 @ 0x18007ABF8 (sub_18007ABF8.c)
 *     sub_18008B8BC @ 0x18008B8BC (sub_18008B8BC.c)
 *     sub_18008D2D0 @ 0x18008D2D0 (sub_18008D2D0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18001A700(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // rax
  signed int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  _QWORD v12[2]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v13[4]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v14; // [rsp+50h] [rbp-9h] BYREF
  int v15; // [rsp+58h] [rbp-1h] BYREF
  __int128 v16; // [rsp+60h] [rbp+7h] BYREF
  __int128 v17; // [rsp+70h] [rbp+17h] BYREF
  __int128 v18; // [rsp+80h] [rbp+27h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+5Fh]

  v15 = a2;
  v16 = 0LL;
  sub_18007ABF8(*(_QWORD *)(a1 + 56), &v16);
  v18 = 0LL;
  sub_180066E84(v16 + 16, &v18);
  v17 = 0LL;
  v13[2] = 0LL;
  v13[3] = 0LL;
  sub_18001277C(v13, (__int64)&qword_18020F768);
  v4 = sub_18008D2D0(v16, v12, v13);
  sub_18008B8BC(v16, &v17, -1LL, v4, v12[0], v12[1]);
  v14 = 0LL;
  v5 = sub_180017EA4(&v14, &v15, &v17);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = v14;
    v7 = 0LL;
    v14 = 0LL;
    *a3 = v8;
    v6 = 0;
  }
  else
  {
    sub_18000DD78(retaddr, 322, (__int64)"SpectreRenderer.cpp", v5);
    v7 = v14;
  }
  if ( v7 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)&v17 + 1);
  if ( *((_QWORD *)&v17 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  if ( BYTE8(v18) )
    sub_180067304(v18);
  v10 = (volatile signed __int32 *)*((_QWORD *)&v16 + 1);
  if ( *((_QWORD *)&v16 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return v6;
}
