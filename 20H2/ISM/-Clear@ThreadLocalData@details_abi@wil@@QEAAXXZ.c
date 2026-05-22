/*
 * XREFs of ?Clear@ThreadLocalData@details_abi@wil@@QEAAXXZ @ 0x18006494C
 * Callers:
 *     ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x180063F98 (--1-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details_abi::ThreadLocalData::Clear(wil::details_abi::ThreadLocalData *this)
{
  char *v1; // rbx
  char *v3; // rbp
  char *v4; // rsi
  void *v5; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v7; // rax

  v1 = (char *)*((_QWORD *)this + 3);
  v3 = &v1[80 * *((unsigned __int16 *)this + 16)];
  if ( v1 != v3 )
  {
    v4 = v1 + 64;
    do
    {
      v5 = *(void **)v4;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v5);
      *(_QWORD *)v4 = 0LL;
      *((_QWORD *)v4 + 1) = 0LL;
      v4 += 80;
    }
    while ( v4 - 64 != v3 );
    v1 = (char *)*((_QWORD *)this + 3);
  }
  v7 = GetProcessHeap();
  HeapFree(v7, 0, v1);
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = 0LL;
}
