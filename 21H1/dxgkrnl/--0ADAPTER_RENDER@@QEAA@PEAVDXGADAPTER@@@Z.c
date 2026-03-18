/*
 * XREFs of ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C017B77C
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0178090 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     memset @ 0x1C0026840 (memset.c)
 */

ADAPTER_RENDER *__fastcall ADAPTER_RENDER::ADAPTER_RENDER(ADAPTER_RENDER *this, struct DXGADAPTER *a2)
{
  ADAPTER_RENDER *result; // rax

  *((_QWORD *)this + 2) = a2;
  *(_OWORD *)this = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 42;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 17) = 53;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 27;
  *((_QWORD *)this + 19) = (char *)this + 144;
  *((_QWORD *)this + 18) = (char *)this + 144;
  *((_QWORD *)this + 21) = (char *)this + 160;
  *((_QWORD *)this + 20) = (char *)this + 160;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 32;
  *((_DWORD *)this + 56) = 1;
  *((_QWORD *)this + 30) = (char *)this + 232;
  *((_QWORD *)this + 29) = (char *)this + 232;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 53;
  memset((char *)this + 312, 0, 0x100uLL);
  *((_QWORD *)this + 71) = 0LL;
  *((_OWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_BYTE *)this + 632) = 0;
  *((_DWORD *)this + 159) = 0;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_DWORD *)this + 170) = 0;
  *((_DWORD *)this + 171) = 3;
  *((_DWORD *)this + 172) = 33;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *((_DWORD *)this + 188) = 0;
  *((_DWORD *)this + 189) = 8;
  *((_DWORD *)this + 190) = 20;
  *((_QWORD *)this + 101) = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  *((_DWORD *)this + 206) = 0;
  *((_DWORD *)this + 207) = 25;
  *((_BYTE *)this + 832) = 0;
  *((_DWORD *)this + 216) = -1;
  *((_QWORD *)this + 105) = 0LL;
  *((_QWORD *)this + 106) = 0LL;
  *((_DWORD *)this + 214) = 0;
  *((_DWORD *)this + 215) = 53;
  *((_DWORD *)this + 218) = 0;
  *((_QWORD *)this + 110) = 0LL;
  *((_BYTE *)this + 888) = 1;
  *((_BYTE *)this + 890) = 0;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 130) = 0LL;
  *((_DWORD *)this + 262) = 0;
  *(_QWORD *)((char *)this + 1052) = 53LL;
  *((_DWORD *)this + 265) = 0;
  *((_QWORD *)this + 133) = 0LL;
  *((_DWORD *)this + 268) = 0;
  *((_QWORD *)this + 135) = 0LL;
  *((_QWORD *)this + 139) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  *((_QWORD *)this + 143) = 0LL;
  *((_QWORD *)this + 144) = 0LL;
  *((_DWORD *)this + 290) = 0;
  *((_DWORD *)this + 291) = 1;
  *((_WORD *)this + 600) = 0;
  *((_QWORD *)this + 151) = 0LL;
  *((_QWORD *)this + 153) = 0LL;
  *((_QWORD *)this + 154) = 0LL;
  *((_DWORD *)this + 310) = 0;
  *((_DWORD *)this + 311) = 53;
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)((char *)this + 1344),
    0LL,
    0LL,
    0x200u,
    0x40uLL,
    0x4B677844u,
    0);
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)((char *)this + 1472),
    0LL,
    0LL,
    0x200u,
    0x488uLL,
    0x4B677844u,
    0);
  *((_DWORD *)this + 400) = 0;
  *((_QWORD *)this + 201) = 0LL;
  *((_QWORD *)this + 202) = 0LL;
  *((_DWORD *)this + 406) = 0;
  *((_DWORD *)this + 407) = 53;
  *((_WORD *)this + 824) = 0;
  KeInitializeEvent((PRKEVENT)this + 4, NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)this + 5, NotificationEvent, 1u);
  *((_QWORD *)this + 75) = -1LL;
  *((_QWORD *)this + 76) = -1LL;
  *(_OWORD *)((char *)this + 696) = 0LL;
  *(_OWORD *)((char *)this + 712) = 0LL;
  *((_OWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 99) = (char *)this + 784;
  *((_QWORD *)this + 98) = (char *)this + 784;
  *((_QWORD *)this + 35) = (char *)this + 272;
  *((_QWORD *)this + 34) = (char *)this + 272;
  *((_QWORD *)this + 37) = (char *)this + 288;
  *((_QWORD *)this + 36) = (char *)this + 288;
  *((_QWORD *)this + 148) = DxgkpDeferredDestructionWork;
  result = this;
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 142) = 0LL;
  *((_QWORD *)this + 146) = 0LL;
  *((_QWORD *)this + 149) = this;
  return result;
}
