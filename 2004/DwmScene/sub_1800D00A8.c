/*
 * XREFs of sub_1800D00A8 @ 0x1800D00A8
 * Callers:
 *     sub_180065C80 @ 0x180065C80 (sub_180065C80.c)
 * Callees:
 *     sub_1800CFF2C @ 0x1800CFF2C (sub_1800CFF2C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800D00A8(__int64 a1, _QWORD *a2, __int64 a3)
{
  volatile signed __int32 *v5; // rbx
  __int64 v7; // rcx
  char v8; // si
  volatile signed __int32 *v9; // rbx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(a1 + 192) = a3;
  if ( *(_BYTE *)(a1 + 184) )
  {
    v10 = 0LL;
    v7 = a2[1];
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v7 = a2[1];
    }
    *(_QWORD *)&v10 = *a2;
    *((_QWORD *)&v10 + 1) = v7;
    v8 = sub_1800CFF2C((_QWORD *)a1, &v10, *(_QWORD *)(a1 + 192));
    v9 = (volatile signed __int32 *)a2[1];
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
    return v8;
  }
  else
  {
    v5 = (volatile signed __int32 *)a2[1];
    if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *, _QWORD *, __int64, __int64))v5)(v5, a2, a3, a1);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    return 0;
  }
}
