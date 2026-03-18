/*
 * XREFs of ??$AcquireDdiEnumeratorCachedSourceInfo@V?$mem_fun_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@@KM_STL@@@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C02E9D08
 * Callers:
 *     ?AcquireFirstSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C02E1500 (-AcquireFirstSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRE.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C000A2AC (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_SOURCE@@@?$Set@VDMMVIDEOPRESENTSOURCE@@@@SAPEAV12@QEBVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C002327C (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_SOURCE@@@-$Set@VDMMVIDEOPRESENTSOURCE@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDEOPRESENTSOURCESET::AcquireDdiEnumeratorCachedSourceInfo<KM_STL::mem_fun_t<DMMVIDEOPRESENTSOURCE *,DMMVIDEOPRESENTSOURCESET>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  _QWORD *Instance; // rax
  unsigned int v14; // ecx
  _QWORD *v15; // rax
  char *v16; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *(__int64 (__fastcall **)(__int64))a2;
  v9 = a1 + *(int *)(a2 + 8);
  *a3 = 0LL;
  v10 = v8(v9);
  v11 = v10;
  if ( !v10 )
    return 3223192324LL;
  v16 = 0LL;
  Instance = Set<DMMVIDEOPRESENTSOURCE>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_SOURCE>::CreateInstance(v10);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset((void **)&v16, Instance);
  if ( v16 )
  {
    v14 = *(_DWORD *)(v11 + 24);
    v15 = v16 + 16;
    *a3 = v16 + 16;
    *v15 = v14;
  }
  else
  {
    v3 = -1073741801;
  }
  operator delete(0LL);
  return v3;
}
