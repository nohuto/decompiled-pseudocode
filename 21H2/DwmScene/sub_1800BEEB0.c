/*
 * XREFs of sub_1800BEEB0 @ 0x1800BEEB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007A810 @ 0x18007A810 (sub_18007A810.c)
 *     sub_1800BCE78 @ 0x1800BCE78 (sub_1800BCE78.c)
 *     sub_1800C8214 @ 0x1800C8214 (sub_1800C8214.c)
 *     sub_1800C857C @ 0x1800C857C (sub_1800C857C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800BEEB0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 *v6; // rax
  __int64 v7; // r8
  volatile signed __int32 *v8; // rbx
  __int64 result; // rax
  volatile signed __int32 *v10; // rbx
  __int128 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int32 *v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF

  v14 = 0LL;
  v11 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v11 = *a2;
  *((_QWORD *)&v11 + 1) = v4;
  sub_18007A810(a1, &v14, 0LL, &v11);
  if ( (_QWORD)v14 )
  {
    if ( (*(_DWORD *)(v14 + 440) & 0x2000000) != 0 )
    {
      v6 = sub_1800BCE78(&v12, &v14);
      LOBYTE(v7) = 1;
      sub_1800C8214(a1, v6, v7);
      v8 = v13;
      if ( v13 )
      {
        if ( !_InterlockedDecrement(v13 + 2) )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
          if ( !_InterlockedDecrement(v8 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
        }
      }
    }
  }
  LOBYTE(v5) = 1;
  result = sub_1800C857C(a1, a2, v5);
  v10 = (volatile signed __int32 *)*((_QWORD *)&v14 + 1);
  if ( *((_QWORD *)&v14 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return result;
}
