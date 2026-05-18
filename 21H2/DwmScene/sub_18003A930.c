/*
 * XREFs of sub_18003A930 @ 0x18003A930
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032D3C @ 0x180032D3C (sub_180032D3C.c)
 *     sub_1800392B0 @ 0x1800392B0 (sub_1800392B0.c)
 *     sub_180043750 @ 0x180043750 (sub_180043750.c)
 *     sub_180043A2C @ 0x180043A2C (sub_180043A2C.c)
 *     sub_1800D14B0 @ 0x1800D14B0 (sub_1800D14B0.c)
 *     sub_1800D14C8 @ 0x1800D14C8 (sub_1800D14C8.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003A930(__int64 a1, __int64 *a2, unsigned int a3, __int128 *a4, unsigned __int8 a5)
{
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h] BYREF
  __int64 v21; // [rsp+40h] [rbp-38h] BYREF
  __int128 v22; // [rsp+48h] [rbp-30h] BYREF
  __int128 v23; // [rsp+58h] [rbp-20h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = *a2;
  if ( *a2 )
  {
    v22 = 0LL;
    sub_1800392B0((__int64 *)(v11 + 128), &v22, *(_DWORD *)(a1 + 88));
    v12 = v22;
    v8 = *(_QWORD *)sub_180043A2C(v22, &v19);
    v13 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v9 = *sub_180032D3C(v12, &v20);
    v14 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v10 = *(_QWORD *)sub_180043750(v12, &v21);
    v15 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    if ( *((_QWORD *)&v22 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v22 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v16 = *((_QWORD *)&v22 + 1);
        (***((void (__fastcall ****)(_QWORD))&v22 + 1))(*((_QWORD *)&v22 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v22 + 1) + 8LL))(*((_QWORD *)&v22 + 1));
      }
    }
  }
  v23 = *a4;
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 344LL))(*(_QWORD *)(a1 + 144), v8);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 288LL))(*(_QWORD *)(a1 + 144), v9, a5);
  (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(**(_QWORD **)(a1 + 144) + 280LL))(
    *(_QWORD *)(a1 + 144),
    v10,
    &v23,
    a3);
  v17 = sub_1800D14C8();
  return sub_1800D14B0(v17, 4LL, 1LL, 1LL);
}
