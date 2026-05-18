/*
 * XREFs of ??1ThreadLocalData@details_abi@wil@@QEAA@XZ @ 0x180003A24
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800077F0 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA?AV?$pointer_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@details@0@PEAUThreadLocalFailureInfo@details_abi@0@_K@Z @ 0x180007B7C (--$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA-AV-$pointer_range@PEAUThreadL.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::~ThreadLocalData(wil::details_abi::ThreadLocalData *this)
{
  void *v1; // rbx
  __int64 v3; // rsi
  void *v4; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v6; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v1 = (void *)*((_QWORD *)this + 3);
  wil::make_range<wil::details_abi::ThreadLocalFailureInfo *>(&v7, v1, *((unsigned __int16 *)this + 16));
  if ( v7 != v8 )
  {
    v3 = v7 + 64;
    do
    {
      v4 = *(void **)v3;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v4);
      *(_QWORD *)v3 = 0LL;
      *(_QWORD *)(v3 + 8) = 0LL;
      v3 += 80LL;
    }
    while ( v3 - 64 != v8 );
    v1 = (void *)*((_QWORD *)this + 3);
  }
  v6 = GetProcessHeap();
  HeapFree(v6, 0, v1);
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = 0LL;
}
