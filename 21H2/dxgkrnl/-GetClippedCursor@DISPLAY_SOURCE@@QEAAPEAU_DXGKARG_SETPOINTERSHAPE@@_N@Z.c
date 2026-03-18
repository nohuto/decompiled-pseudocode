/*
 * XREFs of ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C01A59E0
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01A4940 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C01B633C (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetClippedCursor(DISPLAY_SOURCE *this, char a2)
{
  __int64 v4; // r9
  void *v5; // rcx
  __int64 v6; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 5392LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsCoreResourceSharedOwner()",
      5392LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = (void *)*((_QWORD *)this + 111);
  v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( v5 )
    goto LABEL_4;
  if ( a2 )
  {
    v8 = 4LL * (unsigned int)(*(_DWORD *)(v6 + 2112) * *(_DWORD *)(v6 + 2116));
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v6 + 2112) * *(_DWORD *)(v6 + 2116)), 4uLL) )
      v8 = -1LL;
    v9 = operator new[](v8, 0x4B677844u, 256LL, v4);
    *((_QWORD *)this + 111) = v9;
    v5 = (void *)v9;
    if ( v9 )
LABEL_4:
      memset(v5, 0, 4 * *(unsigned int *)(v6 + 2116) * (unsigned __int64)*(unsigned int *)(v6 + 2112));
  }
  return (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 864);
}
