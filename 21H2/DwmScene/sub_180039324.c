/*
 * XREFs of sub_180039324 @ 0x180039324
 * Callers:
 *     sub_180038EC0 @ 0x180038EC0 (sub_180038EC0.c)
 * Callees:
 *     sub_180029F64 @ 0x180029F64 (sub_180029F64.c)
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_180038198 @ 0x180038198 (sub_180038198.c)
 *     sub_18006DAE0 @ 0x18006DAE0 (sub_18006DAE0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _Thrd_yield @ 0x180125326 (_Thrd_yield.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_180039324(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rcx
  bool v7; // bl
  __int64 v8; // rcx
  int v9; // eax
  signed __int32 v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int128 v13; // [rsp+30h] [rbp-50h] BYREF
  __int128 v14; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+58h] [rbp-28h] BYREF
  int v17; // [rsp+60h] [rbp-20h] BYREF
  _DWORD v18[2]; // [rsp+68h] [rbp-18h] BYREF

  v18[0] = 0;
  v18[1] = 0;
  v16 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v2 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v10 + 1, v10) )
      {
        *(_QWORD *)&v13 = *(_QWORD *)(a1 + 72);
        v3 = *(_QWORD *)(a1 + 80);
        *((_QWORD *)&v13 + 1) = v3;
        goto LABEL_3;
      }
    }
  }
  v3 = *((_QWORD *)&v13 + 1);
LABEL_3:
  sub_180038198((__int64 *)&v14, &v13);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
    {
      v4 = *((_QWORD *)&v13 + 1);
      (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
    }
  }
  v5 = *sub_180029F64(v14, &v15);
  v6 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (*(int (__fastcall **)(__int64, _DWORD *, __int64 *))(*(_QWORD *)v5 + 192LL))(v5, v18, &v16) >= 0;
  v8 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 224LL))(*(_QWORD *)(a1 + 144), v16);
    sub_18006DAE0(a1, 0LL);
    v17 = 0;
    do
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *, __int64, _DWORD))(**(_QWORD **)(a1 + 144) + 232LL))(
             *(_QWORD *)(a1 + 144),
             v16,
             &v17,
             4LL,
             0);
      if ( v9 )
      {
        if ( v9 != 1 )
        {
          sub_18002BE74(v14, v9);
          break;
        }
        Thrd_yield();
      }
    }
    while ( !v17 );
  }
  if ( *((_QWORD *)&v14 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL)) )
    {
      v11 = *((_QWORD *)&v14 + 1);
      (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v11 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
    }
  }
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
}
