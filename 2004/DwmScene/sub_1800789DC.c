/*
 * XREFs of sub_1800789DC @ 0x1800789DC
 * Callers:
 *     sub_180073FB4 @ 0x180073FB4 (sub_180073FB4.c)
 *     sub_180078E8C @ 0x180078E8C (sub_180078E8C.c)
 * Callees:
 *     sub_180061744 @ 0x180061744 (sub_180061744.c)
 *     sub_180061A3C @ 0x180061A3C (sub_180061A3C.c)
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1800789DC(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v4; // rdi
  __int128 v5; // [rsp+C0h] [rbp-70h] BYREF
  int v6; // [rsp+D0h] [rbp-60h]
  __int64 v7; // [rsp+D4h] [rbp-5Ch]
  int v8; // [rsp+DCh] [rbp-54h]
  __int128 v9; // [rsp+E0h] [rbp-50h]
  __int128 v10; // [rsp+F0h] [rbp-40h]
  __int128 v11; // [rsp+100h] [rbp-30h]
  __int64 v12; // [rsp+110h] [rbp-20h]
  __int64 v13; // [rsp+118h] [rbp-18h]
  __int64 v14; // [rsp+120h] [rbp-10h]
  __int64 v15; // [rsp+128h] [rbp-8h]
  int v16; // [rsp+130h] [rbp+0h]
  __int128 v17; // [rsp+140h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a1 + 496) )
  {
    if ( !_RTDynamicCast(
            *a2,
            0LL,
            &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
            &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor',
            0) )
    {
      v5 = 0LL;
      v6 = 0;
      v7 = 0LL;
      v8 = 0;
      v9 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0;
      v17 = 0LL;
      sub_180061744(*a2 + 24LL, (__int64)&v17);
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 88LL))(*a2, &v5);
      if ( BYTE8(v17) )
        sub_180061A3C(v17);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 496) + 96LL))(*(_QWORD *)(a1 + 496));
    }
    v4 = (volatile signed __int32 *)a2[1];
  }
  else
  {
    v4 = (volatile signed __int32 *)a2[1];
  }
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
    if ( !_InterlockedDecrement(v4 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  }
}
