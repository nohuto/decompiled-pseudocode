/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180178118
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800F5230 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180027784 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800295B8 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800F6630 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800F76D8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180178E94 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        unsigned __int16 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rbx
  unsigned int v10; // edi
  int v11; // eax
  void *v12; // rdx
  wil::details *v13; // rbp
  wil::details *v14; // rsi
  _QWORD *v15; // rax
  wil::details *v17[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = (unsigned __int64)wil::details::ProcessHeapAlloc(8u, 0x78uLL);
  v9 = (_QWORD *)v6;
  if ( v6 )
  {
    *(_OWORD *)v17 = 0LL;
    if ( (v6 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
    v11 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
            (wil::details_abi::SemaphoreValue *)v17,
            a1,
            v8,
            v6 >> 2);
    v10 = v11;
    if ( v11 >= 0 )
    {
      *(_DWORD *)v9 = 1;
      v13 = 0LL;
      v9[1] = *a2;
      *a2 = 0LL;
      v14 = 0LL;
      v9[2] = v17[0];
      v9[3] = v17[1];
      v17[0] = 0LL;
      v17[1] = 0LL;
      memset_0((char *)v9 + 34, 0, 0x56uLL);
      *((_WORD *)v9 + 16) = 88;
      *((_DWORD *)v9 + 9) = 1;
      memset_0(v9 + 5, 0, 0x50uLL);
      v15 = v9;
      v9 = 0LL;
      v10 = 0;
      *a3 = v15;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x145, (int)"wil", (const char *)(unsigned int)v11);
      v13 = v17[1];
      v14 = v17[0];
    }
    if ( v13 )
      wil::details::CloseHandle(v13, v12);
    if ( v14 )
      wil::details::CloseHandle(v14, v12);
    if ( v9 )
      wil::details::FreeProcessHeap((wil::details *)v9, v12);
  }
  else
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x142, (int)"wil", (const char *)0x8007000ELL);
  }
  return v10;
}
