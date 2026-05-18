/*
 * XREFs of sub_18006C9C0 @ 0x18006C9C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006B958 @ 0x18006B958 (sub_18006B958.c)
 *     sub_18006BF54 @ 0x18006BF54 (sub_18006BF54.c)
 *     sub_18006D3A4 @ 0x18006D3A4 (sub_18006D3A4.c)
 *     sub_1800703D4 @ 0x1800703D4 (sub_1800703D4.c)
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_18007B2BC @ 0x18007B2BC (sub_18007B2BC.c)
 *     sub_1800D5FA8 @ 0x1800D5FA8 (sub_1800D5FA8.c)
 *     sub_1800D5FB0 @ 0x1800D5FB0 (sub_1800D5FB0.c)
 *     sub_1800D61D0 @ 0x1800D61D0 (sub_1800D61D0.c)
 *     sub_1800D6B10 @ 0x1800D6B10 (sub_1800D6B10.c)
 *     sub_1800D90D8 @ 0x1800D90D8 (sub_1800D90D8.c)
 *     sub_1801147C8 @ 0x1801147C8 (sub_1801147C8.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006C9C0(_QWORD *a1, unsigned int a2)
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
    v9 = sub_1800703D4(v7);
    v10 = sub_18007AB84(v9, a2);
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 184LL))(a1);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 96LL))(v7, 5LL);
    if ( (_BYTE)result )
    {
      v12 = a1[48];
      v13 = 1;
      v14 = v12 && (unsigned __int8)sub_1801147C8(v12);
      v24 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_18020FC88, 0LL);
      v15 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_18020FCA8, 0LL);
      LOBYTE(v16) = v24;
      sub_1800D5FA8(*v11, v16);
      if ( v15 || v14 || *((_BYTE *)a1 + 400) )
        v13 = 0;
      LOBYTE(v17) = v13;
      result = sub_1800D5FB0(*v11, v17);
      if ( v24 )
      {
        sub_1800D61D0(*v11);
        v18 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_18020FD88, 0LL);
        v19 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_18020FDA8, 0LL);
        v20 = sub_18006B958(a1, v27);
        v21 = a1 + 52;
        if ( a1 + 52 != v20 )
        {
          sub_18006D3A4(a1 + 52);
          *v21 = *v20;
          a1[53] = v20[1];
          a1[54] = v20[2];
          *v20 = 0LL;
          v20[1] = 0LL;
          v20[2] = 0LL;
        }
        result = sub_18006D3A4(v27);
        if ( v18 )
        {
          v6 = (volatile signed __int32 *)(a1 + 52);
          if ( v19 )
          {
            result = a1[53];
            if ( result != *v21 )
            {
              v22 = sub_1800703D4(v7);
              sub_18007B2BC(v22);
            }
          }
          else
          {
            result = sub_1800D6B10(a1[57], v6);
          }
        }
        if ( v14 )
          result = sub_18006BF54((__int64)a1);
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
