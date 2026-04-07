/*
 * XREFs of ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180044420
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180043CD8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x1800299A8 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18003B3C0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnWindowSizeUpdated(CTopLevelWindow *this)
{
  _DWORD *v1; // rdx
  LONG v3; // eax
  LONG v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  struct tagSIZE v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 91);
  v3 = v1[14] - v1[12];
  if ( v3 < 0 )
    v3 = 0;
  v8.cx = v3;
  v4 = v1[15] - v1[13];
  if ( v4 < 0 )
    v4 = 0;
  v8.cy = v4;
  v5 = CVisual::SetSize(this, &v8);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x582u);
  else
    CTopLevelWindow::NotifyMouseLeave(this);
  return v6;
}
