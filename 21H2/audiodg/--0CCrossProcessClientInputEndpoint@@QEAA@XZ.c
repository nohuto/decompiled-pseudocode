/*
 * XREFs of ??0CCrossProcessClientInputEndpoint@@QEAA@XZ @ 0x14005B4C0
 * Callers:
 *     ??0?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14005AEA8 (--0-$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14005B210 (--0-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x14005B3D4 (--0CCrossProcessBaseClientEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessClientInputEndpoint *__fastcall CCrossProcessClientInputEndpoint::CCrossProcessClientInputEndpoint(
        CCrossProcessClientInputEndpoint *this)
{
  *((_DWORD *)this + 122) = 0;
  *((_OWORD *)this + 31) = 0LL;
  *((_OWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_BYTE *)this + 536) = 0;
  CCrossProcessBaseClientEndpoint::CCrossProcessBaseClientEndpoint(this);
  *((_QWORD *)this + 56) = &CCrossProcessInputEndpoint::`vftable';
  *((_DWORD *)this + 116) = 3;
  *((_DWORD *)this + 117) = 0;
  *((_QWORD *)this + 57) = this;
  *((_QWORD *)this + 59) = &CCrossProcessControl::`vftable';
  *((_QWORD *)this + 60) = this;
  return this;
}
