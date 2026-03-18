/*
 * XREFs of ?SetBaselineOrigin@?$CTextObjectGeneratedT@VCTextObject@@VCContent@@@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x1801700EC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTextObjectGeneratedT<CTextObject,CContent>::SetBaselineOrigin(_QWORD *a1, __int64 a2)
{
  void (__fastcall *v2)(_QWORD *, _QWORD, _QWORD); // rax

  v2 = *(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 72LL);
  a1[8] = a2;
  v2(a1, 0LL, 0LL);
  return 0LL;
}
