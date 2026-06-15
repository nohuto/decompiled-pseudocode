/*
 * XREFs of sub_18001B770 @ 0x18001B770
 * Callers:
 *     sub_180003D20 @ 0x180003D20 (sub_180003D20.c)
 *     sub_1800188D0 @ 0x1800188D0 (sub_1800188D0.c)
 *     sub_1800D4504 @ 0x1800D4504 (sub_1800D4504.c)
 * Callees:
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18003447C @ 0x18003447C (sub_18003447C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BABDC @ 0x1800BABDC (sub_1800BABDC.c)
 */

__int64 __fastcall sub_18001B770(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r15
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rdi
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, __int64); // rax
  _DWORD *v8; // r12
  __int64 v9; // rax

  v3 = *(_QWORD *)(a1 + 32);
  v4 = (volatile signed __int32 *)(v3 - 24);
  v5 = (volatile signed __int32 *)(*a2 - 24LL);
  if ( (volatile signed __int32 *)(v3 - 24) != v5 )
  {
    if ( *((int *)v5 + 4) >= 0 && *(_QWORD *)v4 == *(_QWORD *)v5 )
    {
      v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 32LL))(*(_QWORD *)v4);
      if ( *((int *)v4 + 4) >= 0 && v6 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v4 )
      {
        _InterlockedIncrement(v4 + 4);
      }
      else
      {
        v8 = v4 + 2;
        v9 = (**v6)(v6, *((unsigned int *)v4 + 2), 2LL);
        v4 = (volatile signed __int32 *)v9;
        if ( !v9 )
          sub_1800BABDC();
        *(_DWORD *)(v9 + 8) = *v8;
        sub_18003447C(v9 + 24, 2LL * (*v8 + 1), v3, 2LL * (*v8 + 1));
      }
      if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5, v5);
      *a2 = v4 + 6;
    }
    else
    {
      sub_18002BB70(a2, v3, *(unsigned int *)(v3 - 16));
    }
  }
  return 0LL;
}
