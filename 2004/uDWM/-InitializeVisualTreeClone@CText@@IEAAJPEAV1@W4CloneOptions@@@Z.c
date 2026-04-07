/*
 * XREFs of ?InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18003BD14
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18003BC90 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180015A6C (-InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x18003BDF4 (-SetReverseAlignment@CText@@QEAAX_N@Z.c)
 *     ?SetRTLReading@CText@@QEAAX_N@Z @ 0x18003BE14 (-SetRTLReading@CText@@QEAAX_N@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x18003BE34 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?SetColor@CText@@QEAAXK@Z @ 0x18003BE64 (-SetColor@CText@@QEAAXK@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x18003BE9C (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x18003BF7C (-SetText@CText@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CText::InitializeVisualTreeClone(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  char v6; // al
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = CRenderDataVisual::InitializeVisualTreeClone(a1, (CRenderDataVisual *)a2, a3);
  if ( v5 < 0 )
  {
    v8 = 523LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"clientcore\\windows\\dwm\\udwm\\text.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = CText::SetText((CText *)a2, *(const unsigned __int16 **)(a1 + 288));
  if ( v5 < 0 )
  {
    v8 = 524LL;
    goto LABEL_8;
  }
  CText::SetFont((CText *)a2, (const struct tagLOGFONTW *)(a1 + 296));
  CText::SetColor((CText *)a2, *(_DWORD *)(a1 + 408));
  CText::SetBackgroundColor((CText *)a2, *(_DWORD *)(a1 + 412));
  CText::SetRTLReading((CText *)a2, (*(_BYTE *)(a1 + 280) & 2) != 0);
  CText::SetReverseAlignment((CText *)a2, (*(_BYTE *)(a1 + 280) & 4) != 0);
  if ( (*(_DWORD *)(a1 + 80) & 0x9000) == 0 )
  {
    v6 = *(_BYTE *)(a2 + 280);
    *(_DWORD *)(a2 + 80) &= 0xFFFF6FFF;
    *(_BYTE *)(a2 + 280) ^= (*(_BYTE *)(a1 + 280) ^ v6) & 1;
    *(_QWORD *)(a2 + 400) = *(_QWORD *)(a1 + 400);
  }
  return 0LL;
}
