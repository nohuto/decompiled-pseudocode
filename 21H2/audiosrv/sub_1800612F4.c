/*
 * XREFs of sub_1800612F4 @ 0x1800612F4
 * Callers:
 *     sub_1800638B0 @ 0x1800638B0 (sub_1800638B0.c)
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180061438 @ 0x180061438 (sub_180061438.c)
 *     sub_1800615D4 @ 0x1800615D4 (sub_1800615D4.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180069110 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
std::_Ref_count_base **__fastcall sub_1800612F4(std::_Ref_count_base **a1)
{
  __int64 v2; // rdx
  std::_Ref_count_base *v3; // rsi
  LPVOID v4; // rax
  __int64 v5; // rdi
  void *v6; // rcx
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v8; // rbx
  std::_Ref_count_base *v9; // rcx
  signed __int32 v11; // eax
  std::_Ref_count_base *v12[2]; // [rsp+20h] [rbp-20h]

  AcquireSRWLockExclusive(&stru_18019F730);
  *(_OWORD *)v12 = 0LL;
  v2 = *((_QWORD *)&xmmword_18019F738 + 1);
  if ( *((_QWORD *)&xmmword_18019F738 + 1) )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v2 + 8);
      if ( !v11 )
        break;
      if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v11 + 1, v11) )
      {
        *(_OWORD *)v12 = xmmword_18019F738;
        break;
      }
    }
  }
  v3 = v12[0];
  if ( v12[0] )
  {
    v8 = v12[1];
  }
  else
  {
    v4 = sub_180055F40(0x20uLL);
    if ( v4 )
      v5 = sub_180061438(v4);
    else
      v5 = 0LL;
    v6 = *(void **)(v5 + 24);
    if ( v6 && (int)sub_1800615D4(v6) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v3 = (std::_Ref_count_base *)(v5 + 16);
      v12[0] = (std::_Ref_count_base *)(v5 + 16);
      v7 = v12[1];
      v8 = (std::_Ref_count_base *)v5;
      v12[1] = (std::_Ref_count_base *)v5;
      if ( v7 )
        sub_180052600(v7);
    }
    else
    {
      v8 = v12[1];
    }
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v8 + 3);
      v8 = v12[1];
      v3 = v12[0];
    }
    *(_QWORD *)&xmmword_18019F738 = v3;
    v9 = (std::_Ref_count_base *)*((_QWORD *)&xmmword_18019F738 + 1);
    *((_QWORD *)&xmmword_18019F738 + 1) = v8;
    if ( v9 )
      std::_Ref_count_base::_Decwref(v9);
    sub_180052600((std::_Ref_count_base *)v5);
  }
  *a1 = v3;
  a1[1] = v8;
  ReleaseSRWLockExclusive(&stru_18019F730);
  return a1;
}
