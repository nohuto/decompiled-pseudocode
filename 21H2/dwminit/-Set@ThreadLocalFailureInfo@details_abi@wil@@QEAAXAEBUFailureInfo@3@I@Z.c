/*
 * XREFs of ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180003770
 * Callers:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180003AE4 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 * Callees:
 *     memcpy_s @ 0x180001520 (memcpy_s.c)
 *     memset_0 @ 0x18000D0A8 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details_abi::ThreadLocalFailureInfo::Set(
        wil::details_abi::ThreadLocalFailureInfo *this,
        const struct wil::FailureInfo *a2,
        int a3)
{
  char **v3; // r14
  char **v4; // r12
  char **v5; // r15
  __int64 v7; // rbp
  const struct wil::FailureInfo *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  SIZE_T v18; // rsi
  HANDLE ProcessHeap; // rax
  LPVOID v20; // rax
  int (*v21)(void *, void *); // rbx
  LPVOID v22; // r13
  HANDLE v23; // rax
  void *v24; // rbx
  HANDLE v25; // rax
  char *v26; // rbx
  rsize_t v27; // rdx
  _BYTE *v28; // r8
  char *v29; // rsi
  __int64 v30; // rdi
  rsize_t v31; // rdi
  _BYTE *v32; // r8
  __int64 v33; // rdi
  rsize_t v34; // rdi
  _WORD *v35; // r8
  unsigned __int64 v36; // rdi

  *((_DWORD *)this + 1) = a3;
  v3 = (char **)((char *)this + 16);
  v4 = (char **)((char *)this + 32);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 1);
  v5 = (char **)((char *)this + 56);
  *((_QWORD *)this + 2) = 0LL;
  v7 = -1LL;
  v8 = a2;
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
  v15 = *((_QWORD *)v8 + 2);
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
    v21 = wil::details::g_pfnRtlDisownModuleHeapAllocation;
    v22 = v20;
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v23 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, LPVOID))v21)(v23, v22);
    }
    if ( v22 )
    {
      v24 = (void *)*((_QWORD *)this + 8);
      v25 = GetProcessHeap();
      HeapFree(v25, 0, v24);
      *((_QWORD *)this + 8) = v22;
      *((_QWORD *)this + 9) = v18;
    }
    v8 = a2;
  }
  v26 = (char *)*((_QWORD *)this + 8);
  if ( v26 )
  {
    v27 = *((_QWORD *)this + 9);
    v28 = (_BYTE *)*((_QWORD *)v8 + 6);
    v29 = &v26[v27];
    if ( v26 == &v26[v27] )
      goto LABEL_35;
    if ( !v28 )
      goto LABEL_35;
    if ( !*v28 )
      goto LABEL_35;
    v30 = -1LL;
    do
      ++v30;
    while ( v28[v30] );
    v31 = v30 + 1;
    if ( v27 >= v31 )
    {
      if ( v31 )
      {
        memcpy_s(v26, v27, v28, v31);
        v8 = a2;
      }
      if ( v3 )
        *v3 = v26;
      v26 += v31;
    }
    else
    {
LABEL_35:
      if ( v3 )
        *v3 = 0LL;
    }
    v32 = (_BYTE *)*((_QWORD *)v8 + 15);
    if ( v26 == v29 )
      goto LABEL_48;
    if ( !v32 )
      goto LABEL_48;
    if ( !*v32 )
      goto LABEL_48;
    v33 = -1LL;
    do
      ++v33;
    while ( v32[v33] );
    v34 = v33 + 1;
    if ( v29 - v26 >= v34 )
    {
      if ( v34 )
      {
        memcpy_s(v26, v29 - v26, v32, v34);
        v8 = a2;
      }
      if ( v4 )
        *v4 = v26;
      v26 += v34;
    }
    else
    {
LABEL_48:
      if ( v4 )
        *v4 = 0LL;
    }
    v35 = (_WORD *)*((_QWORD *)v8 + 2);
    if ( v26 == v29 || !v35 || !*v35 )
      goto LABEL_60;
    do
      ++v7;
    while ( v35[v7] );
    v36 = 2 * v7 + 2;
    if ( v29 - v26 >= v36 )
    {
      if ( 2 * v7 != -2 )
        memcpy_s(v26, v29 - v26, v35, 2 * v7 + 2);
      if ( v5 )
        *v5 = v26;
      v26 += v36;
    }
    else
    {
LABEL_60:
      if ( v5 )
        *v5 = 0LL;
    }
    memset_0(v26, 0, v29 - v26);
  }
}
