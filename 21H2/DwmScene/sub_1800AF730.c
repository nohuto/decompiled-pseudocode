/*
 * XREFs of sub_1800AF730 @ 0x1800AF730
 * Callers:
 *     <none>
 * Callees:
 *     sub_180069518 @ 0x180069518 (sub_180069518.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     sub_1800B1C18 @ 0x1800B1C18 (sub_1800B1C18.c)
 *     sub_1800B1E40 @ 0x1800B1E40 (sub_1800B1E40.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800AF730(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rbx
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v9; // [rsp+50h] [rbp-18h] BYREF

  v9 = a2;
  if ( *(_DWORD *)(a1 + 128) )
  {
    v7 = 0LL;
    sub_1800B1E40(a1, &v7);
    v8 = 0LL;
    sub_1800B1C18(a1, &v8);
  }
  LODWORD(v9) = sub_18007040C(*a2);
  result = sub_180069518((__int64 *)(a1 + 448), (unsigned int *)&v9);
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v5 = (volatile signed __int32 *)a2[1];
  }
  if ( v5 )
  {
    result = (unsigned int)_InterlockedDecrement(v5 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedDecrement(v5 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
    result = (unsigned int)_InterlockedDecrement(v6 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return result;
}
