/*
 * XREFs of sub_180005AF0 @ 0x180005AF0
 * Callers:
 *     sub_1800055B0 @ 0x1800055B0 (sub_1800055B0.c)
 * Callees:
 *     sub_180005BE4 @ 0x180005BE4 (sub_180005BE4.c)
 *     sub_180005D54 @ 0x180005D54 (sub_180005D54.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18003447C @ 0x18003447C (sub_18003447C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BABDC @ 0x1800BABDC (sub_1800BABDC.c)
 */

__int64 __fastcall sub_180005AF0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r15
  __int64 v5; // r14
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rsi
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, __int64); // rcx
  _DWORD *v10; // r12
  __int64 v11; // rax

  if ( (int)sub_180005D54() < 0
    || (*(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56),
        *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 60),
        *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64),
        (int)sub_180005BE4(a1 + 8, a2 + 8) < 0) )
  {
    JUMPOUT(0x18007ECFDLL);
  }
  v4 = (_QWORD *)(a1 + 72);
  v5 = *(_QWORD *)(a2 + 72);
  v6 = (volatile signed __int32 *)(v5 - 24);
  v7 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 72) - 24LL);
  if ( (volatile signed __int32 *)(v5 - 24) != v7 )
  {
    if ( *((int *)v7 + 4) >= 0 && *(_QWORD *)v6 == *(_QWORD *)v7 )
    {
      v8 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v6 + 32LL))(*(_QWORD *)v6);
      if ( *((int *)v6 + 4) >= 0 && v8 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v6 )
      {
        _InterlockedIncrement(v6 + 4);
      }
      else
      {
        v10 = v6 + 2;
        v11 = (**v8)(v8, *((unsigned int *)v6 + 2), 2LL);
        v6 = (volatile signed __int32 *)v11;
        if ( !v11 )
          sub_1800BABDC();
        *(_DWORD *)(v11 + 8) = *v10;
        sub_18003447C(v11 + 24, 2LL * (*v10 + 1), v5, 2LL * (*v10 + 1));
      }
      if ( _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v7 + 8LL))(*(_QWORD *)v7, v7);
      *v4 = v6 + 6;
    }
    else
    {
      sub_18002BB70(v4, v5, *(unsigned int *)(v5 - 16));
    }
  }
  return 0LL;
}
