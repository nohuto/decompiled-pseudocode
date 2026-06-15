/*
 * XREFs of ??0CCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140016C0C
 * Callers:
 *     ??0?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140016BA0 (--0-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14005B080 (--0-$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ?Initialize@CFadeWindowLUT@@AEAAXXZ @ 0x140009690 (-Initialize@CFadeWindowLUT@@AEAAXXZ.c)
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140016CFC (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessServerInputEndpoint *__fastcall CCrossProcessServerInputEndpoint::CCrossProcessServerInputEndpoint(
        CCrossProcessServerInputEndpoint *this)
{
  *((_DWORD *)this + 120) = 0;
  *(_OWORD *)((char *)this + 488) = 0LL;
  *(_OWORD *)((char *)this + 504) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_BYTE *)this + 528) = 0;
  CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint(this);
  *(_QWORD *)this = &CCrossProcessBaseServerEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseServerEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 50) = &CCrossProcessBaseServerEndpoint::`vftable';
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 112) = 0;
  *((_QWORD *)this + 57) = &CCrossProcessInputEndpoint::`vftable';
  *((_QWORD *)this + 59) = 3LL;
  *((_QWORD *)this + 58) = this;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 16LL;
  *((_DWORD *)this + 174) = 1065353216;
  CFadeWindowLUT::Initialize((CCrossProcessServerInputEndpoint *)((char *)this + 544));
  *((_QWORD *)this + 67) = 0LL;
  return this;
}
