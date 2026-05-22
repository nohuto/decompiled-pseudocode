/*
 * XREFs of ?_Push_back_internal@?$deque@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@AEAAX$$QEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@Z @ 0x180167654
 * Callers:
 *     ?Then@ChainedThreadpoolWorker@ThreadHelpers@@QEAAX$$QEAV?$function@$$A6AXXZ@std@@PEAUIUnknown@@@Z @ 0x180166530 (-Then@ChainedThreadpoolWorker@ThreadHelpers@@QEAAX$$QEAV-$function@$$A6AXXZ@std@@PEAUIUnknown@@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180013120 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Growmap@?$deque@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x1801674F0 (-_Growmap@-$deque@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIUnknown@@@WRL@Mi.c)
 */

__int64 __fastcall std::deque<Microsoft::WRL::ComPtr<IUnknown>>::_Push_back_internal(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rax
  size_t size_of; // rax
  __int64 result; // rax
  __int64 *v12; // rcx

  v4 = a1[4];
  v5 = a1[3];
  if ( (((_BYTE)v4 + (_BYTE)v5) & 1) == 0 && a1[2] <= (unsigned __int64)(v4 + 2) >> 1 )
  {
    std::deque<Microsoft::WRL::ComPtr<IUnknown>>::_Growmap(a1);
    v5 = a1[3];
  }
  v6 = v5 & (2LL * a1[2] - 1);
  a1[3] = v6;
  v7 = v6 + a1[4];
  v8 = (v7 >> 1) & (a1[2] - 1LL);
  v9 = a1[1];
  if ( !*(_QWORD *)(v9 + 8 * v8) )
  {
    size_of = std::_Get_size_of_n<8>(2uLL);
    *(_QWORD *)(a1[1] + 8 * v8) = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v9 = a1[1];
  }
  result = *(_QWORD *)(v9 + 8 * v8);
  v12 = (__int64 *)(result + 8 * (v7 & 1));
  *v12 = 0LL;
  if ( v12 != a2 )
  {
    result = *a2;
    *v12 = *a2;
    *a2 = 0LL;
  }
  ++a1[4];
  return result;
}
