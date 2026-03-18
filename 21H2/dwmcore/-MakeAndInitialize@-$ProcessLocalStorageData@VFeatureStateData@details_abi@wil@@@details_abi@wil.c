/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800276B4
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800261C4 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180027784 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ??0?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAVSemaphoreValue@12@@Z @ 0x180027F74 (--0-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV-$u.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800295B8 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800F6630 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800F76D8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180178E94 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::MakeAndInitialize(
        unsigned __int16 *a1,
        __int64 a2,
        wil::details **a3)
{
  wil::details *v6; // rax
  wil::details::in1diag3 *v7; // rcx
  bool v8; // r8
  wil::details *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  void *v12; // rdx
  wil::details *v13; // rax
  wil::details *v15[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = (wil::details *)wil::details::ProcessHeapAlloc(8u, 0x130uLL, (unsigned __int64)a3);
  v9 = v6;
  if ( v6 )
  {
    *(_OWORD *)v15 = 0LL;
    if ( ((unsigned __int8)v6 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
    v10 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
            (wil::details_abi::SemaphoreValue *)v15,
            a1,
            v8,
            (unsigned __int64)v6 >> 2);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x145, (int)"wil", (const char *)(unsigned int)v10);
    }
    else
    {
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::ProcessLocalStorageData<wil::details_abi::FeatureStateData>(
        v9,
        a2,
        v15);
      v13 = v9;
      v9 = 0LL;
      v11 = 0;
      *a3 = v13;
    }
    if ( v15[1] )
      wil::details::CloseHandle(v15[1], v12);
    if ( v15[0] )
      wil::details::CloseHandle(v15[0], v12);
    if ( v9 )
      wil::details::FreeProcessHeap(v9, v12);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x142, (int)"wil", (const char *)0x8007000ELL);
  }
  return v11;
}
