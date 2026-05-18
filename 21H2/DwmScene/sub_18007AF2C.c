/*
 * XREFs of sub_18007AF2C @ 0x18007AF2C
 * Callers:
 *     sub_18001680C @ 0x18001680C (sub_18001680C.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_180067014 @ 0x180067014 (sub_180067014.c)
 *     sub_18006730C @ 0x18006730C (sub_18006730C.c)
 *     sub_1800703A4 @ 0x1800703A4 (sub_1800703A4.c)
 *     sub_1800703DC @ 0x1800703DC (sub_1800703DC.c)
 *     sub_18007041C @ 0x18007041C (sub_18007041C.c)
 *     sub_18007174C @ 0x18007174C (sub_18007174C.c)
 *     sub_18007233C @ 0x18007233C (sub_18007233C.c)
 *     sub_1800757F0 @ 0x1800757F0 (sub_1800757F0.c)
 *     sub_180076BF0 @ 0x180076BF0 (sub_180076BF0.c)
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ_0 @ 0x1800779A0 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ_0.c)
 *     sub_18007AC9C @ 0x18007AC9C (sub_18007AC9C.c)
 *     sub_18007AD60 @ 0x18007AD60 (sub_18007AD60.c)
 *     sub_180081E20 @ 0x180081E20 (sub_180081E20.c)
 *     memset @ 0x18012396A (memset.c)
 *     __RTDynamicCast @ 0x18012397C (__RTDynamicCast.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18007AF2C(__int64 a1, __int64 a2)
{
  unsigned int i; // esi
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // rcx
  unsigned __int64 v18; // r8
  char *v19; // rdx
  __int128 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23[4]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24[4]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v25[3]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+C0h] [rbp-40h]
  __int128 v27; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v28[256]; // [rsp+E0h] [rbp-20h] BYREF

  *(_QWORD *)&v21 = a2;
  memset(v28, 0, 0xF8uLL);
  sub_180076BF0((__int64)v28, 3, 1);
  v27 = 0LL;
  sub_180067014(a1 + 112, (__int64)&v27);
  for ( i = 0; i < (unsigned int)sub_18007AD60(a1); ++i )
  {
    v21 = 0LL;
    sub_18007AC9C(a1, &v21, i);
    if ( !_RTDynamicCast(
            v21,
            0LL,
            &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
            &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor',
            0) )
    {
      v5 = sub_1800703DC(v21, v24);
      v6 = sub_18007041C(v21, v23);
      v7 = sub_1800703A4(v21, v22);
      v8 = v7[2];
      if ( v7[3] >= 8uLL )
        v7 = (_QWORD *)*v7;
      v9 = sub_1800757F0((__int64)&v28[16], (__int64)v7, v8);
      v10 = sub_18007174C(v9, ": Hardware Feature Level ");
      v11 = v6[2];
      if ( v6[3] >= 8uLL )
        v6 = (_QWORD *)*v6;
      v12 = sub_1800757F0(v10, (__int64)v6, v11);
      v13 = sub_18007174C(v12, ", Engine Feature Level ");
      v14 = v5[2];
      if ( v5[3] >= 8uLL )
        v5 = (_QWORD *)*v5;
      v15 = sub_1800757F0(v13, (__int64)v5, v14);
      sub_18007174C(v15, byte_1801CBEF0);
      unknown_libname_103(v22);
      unknown_libname_103(v23);
      unknown_libname_103(v24);
    }
    if ( *((_QWORD *)&v21 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v16 = *((_QWORD *)&v21 + 1);
        (***((void (__fastcall ****)(_QWORD))&v21 + 1))(*((_QWORD *)&v21 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v21 + 1) + 8LL))(*((_QWORD *)&v21 + 1));
      }
    }
  }
  sub_180081E20(&v28[24], v25);
  v17 = v25;
  if ( v26 >= 8 )
    v17 = (__int64 *)v25[0];
  v18 = (unsigned __int64)v17 + 2 * v25[2];
  v19 = (char *)v25;
  if ( v26 >= 8 )
    v19 = (char *)v25[0];
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  sub_18007233C((const void **)a2, v19, v18);
  unknown_libname_103(v25);
  if ( BYTE8(v27) )
    sub_18006730C(v27);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>((__int64)&v28[152]);
  std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(&v28[152]);
  return a2;
}
