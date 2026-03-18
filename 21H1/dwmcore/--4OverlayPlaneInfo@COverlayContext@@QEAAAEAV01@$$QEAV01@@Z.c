/*
 * XREFs of ??4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x180170B90
 * Callers:
 *     ??$_Swap_ranges_unchecked@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@@std@@YA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@V12@0@Z @ 0x1800BE504 (--$_Swap_ranges_unchecked@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@@std.c)
 *     ??$move@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x18016E1F4 (--$move@V-$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked_array_iterator@P.c)
 *     ??$move_backward@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x18017DEC8 (--$move_backward@V-$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked_array_i.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180170B50 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall COverlayContext::OverlayPlaneInfo::operator=(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v6;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
  std::shared_ptr<CRegion>::operator=((_QWORD *)(a1 + 160), (__int64 *)(a2 + 160));
  *(_BYTE *)(a1 + 176) = *(_BYTE *)(a2 + 176);
  *(_BYTE *)(a1 + 177) = *(_BYTE *)(a2 + 177);
  *(_BYTE *)(a1 + 178) = *(_BYTE *)(a2 + 178);
  *(_BYTE *)(a1 + 179) = *(_BYTE *)(a2 + 179);
  *(_BYTE *)(a1 + 180) = *(_BYTE *)(a2 + 180);
  *(_BYTE *)(a1 + 181) = *(_BYTE *)(a2 + 181);
  *(_QWORD *)(a1 + 184) = *(_QWORD *)(a2 + 184);
  *(_DWORD *)(a1 + 192) = *(_DWORD *)(a2 + 192);
  *(_DWORD *)(a1 + 196) = *(_DWORD *)(a2 + 196);
  *(_DWORD *)(a1 + 200) = *(_DWORD *)(a2 + 200);
  *(_DWORD *)(a1 + 204) = *(_DWORD *)(a2 + 204);
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a2 + 208);
  *(_DWORD *)(a1 + 212) = *(_DWORD *)(a2 + 212);
  *(_BYTE *)(a1 + 216) = *(_BYTE *)(a2 + 216);
  *(_BYTE *)(a1 + 217) = *(_BYTE *)(a2 + 217);
  *(_BYTE *)(a1 + 218) = *(_BYTE *)(a2 + 218);
  *(_BYTE *)(a1 + 219) = *(_BYTE *)(a2 + 219);
  *(_BYTE *)(a1 + 220) = *(_BYTE *)(a2 + 220);
  *(_BYTE *)(a1 + 221) = *(_BYTE *)(a2 + 221);
  return a1;
}
