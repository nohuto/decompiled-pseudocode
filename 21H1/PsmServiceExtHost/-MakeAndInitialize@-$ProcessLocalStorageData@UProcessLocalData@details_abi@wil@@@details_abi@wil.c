/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800655D4
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18006452C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180038004 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18003812C (-MemoryFree@@YAXPEAX@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18003A204 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180064754 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180065FEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800667C4 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        char *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // r8
  _WORD *v9; // rbx
  unsigned int v10; // edi
  int v11; // eax
  unsigned int v12; // r8d
  void *v13; // rdx
  wil::details *v14; // rbp
  wil::details *v15; // rsi
  _WORD *v16; // rax
  wil::details *v18[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  v6 = (unsigned __int64)wil::details::ProcessHeapAlloc(8u, 0x78uLL);
  v9 = (_WORD *)v6;
  if ( v6 )
  {
    *(_OWORD *)v18 = 0LL;
    if ( (v6 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
    v11 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(v18, a1, v8, v6 >> 2);
    v10 = v11;
    if ( v11 >= 0 )
    {
      *(_DWORD *)v9 = 1;
      v14 = 0LL;
      *((_QWORD *)v9 + 1) = *a2;
      *a2 = 0LL;
      v15 = 0LL;
      *((wil::details **)v9 + 2) = v18[0];
      v18[0] = 0LL;
      *((wil::details **)v9 + 3) = v18[1];
      v18[1] = 0LL;
      memset_0(v9 + 16, 0, 0x58uLL);
      v9[16] = 88;
      *((_DWORD *)v9 + 9) = 1;
      memset_0(v9 + 20, 0, 0x50uLL);
      v16 = v9;
      v9 = 0LL;
      v10 = 0;
      *a3 = v16;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x145, v12, (const char *)(unsigned int)v11, (int)v18[0]);
      v14 = v18[1];
      v15 = v18[0];
    }
    if ( v14 )
      wil::details::CloseHandle(v14, v13);
    if ( v15 )
      wil::details::CloseHandle(v15, v13);
    if ( v9 )
      MemoryFree(v9);
  }
  else
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x142, v8, (const char *)0x8007000ELL, (int)v18[0]);
  }
  return v10;
}
