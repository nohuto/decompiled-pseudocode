/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180004A14
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180004D40 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180004708 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  _WORD *v2; // rbx
  int v3; // ebp
  HANDLE ProcessHeap; // rax
  _WORD *v7; // rdi
  HANDLE v8; // rax
  _WORD *v9; // rax
  _DWORD *v10; // rcx
  _DWORD *v11; // rbx
  volatile signed __int32 *v12; // rax

  v2 = (_WORD *)*((_QWORD *)this + 3);
  v3 = *((_DWORD *)this + 4);
  if ( v2 )
    goto LABEL_19;
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 8u, 0x190uLL);
    v2 = v7;
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v8 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, _WORD *))wil::details::g_pfnRtlDisownModuleHeapAllocation)(v8, v7);
    }
    *((_QWORD *)this + 3) = v7;
    if ( v7 )
    {
      v9 = v7 + 200;
      *((_DWORD *)this + 8) = 5;
      do
      {
        *v7 = 80;
        v7 += 40;
      }
      while ( v7 != v9 );
      v2 = (_WORD *)*((_QWORD *)this + 3);
    }
  }
  if ( v2 )
  {
LABEL_19:
    if ( !v3 || (v10 = &v2[40 * *((unsigned __int16 *)this + 16)], v2 == (_WORD *)v10) )
    {
LABEL_16:
      v12 = (volatile signed __int32 *)*((_QWORD *)this + 1);
      *((_WORD *)this + 17) = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
      wil::details_abi::ThreadLocalFailureInfo::Set(
        (wil::details_abi::ThreadLocalFailureInfo *)(*((_QWORD *)this + 3) + 80LL * *((unsigned __int16 *)this + 17)),
        a2,
        _InterlockedIncrement(v12));
    }
    else
    {
      v11 = v2 + 4;
      while ( *(v11 - 1) <= *((_DWORD *)this + 4) || *v11 != *((_DWORD *)a2 + 1) )
      {
        v11 += 20;
        if ( v11 - 2 == v10 )
          goto LABEL_16;
      }
    }
  }
}
