/*
 * XREFs of sub_18009E210 @ 0x18009E210
 * Callers:
 *     sub_18008EEA4 @ 0x18008EEA4 (sub_18008EEA4.c)
 * Callees:
 *     sub_18008556C @ 0x18008556C (sub_18008556C.c)
 *     sub_18008C434 @ 0x18008C434 (sub_18008C434.c)
 *     sub_18008E824 @ 0x18008E824 (sub_18008E824.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_18009E210(_QWORD *a1, unsigned __int64 *a2, _BYTE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned __int64 result; // rax
  signed __int32 v9; // eax
  __int128 v10; // [rsp+20h] [rbp-59h]
  __int128 v11; // [rsp+30h] [rbp-49h] BYREF
  __int64 v12; // [rsp+40h] [rbp-39h]
  __int128 v13; // [rsp+48h] [rbp-31h] BYREF
  __int64 v14; // [rsp+58h] [rbp-21h]
  __int128 v15; // [rsp+60h] [rbp-19h] BYREF
  __int128 v16; // [rsp+80h] [rbp+7h]
  __int128 v17; // [rsp+90h] [rbp+17h]

  v10 = 0LL;
  v6 = a1[8];
  if ( v6 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v6 + 8);
      if ( !v9 )
        break;
      if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v9 + 1, v9) )
      {
        v7 = a1[8];
        *((_QWORD *)&v10 + 1) = v7;
        sub_18008556C(a1[7], (__int64)&v15);
        goto LABEL_3;
      }
    }
  }
  v7 = 0LL;
  sub_18008556C(0LL, (__int64)&v15);
LABEL_3:
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
    }
  }
  v11 = xmmword_1801CCE10;
  v12 = 0x3F8000003F800000LL;
  result = sub_18008E824(a1 + 11, &v11, *(double *)&v16, *(double *)&v17);
  if ( *a3 )
  {
    v13 = xmmword_1801CCE10;
    v14 = 0x3F8000003F800000LL;
    result = sub_18008C434(&v13, a2, (unsigned __int64 *)&v11);
    *(_OWORD *)a2 = v13;
    a2[2] = v14;
  }
  else
  {
    *(_OWORD *)a2 = v11;
    a2[2] = v12;
    *a3 = 1;
  }
  return result;
}
