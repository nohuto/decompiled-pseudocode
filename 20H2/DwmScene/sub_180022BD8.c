/*
 * XREFs of sub_180022BD8 @ 0x180022BD8
 * Callers:
 *     sub_180026A60 @ 0x180026A60 (sub_180026A60.c)
 * Callees:
 *     sub_180020E28 @ 0x180020E28 (sub_180020E28.c)
 *     sub_180021874 @ 0x180021874 (sub_180021874.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180022BD8(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  sub_180021874((__int64)&v5);
  *(_OWORD *)a2 = 0LL;
  sub_180020E28(a2, (__int64 *)&v5);
  if ( *((_QWORD *)&v5 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v5 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v3 = *((_QWORD *)&v5 + 1);
      (***((void (__fastcall ****)(_QWORD))&v5 + 1))(*((_QWORD *)&v5 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v5 + 1) + 8LL))(*((_QWORD *)&v5 + 1));
    }
  }
  return a2;
}
