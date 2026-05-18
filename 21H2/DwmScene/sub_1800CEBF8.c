/*
 * XREFs of sub_1800CEBF8 @ 0x1800CEBF8
 * Callers:
 *     sub_18003B3C0 @ 0x18003B3C0 (sub_18003B3C0.c)
 * Callees:
 *     sub_1800392B0 @ 0x1800392B0 (sub_1800392B0.c)
 *     sub_18007ADCC @ 0x18007ADCC (sub_18007ADCC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800CEBF8(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  volatile signed __int32 *v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)&v12 = a2;
  v6 = a1 + 17;
  v7 = a1[17];
  v8 = *(_QWORD *)(v7 + 8);
  if ( *(_BYTE *)(v8 + 25) )
    goto LABEL_8;
  do
  {
    if ( *(_DWORD *)(v8 + 32) >= a3 )
    {
      v7 = v8;
      v8 = *(_QWORD *)v8;
    }
    else
    {
      v8 = *(_QWORD *)(v8 + 16);
    }
  }
  while ( !*(_BYTE *)(v8 + 25) );
  if ( v7 == *v6 || a3 < *(_DWORD *)(v7 + 32) )
LABEL_8:
    v7 = *v6;
  if ( v7 == *v6 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 32))(a1);
    v12 = 0LL;
    sub_18007ADCC(v9, (__int64 *)&v12, a3);
    (*(void (__fastcall **)(__int64 *, __int128 *))(*a1 + 16))(a1, &v12);
    v10 = (volatile signed __int32 *)*((_QWORD *)&v12 + 1);
    if ( *((_QWORD *)&v12 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
  }
  sub_1800392B0(v6, a2, a3);
  return a2;
}
