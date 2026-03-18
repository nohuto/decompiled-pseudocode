/*
 * XREFs of ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0204EB4
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0201EB4 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 */

ADAPTER_RENDER *__fastcall ADAPTER_RENDER::ADAPTER_RENDER(ADAPTER_RENDER *this, struct DXGADAPTER *a2)
{
  ADAPTER_RENDER *result; // rax

  *((_QWORD *)this + 2) = a2;
  *(_OWORD *)this = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 52;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 17) = 64;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 34;
  *((_QWORD *)this + 19) = (char *)this + 144;
  *((_QWORD *)this + 18) = (char *)this + 144;
  *((_QWORD *)this + 21) = (char *)this + 160;
  *((_QWORD *)this + 20) = (char *)this + 160;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 57) = 32;
  *((_DWORD *)this + 58) = 1;
  *((_QWORD *)this + 31) = (char *)this + 240;
  *((_QWORD *)this + 30) = (char *)this + 240;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 64;
  memset((char *)this + 320, 0, 0x100uLL);
  *((_QWORD *)this + 72) = 0LL;
  *(_OWORD *)((char *)this + 584) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_BYTE *)this + 640) = 0;
  *((_DWORD *)this + 161) = 0;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_DWORD *)this + 174) = 0;
  *((_DWORD *)this + 175) = 3;
  *((_DWORD *)this + 176) = 42;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_DWORD *)this + 194) = 0;
  *((_DWORD *)this + 195) = 8;
  *((_DWORD *)this + 196) = 27;
  *((_QWORD *)this + 104) = 0LL;
  *((_QWORD *)this + 105) = 0LL;
  *((_DWORD *)this + 212) = 0;
  *((_DWORD *)this + 213) = 32;
  *((_BYTE *)this + 856) = 0;
  *((_DWORD *)this + 222) = -1;
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 109) = 0LL;
  *((_DWORD *)this + 220) = 0;
  *((_DWORD *)this + 221) = 64;
  *((_DWORD *)this + 224) = 0;
  *((_QWORD *)this + 113) = 0LL;
  *((_BYTE *)this + 912) = 1;
  *((_BYTE *)this + 914) = 0;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  *((_DWORD *)this + 268) = 0;
  *(_QWORD *)((char *)this + 1076) = 64LL;
  *((_DWORD *)this + 271) = 0;
  *((_QWORD *)this + 136) = 0LL;
  *((_DWORD *)this + 274) = 0;
  *((_QWORD *)this + 138) = 0LL;
  *((_QWORD *)this + 142) = 0LL;
  *((_QWORD *)this + 144) = 0LL;
  *((_QWORD *)this + 146) = 0LL;
  *((_QWORD *)this + 147) = 0LL;
  *((_DWORD *)this + 296) = 0;
  *((_DWORD *)this + 297) = 1;
  *((_WORD *)this + 612) = 0;
  *((_QWORD *)this + 154) = 0LL;
  *((_QWORD *)this + 156) = 0LL;
  *((_QWORD *)this + 157) = 0LL;
  *((_DWORD *)this + 316) = 0;
  *((_DWORD *)this + 317) = 64;
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)this + 11, 0LL, 0LL, 0x200u, 0x40uLL, 0x4B677844u, 0);
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)this + 12, 0LL, 0LL, 0x200u, 0x488uLL, 0x4B677844u, 0);
  *((_DWORD *)this + 416) = 0;
  *((_QWORD *)this + 209) = 0LL;
  *((_QWORD *)this + 210) = 0LL;
  *((_DWORD *)this + 422) = 0;
  *((_DWORD *)this + 423) = 64;
  *((_WORD *)this + 848) = 0;
  *((_QWORD *)this + 213) = 0LL;
  *((_QWORD *)this + 214) = 0LL;
  *((_DWORD *)this + 430) = 0;
  *((_DWORD *)this + 431) = 38;
  *((_BYTE *)this + 1744) = 0;
  KeInitializeEvent((PRKEVENT)this + 4, NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)this + 5, NotificationEvent, 1u);
  *((_QWORD *)this + 76) = -1LL;
  *((_QWORD *)this + 77) = -1LL;
  *(_OWORD *)((char *)this + 712) = 0LL;
  *(_OWORD *)((char *)this + 728) = 0LL;
  *(_OWORD *)((char *)this + 1112) = 0LL;
  *((_QWORD *)this + 102) = (char *)this + 808;
  *((_QWORD *)this + 101) = (char *)this + 808;
  *((_QWORD *)this + 36) = (char *)this + 280;
  *((_QWORD *)this + 35) = (char *)this + 280;
  *((_QWORD *)this + 38) = (char *)this + 296;
  *((_QWORD *)this + 37) = (char *)this + 296;
  *((_QWORD *)this + 151) = DxgkpDeferredDestructionWork;
  result = this;
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 145) = 0LL;
  *((_QWORD *)this + 149) = 0LL;
  *((_QWORD *)this + 152) = this;
  return result;
}
