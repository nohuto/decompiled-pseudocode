/*
 * XREFs of sub_180023C8C @ 0x180023C8C
 * Callers:
 *     sub_180023678 @ 0x180023678 (sub_180023678.c)
 *     sub_180023794 @ 0x180023794 (sub_180023794.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180023C8C(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 256);
  if ( v2 )
    (**v2)(v2, 1LL);
  *(_QWORD *)(a1 + 256) = 0LL;
  if ( GetCurrentThreadId() != *(_DWORD *)(a1 + 336) )
    SHTaskPoolAllowThreadReuse();
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 264));
  if ( *(int *)(a1 + 160) > 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 0xFFFFFFFF) == 1 )
  {
    _InterlockedOr(v5, 0);
    v3 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 144) = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return sub_180022010(a1 + 8);
}
