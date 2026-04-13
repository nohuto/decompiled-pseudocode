/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180006760
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180006ED0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000CC28 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180018720 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x1800187B0 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     memset_0 @ 0x1800CDE41 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  _WORD *v2; // rdi
  int v3; // ebp
  HANDLE ProcessHeap; // rax
  _WORD *v7; // rax
  int (*v8)(void *, void *); // r14
  _WORD *v9; // rbx
  HANDLE v10; // rax
  _WORD *v11; // rax
  _DWORD *v12; // rcx
  _DWORD *v13; // rdx
  __int64 v14; // r8
  unsigned __int16 v15; // dx
  __int64 v16; // rbp
  _QWORD *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  SIZE_T v26; // rsi
  HANDLE v27; // rax
  LPVOID v28; // rax
  int (*v29)(void *, void *); // rbx
  LPVOID v30; // r14
  HANDLE v31; // rax
  void *v32; // rbx
  HANDLE v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  void *v38; // rax

  v2 = (_WORD *)*((_QWORD *)this + 3);
  v3 = *((_DWORD *)this + 4);
  if ( v2 )
    goto LABEL_40;
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 8u, 0x190uLL);
    v8 = wil::details::g_pfnRtlDisownModuleHeapAllocation;
    v9 = v7;
    v2 = v7;
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v10 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, _WORD *))v8)(v10, v9);
    }
    *((_QWORD *)this + 3) = v9;
    if ( v9 )
    {
      v11 = v9 + 200;
      *((_DWORD *)this + 8) = 5;
      do
      {
        *v9 = 80;
        v9 += 40;
      }
      while ( v9 != v11 );
      v2 = (_WORD *)*((_QWORD *)this + 3);
    }
  }
  if ( v2 )
  {
LABEL_40:
    if ( !v3 || (v12 = &v2[40 * *((unsigned __int16 *)this + 16)], v2 == (_WORD *)v12) )
    {
LABEL_16:
      v14 = 1LL;
      v15 = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
      *((_WORD *)this + 17) = v15;
      v16 = 40LL * v15;
      *(_DWORD *)&v2[v16 + 2] = _InterlockedIncrement(*((volatile signed __int32 **)this + 1));
      *(_DWORD *)&v2[v16 + 4] = *((_DWORD *)a2 + 1);
      v17 = &v2[v16 + 28];
      *(_QWORD *)&v2[v16 + 8] = 0LL;
      v18 = -1LL;
      v2[v16 + 12] = *((_WORD *)a2 + 28);
      LOBYTE(v2[v16 + 13]) = *(_BYTE *)a2;
      *(_QWORD *)&v2[v16 + 16] = 0LL;
      *(_QWORD *)&v2[v16 + 20] = *((_QWORD *)a2 + 16);
      *(_QWORD *)&v2[v16 + 24] = *((_QWORD *)a2 + 17);
      *v17 = 0LL;
      v19 = *((_QWORD *)a2 + 6);
      if ( v19 )
      {
        v21 = -1LL;
        do
          ++v21;
        while ( *(_BYTE *)(v19 + v21) );
        v20 = v21 + 1;
      }
      else
      {
        v20 = 1LL;
      }
      v22 = *((_QWORD *)a2 + 15);
      if ( v22 )
      {
        v23 = -1LL;
        do
          ++v23;
        while ( *(_BYTE *)(v22 + v23) );
        v14 = v23 + 1;
      }
      v24 = *((_QWORD *)a2 + 2);
      if ( v24 )
      {
        do
          ++v18;
        while ( *(_WORD *)(v24 + 2 * v18) );
        v25 = 2 * v18 + 2;
      }
      else
      {
        v25 = 2LL;
      }
      v26 = v20 + v25 + v14;
      if ( !*(_QWORD *)&v2[v16 + 32] || *(_QWORD *)&v2[v16 + 36] < v26 )
      {
        v27 = GetProcessHeap();
        v28 = HeapAlloc(v27, 8u, v26);
        v29 = wil::details::g_pfnRtlDisownModuleHeapAllocation;
        v30 = v28;
        if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
        {
          v31 = GetProcessHeap();
          ((void (__fastcall *)(HANDLE, LPVOID))v29)(v31, v30);
        }
        if ( v30 )
        {
          v32 = *(void **)&v2[v16 + 32];
          v33 = GetProcessHeap();
          HeapFree(v33, 0, v32);
          *(_QWORD *)&v2[v16 + 32] = v30;
          *(_QWORD *)&v2[v16 + 36] = v26;
        }
        v17 = &v2[v16 + 28];
      }
      v34 = *(_QWORD *)&v2[v16 + 32];
      if ( v34 )
      {
        v35 = v34 + *(_QWORD *)&v2[v16 + 36];
        v36 = wil::details::WriteResultString<char const *>(v34, v35, *((_QWORD *)a2 + 6), &v2[v16 + 8]);
        v37 = wil::details::WriteResultString<char const *>(v36, v35, *((_QWORD *)a2 + 15), &v2[v16 + 16]);
        v38 = (void *)wil::details::WriteResultString<unsigned short const *>(v37, v35, *((_QWORD *)a2 + 2), v17);
        memset_0(v38, 0, v35 - (_QWORD)v38);
      }
    }
    else
    {
      v13 = v2 + 4;
      while ( *(v13 - 1) <= *((_DWORD *)this + 4) || *v13 != *((_DWORD *)a2 + 1) )
      {
        v13 += 20;
        if ( v13 - 2 == v12 )
          goto LABEL_16;
      }
    }
  }
}
