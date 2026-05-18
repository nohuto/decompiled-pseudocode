/*
 * XREFs of sub_180073CFC @ 0x180073CFC
 * Callers:
 *     sub_18000F7C8 @ 0x18000F7C8 (sub_18000F7C8.c)
 *     sub_180017524 @ 0x180017524 (sub_180017524.c)
 *     sub_180017634 @ 0x180017634 (sub_180017634.c)
 *     sub_180017744 @ 0x180017744 (sub_180017744.c)
 *     sub_18001EE70 @ 0x18001EE70 (sub_18001EE70.c)
 *     sub_180026F5C @ 0x180026F5C (sub_180026F5C.c)
 *     sub_180090BD0 @ 0x180090BD0 (sub_180090BD0.c)
 *     sub_180090CE0 @ 0x180090CE0 (sub_180090CE0.c)
 *     sub_18009BD94 @ 0x18009BD94 (sub_18009BD94.c)
 *     sub_18009BEA4 @ 0x18009BEA4 (sub_18009BEA4.c)
 *     sub_18009BFB4 @ 0x18009BFB4 (sub_18009BFB4.c)
 *     sub_18009C0C4 @ 0x18009C0C4 (sub_18009C0C4.c)
 *     sub_18009C1D4 @ 0x18009C1D4 (sub_18009C1D4.c)
 *     sub_1800A1DFC @ 0x1800A1DFC (sub_1800A1DFC.c)
 *     sub_1800EE11C @ 0x1800EE11C (sub_1800EE11C.c)
 *     sub_1800F0CF4 @ 0x1800F0CF4 (sub_1800F0CF4.c)
 * Callees:
 *     sub_18006156C @ 0x18006156C (sub_18006156C.c)
 *     sub_180061744 @ 0x180061744 (sub_180061744.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180061A3C @ 0x180061A3C (sub_180061A3C.c)
 *     sub_1800626B8 @ 0x1800626B8 (sub_1800626B8.c)
 *     ?SetScheduler@?$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEAVSchedulerBase@23@@Z @ 0x18006283C (-SetScheduler@-$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEA.c)
 *     sub_18006294C @ 0x18006294C (sub_18006294C.c)
 *     sub_1800753CC @ 0x1800753CC (sub_1800753CC.c)
 *     sub_180075490 @ 0x180075490 (sub_180075490.c)
 *     sub_1800754FC @ 0x1800754FC (sub_1800754FC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall sub_180073CFC(__int64 a1, __int64 a2, int a3)
{
  unsigned __int32 v6; // eax
  unsigned __int32 v7; // esi
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rax
  volatile signed __int32 *v11; // rbx
  _BYTE v13[8]; // [rsp+20h] [rbp-50h] BYREF
  volatile signed __int32 *v14; // [rsp+28h] [rbp-48h]
  _BYTE v15[8]; // [rsp+30h] [rbp-40h] BYREF
  volatile signed __int32 *v16; // [rsp+38h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF

  Concurrency::details::ListArray<Concurrency::details::ScheduleGroupBase>::SetScheduler(a2, a1);
  LOBYTE(v6) = sub_1800626B8(a2, 1);
  if ( (_BYTE)v6 )
  {
    if ( a3 == 2 )
    {
      v18 = 0LL;
      sub_18006156C(a1 + 1104, (__int64)&v18);
      v17 = 0LL;
      sub_180061744(a1 + 112, (__int64)&v17);
      v7 = 0;
      v6 = sub_180075490(a1);
      if ( v6 )
      {
        do
        {
          v8 = sub_1800753CC(a1, v13, v7);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v8);
          v9 = v14;
          if ( v14 )
          {
            if ( !_InterlockedDecrement(v14 + 2) )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
              if ( !_InterlockedDecrement(v9 + 3) )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
            }
          }
          ++v7;
          v6 = sub_180075490(a1);
        }
        while ( v7 < v6 );
      }
      if ( BYTE8(v17) )
        LOBYTE(v6) = sub_180061A3C(v17);
      if ( BYTE8(v18) )
        LOBYTE(v6) = sub_180061A34(v18);
    }
    if ( a3 == 1 )
    {
      v10 = sub_1800754FC(a1, v15, 0LL);
      LOBYTE(v6) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v10);
      v11 = v16;
      if ( v16 )
      {
        v6 = _InterlockedDecrement(v16 + 2);
        if ( !v6 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
          v6 = _InterlockedDecrement(v11 + 3);
          if ( !v6 )
            LOBYTE(v6) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        }
      }
    }
    if ( !*(_DWORD *)(a1 + 552) )
      LOBYTE(v6) = sub_18006294C(a2, 8, 1);
  }
  return v6;
}
