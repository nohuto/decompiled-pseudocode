/*
 * XREFs of sub_180019610 @ 0x180019610
 * Callers:
 *     sub_180018458 @ 0x180018458 (sub_180018458.c)
 * Callees:
 *     sub_1800183F4 @ 0x1800183F4 (sub_1800183F4.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_180019610(__int64 a1, _QWORD *a2)
{
  bool v3; // si
  __int64 v4; // rbx
  volatile signed __int32 *v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0LL;
  sub_1800183F4((__int64 *)&v7, a2);
  v3 = (_QWORD)v7 != 0LL;
  if ( *((_QWORD *)&v7 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v7 + 1) + 8LL)) )
    {
      v4 = *((_QWORD *)&v7 + 1);
      (***((void (__fastcall ****)(_QWORD))&v7 + 1))(*((_QWORD *)&v7 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v4 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v7 + 1) + 8LL))(*((_QWORD *)&v7 + 1));
    }
  }
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    if ( !_InterlockedDecrement(v5 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return v3;
}
