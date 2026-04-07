/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180028118
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001996C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x1800280C8 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004457C (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180028184 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::OnWindowStyleUpdated(CTopLevelWindow *this)
{
  int v1; // eax
  __int64 v3; // rbx
  int updated; // eax
  unsigned int v5; // ebx

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0x8000) == 0 )
  {
    v3 = *((_QWORD *)this + 3);
    *((_DWORD *)this + 20) = v1 | 0x8000;
    while ( v3 && (*(_BYTE *)(v3 + 80) & 1) == 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
      v3 = *(_QWORD *)(v3 + 24);
    }
  }
  updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(this);
  v5 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x5CEu);
  return v5;
}
