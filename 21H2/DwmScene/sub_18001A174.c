/*
 * XREFs of sub_18001A174 @ 0x18001A174
 * Callers:
 *     sub_180018900 @ 0x180018900 (sub_180018900.c)
 * Callees:
 *     sub_18001889C @ 0x18001889C (sub_18001889C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_18001A174(__int64 a1, _QWORD *a2)
{
  bool v3; // si
  __int64 v4; // rbx
  volatile signed __int32 *v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0LL;
  sub_18001889C((__int64 *)&v7, a2);
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
