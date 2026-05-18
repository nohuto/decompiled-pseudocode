/*
 * XREFs of sub_180071210 @ 0x180071210
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066E3C @ 0x180066E3C (sub_180066E3C.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18007044C @ 0x18007044C (sub_18007044C.c)
 *     sub_1800704CC @ 0x1800704CC (sub_1800704CC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180071210(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // esi
  unsigned int i; // edi
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int128 v9; // [rsp+30h] [rbp-88h] BYREF
  __int128 v10; // [rsp+40h] [rbp-78h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( (_BYTE)result )
  {
    result = sub_1800704CC(a1);
    v5 = result;
    for ( i = 0; i < v5; ++i )
    {
      v9 = 0LL;
      sub_18007044C(a1, &v9, i);
      v7 = v9;
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 368LL))(v9);
      if ( result == a2 )
      {
        v10 = 0LL;
        sub_180066E3C(v7 + 8, (__int64)&v10);
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
        if ( BYTE8(v10) )
          result = sub_180067304(v10);
      }
      if ( *((_QWORD *)&v9 + 1) )
      {
        result = (unsigned int)_InterlockedExchangeAdd(
                                 (volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL),
                                 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
        {
          v8 = *((_QWORD *)&v9 + 1);
          (***((void (__fastcall ****)(_QWORD))&v9 + 1))(*((_QWORD *)&v9 + 1));
          result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 12), 0xFFFFFFFF);
          if ( (_DWORD)result == 1 )
            result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 8LL))(*((_QWORD *)&v9 + 1));
        }
      }
    }
  }
  return result;
}
