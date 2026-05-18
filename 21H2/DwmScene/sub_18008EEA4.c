/*
 * XREFs of sub_18008EEA4 @ 0x18008EEA4
 * Callers:
 *     sub_18008EEA4 @ 0x18008EEA4 (sub_18008EEA4.c)
 *     sub_18008F040 @ 0x18008F040 (sub_18008F040.c)
 * Callees:
 *     sub_180013F08 @ 0x180013F08 (sub_180013F08.c)
 *     sub_180014044 @ 0x180014044 (sub_180014044.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_18008EEA4 @ 0x18008EEA4 (sub_18008EEA4.c)
 *     sub_18009E210 @ 0x18009E210 (sub_18009E210.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18008EEA4(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rbx
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v15; // [rsp+38h] [rbp-28h]
  __int64 *v16; // [rsp+40h] [rbp-20h]
  __int128 v17; // [rsp+48h] [rbp-18h] BYREF

  v6 = *a1;
  if ( *a1 )
  {
    v13 = 0LL;
    sub_180089274(v6);
    v14 = 0LL;
    v15 = *(__int64 **)(v6 + 384);
    v16 = *(__int64 **)(v6 + 376);
    sub_180014044(&v14, v16, v15, 0);
    if ( v14 == *(__int64 **)(v6 + 384) )
      v13 = 0LL;
    else
      sub_180013F08((__int64 *)&v13, v14);
    if ( (_QWORD)v13 )
      sub_18009E210(v13, a2, a3);
    v7 = *a1;
    sub_180089274(*a1);
    v8 = *(_QWORD **)(v7 + 32);
    v9 = *(_QWORD **)(v7 + 40);
    while ( v8 != v9 )
    {
      v17 = 0LL;
      v10 = v8[1];
      if ( v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        v10 = v8[1];
      }
      *(_QWORD *)&v17 = *v8;
      *((_QWORD *)&v17 + 1) = v10;
      sub_18008EEA4(&v17, a2, a3);
      v11 = (volatile signed __int32 *)*((_QWORD *)&v17 + 1);
      if ( *((_QWORD *)&v17 + 1) )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL)) )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
          if ( !_InterlockedDecrement(v11 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        }
      }
      v8 += 2;
    }
    if ( *((_QWORD *)&v13 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL)) )
    {
      v12 = *((_QWORD *)&v13 + 1);
      (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v12 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
    }
  }
}
