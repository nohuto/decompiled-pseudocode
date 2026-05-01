/*
 * XREFs of sub_18003D548 @ 0x18003D548
 * Callers:
 *     sub_18002A7E0 @ 0x18002A7E0 (sub_18002A7E0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003D548(__int64 *a1)
{
  __int64 v2; // rdx
  unsigned int v3; // edi
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  EnterCriticalSection(&stru_18005AF60);
  v2 = qword_18005AF50;
  v3 = 0;
  if ( qword_18005AF50 )
  {
    v4 = qword_18005AF58;
    if ( qword_18005AF58 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(qword_18005AF58 + 8));
      v4 = qword_18005AF58;
      v2 = qword_18005AF50;
    }
    v5 = (volatile signed __int32 *)a1[1];
    *a1 = v2;
    a1[1] = v4;
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
    }
  }
  else
  {
    v3 = -2147418113;
    sub_180003268(
      retaddr,
      23,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      -2147418113);
  }
  LeaveCriticalSection(&stru_18005AF60);
  return v3;
}
