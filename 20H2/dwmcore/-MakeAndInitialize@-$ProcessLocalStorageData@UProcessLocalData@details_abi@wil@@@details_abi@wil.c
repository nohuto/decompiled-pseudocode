/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18014D4F4
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18014C6D4 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180029D98 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18002C108 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180051D10 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800D9770 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18014E2D4 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        size_t *a1,
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
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  void *v16; // rdx
  void *v17; // rdx
  int v19[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  v6 = (unsigned __int64)wil::details::ProcessHeapAlloc(8u, 0x78uLL);
  v9 = (_QWORD *)v6;
  if ( v6 )
  {
    *(_OWORD *)v19 = 0LL;
    if ( (v6 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
    v11 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
            (wil::details_abi::SemaphoreValue *)v19,
            a1,
            v8,
            v6 >> 2);
    v10 = v11;
    if ( v11 >= 0 )
    {
      *(_DWORD *)v9 = 1;
      v9[1] = *a2;
      v13 = *(_QWORD *)v19;
      *a2 = 0LL;
      *(_QWORD *)v19 = 0LL;
      v9[2] = v13;
      v14 = *(_QWORD *)&v19[2];
      *(_QWORD *)&v19[2] = 0LL;
      v9[3] = v14;
      memset_0(v9 + 4, 0, 0x58uLL);
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
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x145,
        (unsigned int)"wil",
        (const char *)(unsigned int)v11,
        v19[0]);
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
      (wil::details **)&v19[2],
      v12);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
      (wil::details **)v19,
      v16);
    if ( v9 )
      wil::details::FreeProcessHeap((wil::details *)v9, v17);
  }
  else
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x142, (unsigned int)"wil", (const char *)0x8007000ELL, v19[0]);
  }
  return v10;
}
