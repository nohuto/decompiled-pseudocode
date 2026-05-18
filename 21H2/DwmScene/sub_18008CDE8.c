/*
 * XREFs of sub_18008CDE8 @ 0x18008CDE8
 * Callers:
 *     sub_180071EE8 @ 0x180071EE8 (sub_180071EE8.c)
 *     sub_18008C0A4 @ 0x18008C0A4 (sub_18008C0A4.c)
 *     sub_18008C9A4 @ 0x18008C9A4 (sub_18008C9A4.c)
 *     sub_18008CBC4 @ 0x18008CBC4 (sub_18008CBC4.c)
 *     sub_18008CCEC @ 0x18008CCEC (sub_18008CCEC.c)
 *     sub_18008D2D0 @ 0x18008D2D0 (sub_18008D2D0.c)
 *     sub_18008DC0C @ 0x18008DC0C (sub_18008DC0C.c)
 *     sub_18008E204 @ 0x18008E204 (sub_18008E204.c)
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 *     sub_1800C27F0 @ 0x1800C27F0 (sub_1800C27F0.c)
 *     sub_1800C6C30 @ 0x1800C6C30 (sub_1800C6C30.c)
 *     sub_180100170 @ 0x180100170 (sub_180100170.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_1800670E0 @ 0x1800670E0 (sub_1800670E0.c)
 *     sub_18008FAB8 @ 0x18008FAB8 (sub_18008FAB8.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18008CDE8(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 *v7; // rax
  char v8; // di
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h]
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF

  v17 = 0;
  sub_1800670E0(a1 + 16);
  v18 = 0LL;
  sub_18008FAB8(a1 + 88, &v18, a3);
  v6 = v18;
  if ( v18 == *(_QWORD *)(a1 + 88) )
  {
    v16 = 0LL;
    v7 = (__int64 *)&v16;
    v8 = 5;
    v9 = v15;
  }
  else
  {
    v9 = *(_QWORD *)(v18 + 72);
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = *(_QWORD *)(v6 + 72);
    }
    v14 = *(_QWORD *)(v6 + 64);
    v15 = v9;
    v7 = &v14;
    v8 = 6;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v10 = v7[1];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v9 = v15;
  }
  *a2 = *v7;
  a2[1] = v10;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) == 1 )
      {
        v11 = v15;
        (**(void (__fastcall ***)(__int64))v15)(v15);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
  }
  if ( (v8 & 1) != 0 )
  {
    if ( *((_QWORD *)&v16 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v12 = *((_QWORD *)&v16 + 1);
        (***((void (__fastcall ****)(_QWORD, __int64))&v16 + 1))(*((_QWORD *)&v16 + 1), v9);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
      }
    }
  }
  unknown_libname_103(a3);
  return a2;
}
