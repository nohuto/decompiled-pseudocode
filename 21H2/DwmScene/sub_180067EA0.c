/*
 * XREFs of sub_180067EA0 @ 0x180067EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800703D4 @ 0x1800703D4 (sub_1800703D4.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180067EA0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  signed __int32 v6; // eax
  __int128 v7; // [rsp+20h] [rbp-18h]

  v7 = 0LL;
  v1 = *(_QWORD *)(a1 + 80);
  if ( v1 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v1 + 8);
      if ( !v6 )
        break;
      if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 8), v6 + 1, v6) )
      {
        v2 = *(_QWORD *)(a1 + 80);
        *((_QWORD *)&v7 + 1) = v2;
        v3 = sub_1800703D4(*(_QWORD *)(a1 + 72));
        goto LABEL_3;
      }
    }
  }
  v2 = 0LL;
  v3 = sub_1800703D4(0LL);
LABEL_3:
  v4 = v3;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v7 + 1))(*((_QWORD *)&v7 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v7 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v7 + 1) + 8LL))(*((_QWORD *)&v7 + 1));
    }
  }
  return v4;
}
