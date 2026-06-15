/*
 * XREFs of ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180038D1C
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x1800466B0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180064F20 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180066344 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

struct wil::details_abi::ThreadLocalData *__fastcall wil::details_abi::GetThreadLocalDataCache(wil::details_abi *this)
{
  __int64 v1; // rbx
  char v2; // r15
  char *v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 CurrentThreadId; // r14
  unsigned __int64 v6; // rbp
  __int64 i; // rdi
  HANDLE ProcessHeap; // rax
  _QWORD *v9; // rbx
  signed __int64 v10; // rax
  __int64 v12; // rcx
  HANDLE v13; // rax
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v1 = wil::details_abi::g_pProcessLocalData;
  v2 = (char)this;
  v3 = 0LL;
  if ( wil::details_abi::g_pProcessLocalData )
  {
    if ( !*(_QWORD *)(wil::details_abi::g_pProcessLocalData + 8) )
    {
      v12 = *(_QWORD *)wil::details_abi::g_pProcessLocalData;
      v14 = 0LL;
      if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(v12, &v14) >= 0
        && !*(_QWORD *)(v1 + 8) )
      {
        *(_QWORD *)(v1 + 8) = v14;
      }
    }
    v4 = (*(_QWORD *)(v1 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v1 + 8) != 0LL);
    if ( v4 )
    {
      CurrentThreadId = GetCurrentThreadId();
      v6 = CurrentThreadId % 0xA;
      for ( i = *(_QWORD *)(v4 + 8 * (CurrentThreadId % 0xA) + 8); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_DWORD *)i == (_DWORD)CurrentThreadId )
        {
          v3 = (char *)(i + 16);
          goto LABEL_12;
        }
      }
      if ( !v2 )
        goto LABEL_18;
      ProcessHeap = GetProcessHeap();
      v9 = HeapAlloc(ProcessHeap, 0, 0x38uLL);
      if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
      {
        v13 = GetProcessHeap();
        ((void (__fastcall *)(HANDLE, _QWORD *))wil::details::g_pfnRtlDisownModuleHeapAllocation)(v13, v9);
      }
      if ( v9 )
      {
        v3 = (char *)(v9 + 2);
        *(_DWORD *)v9 = CurrentThreadId;
        v9[1] = 0LL;
        *((_WORD *)v9 + 8) = 40;
        *((_DWORD *)v9 + 5) = 0;
        v9[3] = 0LL;
        *((_DWORD *)v9 + 8) = 0;
        v9[5] = 0LL;
        *((_DWORD *)v9 + 12) = 0;
        _m_prefetchw((const void *)(v4 + 8 * v6 + 8));
        do
        {
          v10 = *(_QWORD *)(v4 + 8 * v6 + 8);
          v9[1] = v10;
        }
        while ( v10 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)(v4 + 8 * v6 + 8),
                         (signed __int64)v9,
                         v10) );
      }
      else
      {
LABEL_18:
        v3 = 0LL;
      }
LABEL_12:
      if ( v3 && !*((_QWORD *)v3 + 1) )
        *((_QWORD *)v3 + 1) = v4 + 4;
    }
  }
  return (struct wil::details_abi::ThreadLocalData *)v3;
}
