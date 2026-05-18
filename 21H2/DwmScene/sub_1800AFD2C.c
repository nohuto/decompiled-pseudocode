/*
 * XREFs of sub_1800AFD2C @ 0x1800AFD2C
 * Callers:
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 *     sub_1800B26D0 @ 0x1800B26D0 (sub_1800B26D0.c)
 *     sub_1800C7A24 @ 0x1800C7A24 (sub_1800C7A24.c)
 * Callees:
 *     sub_1800864F0 @ 0x1800864F0 (sub_1800864F0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_1800AFD2C(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rsi
  signed __int32 v6; // eax
  __int128 v7; // [rsp+20h] [rbp-18h]

  v7 = 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v2 + 8);
      if ( !v6 )
        break;
      if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v6 + 1, v6) )
      {
        v3 = *(_QWORD *)(a1 + 64);
        *((_QWORD *)&v7 + 1) = v3;
        result = sub_1800864F0(*(_QWORD *)(a1 + 56));
        goto LABEL_3;
      }
    }
  }
  v3 = 0LL;
  result = sub_1800864F0(0LL);
LABEL_3:
  v5 = result;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v7 + 1))(*((_QWORD *)&v7 + 1));
      result = (unsigned int)_InterlockedExchangeAdd(
                               (volatile signed __int32 *)(*((_QWORD *)&v7 + 1) + 12LL),
                               0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v7 + 1) + 8LL))(*((_QWORD *)&v7 + 1));
    }
  }
  if ( v5 != *(_QWORD *)(a1 + 96) )
  {
    *(_DWORD *)(a1 + 544) |= 1u;
    *(_QWORD *)(a1 + 96) = v5;
  }
  return result;
}
