/*
 * XREFs of sub_1800CD134 @ 0x1800CD134
 * Callers:
 *     sub_180091890 @ 0x180091890 (sub_180091890.c)
 *     sub_180093C50 @ 0x180093C50 (sub_180093C50.c)
 *     sub_1800CA400 @ 0x1800CA400 (sub_1800CA400.c)
 *     sub_180127CFF @ 0x180127CFF (sub_180127CFF.c)
 * Callees:
 *     sub_18001FFEC @ 0x18001FFEC (sub_18001FFEC.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CD134(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  volatile signed __int32 *v4; // rcx

  *a1 = &Spectre::Engine::ArrayBuffer::`vftable';
  v2 = (volatile signed __int32 *)a1[18];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  sub_18001FFEC(a1 + 15, (__int64)(a1 + 15));
  v3 = (void (__fastcall ***)(_QWORD, __int64))a1[14];
  if ( v3 )
    (**v3)(v3, 1LL);
  v4 = (volatile signed __int32 *)a1[13];
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  return sub_180022184((__int64)a1);
}
