/*
 * XREFs of sub_18008BAC0 @ 0x18008BAC0
 * Callers:
 *     sub_180078800 @ 0x180078800 (sub_180078800.c)
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 *     sub_1800C09DC @ 0x1800C09DC (sub_1800C09DC.c)
 *     sub_1800DC7F8 @ 0x1800DC7F8 (sub_1800DC7F8.c)
 *     sub_1800DEBF0 @ 0x1800DEBF0 (sub_1800DEBF0.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_18008B8BC @ 0x18008B8BC (sub_18008B8BC.c)
 *     sub_18008D2D0 @ 0x18008D2D0 (sub_18008D2D0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008BAC0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int128 v11; // [rsp+20h] [rbp-58h] BYREF
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v13[5]; // [rsp+40h] [rbp-38h] BYREF

  v13[4] = a4;
  v11 = 0LL;
  v13[2] = 0LL;
  v13[3] = 0LL;
  sub_18001277C(v13, (__int64)a4);
  sub_18008D2D0(a1, &v11, v13);
  v12 = 0LL;
  v8 = *((_QWORD *)&v11 + 1);
  if ( *((_QWORD *)&v11 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL));
    v8 = *((_QWORD *)&v11 + 1);
  }
  v12 = v11;
  sub_18008B8BC(a1, a2, a3, &v12);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      v9 = *((_QWORD *)&v11 + 1);
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  unknown_libname_103(a4);
  return a2;
}
