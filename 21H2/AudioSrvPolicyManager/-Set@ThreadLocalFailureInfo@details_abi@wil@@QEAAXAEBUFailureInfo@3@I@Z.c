/*
 * XREFs of ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x18000419C
 * Callers:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x1800044A8 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 * Callees:
 *     memcpy_s @ 0x180001FD0 (memcpy_s.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180005048 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     memset_0 @ 0x18003A7D8 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details_abi::ThreadLocalFailureInfo::Set(
        wil::details_abi::ThreadLocalFailureInfo *this,
        const struct wil::FailureInfo *a2,
        int a3)
{
  char **v3; // r15
  char **v4; // r14
  char *v5; // r13
  __int64 v7; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  SIZE_T v18; // rbx
  HANDLE ProcessHeap; // rax
  LPVOID v20; // rbp
  HANDLE v21; // rax
  HANDLE v22; // rax
  char *v23; // rbx
  rsize_t v24; // rdx
  _BYTE *v25; // r8
  char *v26; // rbp
  __int64 v27; // rdi
  rsize_t v28; // rdi
  _BYTE *v29; // r8
  rsize_t v30; // rsi
  void *v31; // rax

  *((_DWORD *)this + 1) = a3;
  v3 = (char **)((char *)this + 16);
  v4 = (char **)((char *)this + 32);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 1);
  v5 = (char *)this + 56;
  *((_QWORD *)this + 2) = 0LL;
  v7 = -1LL;
  *((_WORD *)this + 12) = *((_WORD *)a2 + 28);
  *((_BYTE *)this + 26) = *(_BYTE *)a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 16);
  *((_QWORD *)this + 6) = *((_QWORD *)a2 + 17);
  *((_QWORD *)this + 7) = 0LL;
  v9 = *((_QWORD *)a2 + 6);
  if ( v9 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_BYTE *)(v9 + v11) );
    v10 = v11 + 1;
  }
  else
  {
    v10 = 1LL;
  }
  v12 = *((_QWORD *)a2 + 15);
  if ( v12 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_BYTE *)(v12 + v14) );
    v13 = v14 + 1;
  }
  else
  {
    v13 = 1LL;
  }
  v15 = *((_QWORD *)a2 + 2);
  if ( v15 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(v15 + 2 * v17) );
    v16 = 2 * v17 + 2;
  }
  else
  {
    v16 = 2LL;
  }
  v18 = v10 + v16 + v13;
  if ( !*((_QWORD *)this + 8) || *((_QWORD *)this + 9) < v18 )
  {
    ProcessHeap = GetProcessHeap();
    v20 = HeapAlloc(ProcessHeap, 8u, v18);
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v21 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, LPVOID))wil::details::g_pfnRtlDisownModuleHeapAllocation)(v21, v20);
    }
    if ( v20 )
    {
      v22 = GetProcessHeap();
      HeapFree(v22, 0, *((LPVOID *)this + 8));
      *((_QWORD *)this + 8) = v20;
      *((_QWORD *)this + 9) = v18;
    }
  }
  v23 = (char *)*((_QWORD *)this + 8);
  if ( v23 )
  {
    v24 = *((_QWORD *)this + 9);
    v25 = (_BYTE *)*((_QWORD *)a2 + 6);
    v26 = &v23[v24];
    if ( v23 == &v23[v24] )
      goto LABEL_32;
    if ( !v25 )
      goto LABEL_32;
    if ( !*v25 )
      goto LABEL_32;
    v27 = -1LL;
    do
      ++v27;
    while ( v25[v27] );
    v28 = v27 + 1;
    if ( v24 >= v28 )
    {
      memcpy_s(v23, v24, v25, v28);
      if ( v3 )
        *v3 = v23;
      v23 += v28;
    }
    else
    {
LABEL_32:
      if ( v3 )
        *v3 = 0LL;
    }
    v29 = (_BYTE *)*((_QWORD *)a2 + 15);
    if ( v23 == v26 || !v29 || !*v29 )
      goto LABEL_42;
    do
      ++v7;
    while ( v29[v7] );
    v30 = v7 + 1;
    if ( v26 - v23 >= v30 )
    {
      memcpy_s(v23, v26 - v23, v29, v30);
      if ( v4 )
        *v4 = v23;
      v23 += v30;
    }
    else
    {
LABEL_42:
      if ( v4 )
        *v4 = 0LL;
    }
    v31 = (void *)wil::details::WriteResultString<unsigned short const *>(v23, v26, *((_QWORD *)a2 + 2), v5);
    memset_0(v31, 0, v26 - (_BYTE *)v31);
  }
}
