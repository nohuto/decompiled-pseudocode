/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x140025044
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140021A7C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1400147E4 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1400153EC (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAVSemaphoreValue@12@@Z @ 0x140020520 (--0-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV-$u.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x140028284 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x14003AD80 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x14003B1D0 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::MakeAndInitialize(
        unsigned __int16 *a1,
        _QWORD *a2,
        wil::details **a3)
{
  wil::details *v6; // rax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // r8
  wil::details *v9; // rbx
  unsigned int v10; // edi
  wil::details *v11; // rsi
  int v12; // eax
  void *v13; // rdx
  int v15[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = (wil::details *)wil::details::ProcessHeapAlloc(8u, 0x130uLL);
  v9 = v6;
  if ( v6 )
  {
    v11 = v6;
    *(_OWORD *)v15 = 0LL;
    if ( ((unsigned __int8)v6 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
    v12 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
            (wil::details **)v15,
            a1,
            v8,
            (unsigned __int64)v6 >> 2);
    v10 = v12;
    if ( v12 >= 0 )
    {
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::ProcessLocalStorageData<wil::details_abi::FeatureStateData>(
        (__int64)v9,
        a2,
        v15);
      v9 = 0LL;
      *a3 = v11;
      v10 = 0;
      v11 = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x145, (__int64)"wil", (const char *)(unsigned int)v12);
    }
    wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)v15);
    if ( v11 )
      wil::details::FreeProcessHeap(v9, v13);
  }
  else
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x142, (__int64)"wil", (const char *)0x8007000ELL);
  }
  return v10;
}
