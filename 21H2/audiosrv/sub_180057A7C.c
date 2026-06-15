/*
 * XREFs of sub_180057A7C @ 0x180057A7C
 * Callers:
 *     sub_1800561E0 @ 0x1800561E0 (sub_1800561E0.c)
 *     sub_18013D38C @ 0x18013D38C (sub_18013D38C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180057A7C(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *), __int64 a3)
{
  __int64 v4; // rcx
  int v5; // ebx
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v8 = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      v5 = (**a2)(a2, &unk_18015B660, &v8);
      v4 = v8;
      if ( v5 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, a3);
        v5 = 0;
        if ( v6 < 0 )
          v5 = v6;
        v4 = v8;
      }
    }
    else
    {
      v5 = -2147467261;
    }
  }
  else
  {
    v5 = -2147024809;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v5;
}
