/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18026CED0
 * Callers:
 *     ?reserve_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVMatrix3x2F@D2D1@@_K0@Z @ 0x18026D028 (-reserve_region@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vlibera.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800ACBE8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x18026CD74 (--$uninitialized_copy@V-$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V-$checked_array_iterator@PEAV.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r11
  __int64 v5; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  LPVOID v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rbx
  void *v14; // rcx
  bool v15; // zf
  __int64 v16; // rdx
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]
  __int128 v19; // [rsp+40h] [rbp-28h] BYREF
  __int64 v20; // [rsp+50h] [rbp-18h]

  v3 = a1[2];
  v4 = 0x2AAAAAAAAAAAAAABLL;
  v5 = a1[1];
  result = (unsigned __int64)((unsigned __int128)((v3 - v5) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  if ( (v3 - v5) / 24 < a2 )
  {
    v7 = (v5 - *a1) / 24;
    v8 = v7 + a2;
    if ( v7 + a2 < v7 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v9 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)(v3 - *a1),
           ((unsigned __int64)((unsigned __int128)((v3 - *a1) * (__int128)v4) >> 64) >> 63)
         + ((__int64)((unsigned __int128)((v3 - *a1) * (__int128)v4) >> 64) >> 2),
           v8);
    v10 = operator new(saturated_mul(v9, 0x18uLL));
    v11 = a1[1];
    v12 = *a1;
    *(_QWORD *)&v17 = v10;
    *((_QWORD *)&v17 + 1) = v7;
    v13 = (__int64)v10;
    v18 = 0LL;
    v19 = v17;
    v20 = 0LL;
    std::uninitialized_copy<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
      (__int64)&v17,
      v12,
      v11,
      (__int64 *)&v19);
    v14 = (void *)*a1;
    v15 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v13;
    if ( v15 )
      v14 = 0LL;
    operator delete(v14);
    v16 = *a1;
    result = 3 * v9;
    a1[1] = *a1 + 24 * v7;
    a1[2] = v16 + 24 * v9;
  }
  return result;
}
