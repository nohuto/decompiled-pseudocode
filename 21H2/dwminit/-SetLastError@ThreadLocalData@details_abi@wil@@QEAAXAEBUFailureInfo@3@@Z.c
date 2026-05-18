/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180003AE4
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180003E30 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180003770 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     ??$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA?AV?$pointer_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@details@0@PEAUThreadLocalFailureInfo@details_abi@0@_K@Z @ 0x180007B7C (--$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA-AV-$pointer_range@PEAUThreadL.c)
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  char *v2; // rbx
  int v4; // esi
  HANDLE ProcessHeap; // rax
  char *v7; // rax
  int (*v8)(void *, void *); // rbp
  HANDLE v9; // rax
  _WORD *v10; // rcx
  _DWORD *v11; // rcx
  unsigned __int16 v12; // dx
  _WORD *v13; // [rsp+20h] [rbp-38h] BYREF
  _WORD *v14; // [rsp+28h] [rbp-30h]
  _DWORD *v15; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v16; // [rsp+38h] [rbp-20h]

  v2 = (char *)*((_QWORD *)this + 3);
  v4 = *((_DWORD *)this + 4);
  if ( !v2 )
  {
    if ( v4 )
    {
      ProcessHeap = GetProcessHeap();
      v7 = (char *)HeapAlloc(ProcessHeap, 8u, 0x190uLL);
      v8 = wil::details::g_pfnRtlDisownModuleHeapAllocation;
      v2 = v7;
      if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
      {
        v9 = GetProcessHeap();
        ((void (__fastcall *)(HANDLE, char *))v8)(v9, v2);
      }
      *((_QWORD *)this + 3) = v2;
      if ( !v2 )
        return;
      *((_DWORD *)this + 8) = 5;
      wil::make_range<wil::details_abi::ThreadLocalFailureInfo *>(&v13, v2, 5LL);
      v10 = v13;
      if ( v13 != v14 )
      {
        do
        {
          *v10 = 80;
          v10 += 40;
        }
        while ( v10 != v14 );
        v2 = (char *)*((_QWORD *)this + 3);
      }
    }
    if ( !v2 )
      return;
  }
  if ( !v4
    || (wil::make_range<wil::details_abi::ThreadLocalFailureInfo *>(&v15, v2, *((unsigned __int16 *)this + 16)),
        v15 == v16) )
  {
LABEL_16:
    v12 = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
    *((_WORD *)this + 17) = v12;
    wil::details_abi::ThreadLocalFailureInfo::Set(
      (wil::details_abi::ThreadLocalFailureInfo *)&v2[80 * v12],
      a2,
      _InterlockedIncrement(*((volatile signed __int32 **)this + 1)));
  }
  else
  {
    v11 = v15 + 2;
    while ( *(v11 - 1) <= *((_DWORD *)this + 4) || *v11 != *((_DWORD *)a2 + 1) )
    {
      v11 += 20;
      if ( v11 - 2 == v16 )
        goto LABEL_16;
    }
  }
}
