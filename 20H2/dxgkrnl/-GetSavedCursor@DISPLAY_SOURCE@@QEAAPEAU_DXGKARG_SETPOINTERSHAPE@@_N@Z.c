/*
 * XREFs of ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C01666BC
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C012BEB4 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetSavedCursor(DISPLAY_SOURCE *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // rax
  SIZE_T v9; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v8 + 24) = 5136LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( !*((_QWORD *)this + 101) && a2 )
  {
    v9 = 4LL * (unsigned int)(*(_DWORD *)(v6 + 2016) * *(_DWORD *)(v6 + 2020));
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v6 + 2016) * *(_DWORD *)(v6 + 2020)), 4uLL) )
      v9 = -1LL;
    *((_QWORD *)this + 101) = operator new[](v9, 0x4B677844u, PagedPool);
  }
  return (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 784);
}
