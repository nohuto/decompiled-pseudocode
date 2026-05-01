/*
 * XREFs of sub_180020BA0 @ 0x180020BA0
 * Callers:
 *     sub_180022CC0 @ 0x180022CC0 (sub_180022CC0.c)
 *     sub_180023ED8 @ 0x180023ED8 (sub_180023ED8.c)
 *     sub_180024940 @ 0x180024940 (sub_180024940.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall sub_180020BA0(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int128 v5; // [rsp+40h] [rbp-18h] BYREF
  signed __int32 v6; // [rsp+60h] [rbp+8h] BYREF

  result = &off_18004A938;
  *(_QWORD *)a1 = &off_18004A938;
  if ( !*(_DWORD *)(a1 + 16) && qword_18005AD70 )
  {
    _InterlockedCompareExchange(&v6, *(_DWORD *)(a1 + 48), v6);
    v5 = xmmword_180050AB0;
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64, signed __int32))(*(_QWORD *)qword_18005AD70 + 56LL))(
                            qword_18005AD70,
                            0LL,
                            2LL,
                            &v5,
                            a1,
                            v6);
  }
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
