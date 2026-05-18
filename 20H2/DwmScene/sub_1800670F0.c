/*
 * XREFs of sub_1800670F0 @ 0x1800670F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066088 @ 0x180066088 (sub_180066088.c)
 *     sub_180066684 @ 0x180066684 (sub_180066684.c)
 *     sub_180067AD4 @ 0x180067AD4 (sub_180067AD4.c)
 *     sub_18006AB04 @ 0x18006AB04 (sub_18006AB04.c)
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_1800759EC @ 0x1800759EC (sub_1800759EC.c)
 *     sub_1800D06D8 @ 0x1800D06D8 (sub_1800D06D8.c)
 *     sub_1800D06E0 @ 0x1800D06E0 (sub_1800D06E0.c)
 *     sub_1800D0900 @ 0x1800D0900 (sub_1800D0900.c)
 *     sub_1800D1240 @ 0x1800D1240 (sub_1800D1240.c)
 *     sub_1800D3808 @ 0x1800D3808 (sub_1800D3808.c)
 *     sub_18010EEF8 @ 0x18010EEF8 (sub_18010EEF8.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800670F0(_QWORD *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 *v5; // r8
  volatile signed __int32 *v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r12
  _QWORD *v11; // r13
  __int64 v12; // rcx
  char v13; // di
  bool v14; // r15
  char v15; // bl
  __int64 v16; // rdx
  __int64 v17; // rdx
  char v18; // r13
  char v19; // r12
  _QWORD *v20; // rbx
  _QWORD *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rbx
  char v24; // [rsp+20h] [rbp-50h]
  char v25[8]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v26; // [rsp+30h] [rbp-40h]
  _QWORD v27[3]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v28; // [rsp+50h] [rbp-20h]

  result = (*(__int64 (__fastcall **)(_QWORD *, char *))(*a1 + 376LL))(a1, v25);
  v5 = (__int64 *)result;
  v28 = 0LL;
  v6 = *(volatile signed __int32 **)(result + 8);
  if ( v6 )
  {
    while ( 1 )
    {
      result = *((unsigned int *)v6 + 2);
      if ( !(_DWORD)result )
        break;
      if ( (_DWORD)result == _InterlockedCompareExchange(v6 + 2, result + 1, result) )
      {
        v7 = *v5;
        *(_QWORD *)&v28 = *v5;
        result = v5[1];
        *((_QWORD *)&v28 + 1) = result;
        goto LABEL_3;
      }
    }
  }
  v7 = v28;
LABEL_3:
  v8 = v26;
  if ( v26 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 12), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      result = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 *, __int64 *))(*(_QWORD *)v8 + 8LL))(
                 v8,
                 v6,
                 v5);
    v7 = v28;
  }
  if ( v7 )
  {
    v9 = sub_18006AB04(v7);
    v10 = sub_1800752B4(v9, a2);
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 184LL))(a1);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 96LL))(v7, 5LL);
    if ( (_BYTE)result )
    {
      v12 = a1[48];
      v13 = 1;
      v14 = v12 && (unsigned __int8)sub_18010EEF8(v12);
      v24 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180208C10, 0LL);
      v15 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180208C30, 0LL);
      LOBYTE(v16) = v24;
      sub_1800D06D8(*v11, v16);
      if ( v15 || v14 || *((_BYTE *)a1 + 400) )
        v13 = 0;
      LOBYTE(v17) = v13;
      result = sub_1800D06E0(*v11, v17);
      if ( v24 )
      {
        sub_1800D0900(*v11);
        v18 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180208D10, 0LL);
        v19 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180208D30, 0LL);
        v20 = sub_180066088(a1, v27);
        v21 = a1 + 52;
        if ( a1 + 52 != v20 )
        {
          sub_180067AD4(a1 + 52);
          *v21 = *v20;
          a1[53] = v20[1];
          a1[54] = v20[2];
          *v20 = 0LL;
          v20[1] = 0LL;
          v20[2] = 0LL;
        }
        result = sub_180067AD4(v27);
        if ( v18 )
        {
          v6 = (volatile signed __int32 *)(a1 + 52);
          if ( v19 )
          {
            result = a1[53];
            if ( result != *v21 )
            {
              v22 = sub_18006AB04(v7);
              sub_1800759EC(v22);
            }
          }
          else
          {
            result = sub_1800D1240(a1[57], v6);
          }
        }
        if ( v14 )
          result = sub_180066684((__int64)a1);
      }
    }
  }
  if ( *((_QWORD *)&v28 + 1) )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v28 + 1) + 8LL), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v23 = *((_QWORD *)&v28 + 1);
      (***((void (__fastcall ****)(_QWORD, volatile signed __int32 *, __int64 *))&v28 + 1))(
        *((_QWORD *)&v28 + 1),
        v6,
        v5);
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 12), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v28 + 1) + 8LL))(*((_QWORD *)&v28 + 1));
    }
  }
  return result;
}
