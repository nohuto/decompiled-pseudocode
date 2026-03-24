/*
 * XREFs of ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C0212C44
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C01228E0 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C0130704 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0028F00 (memset.c)
 */

struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetClippedCursor(DISPLAY_SOURCE *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  void *v7; // rcx
  __int64 v8; // rdi
  SIZE_T v9; // rax
  PVOID v10; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 5161LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (void *)*((_QWORD *)this + 106);
  v8 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( v7 )
    goto LABEL_8;
  if ( a2 )
  {
    v9 = 4LL * (unsigned int)(*(_DWORD *)(v8 + 2016) * *(_DWORD *)(v8 + 2020));
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v8 + 2016) * *(_DWORD *)(v8 + 2020)), 4uLL) )
      v9 = -1LL;
    v10 = operator new[](v9, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 106) = v10;
    v7 = v10;
    if ( v10 )
LABEL_8:
      memset(v7, 0, 4 * *(unsigned int *)(v8 + 2016) * (unsigned __int64)*(unsigned int *)(v8 + 2020));
  }
  return (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824);
}
