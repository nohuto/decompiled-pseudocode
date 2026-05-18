/*
 * XREFs of sub_18007B610 @ 0x18007B610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007B610(__int64 a1, __int64 *a2)
{
  volatile signed __int32 *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 result; // rax
  volatile signed __int32 *v6; // [rsp+28h] [rbp-18h]
  __int128 v7; // [rsp+30h] [rbp-10h] BYREF

  v2 = (volatile signed __int32 *)a2[1];
  if ( v2 )
  {
    _InterlockedIncrement(v2 + 2);
    v2 = (volatile signed __int32 *)a2[1];
  }
  v3 = *a2;
  v6 = v2;
  v7 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = *(_QWORD *)(a1 + 16);
  }
  *(_QWORD *)&v7 = *(_QWORD *)(a1 + 8);
  *((_QWORD *)&v7 + 1) = v4;
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v3 + 96LL))(v3, &v7);
  if ( v6 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return result;
}
