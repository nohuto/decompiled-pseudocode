/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x140015258
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140015540 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x140014B24 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1400154D0 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14001B52C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     memset_0 @ 0x14001DBE8 (memset_0.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1400309A8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x140031FC4 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
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
  int v10; // eax
  unsigned int v11; // edi
  wil::details *v12; // rbp
  wil::details *v13; // rsi
  void *v14; // rdx
  _QWORD *v15; // rax
  int v17[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  v6 = (unsigned __int64)wil::details::ProcessHeapAlloc(8u, 0x78uLL, (unsigned __int64)a3);
  v9 = (_QWORD *)v6;
  if ( v6 )
  {
    *(_OWORD *)v17 = 0LL;
    if ( (v6 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
    v10 = wil::details_abi::SemaphoreValue::CreateFromValueInternal((wil::details **)v17, a1, v8, v6 >> 2);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x145,
        (unsigned int)"wil",
        (const char *)(unsigned int)v10,
        v17[0]);
      v12 = *(wil::details **)&v17[2];
      v13 = *(wil::details **)v17;
    }
    else
    {
      *(_DWORD *)v9 = 1;
      v12 = 0LL;
      v9[1] = *a2;
      *a2 = 0LL;
      v13 = 0LL;
      v9[2] = *(_QWORD *)v17;
      *(_QWORD *)v17 = 0LL;
      v9[3] = *(_QWORD *)&v17[2];
      *(_QWORD *)&v17[2] = 0LL;
      memset_0(v9 + 4, 0, 0x58uLL);
      *((_WORD *)v9 + 16) = 88;
      *((_DWORD *)v9 + 9) = 1;
      memset_0(v9 + 5, 0, 0x50uLL);
      v15 = v9;
      v9 = 0LL;
      v11 = 0;
      *a3 = v15;
    }
    if ( v12 )
      wil::details::CloseHandle(v12, v14);
    if ( v13 )
      wil::details::CloseHandle(v13, v14);
    if ( v9 )
      wil::details::FreeProcessHeap((wil::details *)v9, v14);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x142, (unsigned int)"wil", (const char *)0x8007000ELL, v17[0]);
  }
  return v11;
}
