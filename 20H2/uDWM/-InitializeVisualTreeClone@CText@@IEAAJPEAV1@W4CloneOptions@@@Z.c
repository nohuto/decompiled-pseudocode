/*
 * XREFs of ?InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18002BAC4
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18002BA40 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800136DC (-InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x18002BBA4 (-SetReverseAlignment@CText@@QEAAX_N@Z.c)
 *     ?SetRTLReading@CText@@QEAAX_N@Z @ 0x18002BBC4 (-SetRTLReading@CText@@QEAAX_N@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x18002BBE4 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?SetColor@CText@@QEAAXK@Z @ 0x18002BC14 (-SetColor@CText@@QEAAXK@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x18002BC4C (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x18002BD2C (-SetText@CText@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CText::InitializeVisualTreeClone(__int64 a1, __int64 a2)
{
  int v4; // esi
  char v5; // al
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CRenderDataVisual::InitializeVisualTreeClone(a1, (CRenderDataVisual *)a2);
  if ( v4 < 0 )
  {
    v7 = 523LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"clientcore\\windows\\dwm\\udwm\\text.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = CText::SetText((CText *)a2, *(const unsigned __int16 **)(a1 + 288));
  if ( v4 < 0 )
  {
    v7 = 524LL;
    goto LABEL_8;
  }
  CText::SetFont((CText *)a2, (const struct tagLOGFONTW *)(a1 + 296));
  CText::SetColor((CText *)a2, *(_DWORD *)(a1 + 408));
  CText::SetBackgroundColor((CText *)a2, *(_DWORD *)(a1 + 412));
  CText::SetRTLReading((CText *)a2, (*(_BYTE *)(a1 + 280) & 2) != 0);
  CText::SetReverseAlignment((CText *)a2, (*(_BYTE *)(a1 + 280) & 4) != 0);
  if ( (*(_DWORD *)(a1 + 80) & 0x9000) == 0 )
  {
    v5 = *(_BYTE *)(a2 + 280);
    *(_DWORD *)(a2 + 80) &= 0xFFFF6FFF;
    *(_BYTE *)(a2 + 280) ^= (*(_BYTE *)(a1 + 280) ^ v5) & 1;
    *(_QWORD *)(a2 + 400) = *(_QWORD *)(a1 + 400);
  }
  return 0LL;
}
