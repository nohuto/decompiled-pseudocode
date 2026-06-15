/*
 * XREFs of ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x14003AB70
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x14003BB48 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14001B7E0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Clear@ThreadLocalData@details_abi@wil@@QEAAXXZ @ 0x14003AE98 (-Clear@ThreadLocalData@details_abi@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::~ProcessLocalStorageData<wil::details_abi::ProcessLocalData>(
        _QWORD *a1,
        void *a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rbx
  HANDLE ProcessHeap; // rax
  wil::details *v8; // rcx
  wil::details *v9; // rcx
  wil::details *v10; // rcx

  v3 = a1 + 5;
  v4 = a1 + 15;
  while ( v3 != v4 )
  {
    v5 = *v3;
    while ( v5 )
    {
      v6 = v5;
      v5 = *(_QWORD *)(v5 + 8);
      wil::details_abi::ThreadLocalData::Clear((wil::details_abi::ThreadLocalData *)(v6 + 16));
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, (LPVOID)v6);
    }
    *v3++ = 0LL;
  }
  v8 = (wil::details *)a1[3];
  if ( v8 )
    wil::details::CloseHandle(v8, a2);
  v9 = (wil::details *)a1[2];
  if ( v9 )
    wil::details::CloseHandle(v9, a2);
  v10 = (wil::details *)a1[1];
  if ( v10 )
    wil::details::CloseHandle(v10, a2);
}
