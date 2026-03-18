/*
 * XREFs of ?SetSurfaceScale@?$CCompositionGlyphRunGeneratedT@VCCompositionGlyphRun@@VCTextObject@@@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x180172FF4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionGlyphRunGeneratedT<CCompositionGlyphRun,CTextObject>::SetSurfaceScale(
        _QWORD *a1,
        __int64 a2)
{
  void (__fastcall *v2)(_QWORD *, _QWORD, _QWORD); // rax

  v2 = *(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 72LL);
  a1[12] = a2;
  v2(a1, 0LL, 0LL);
  return 0LL;
}
