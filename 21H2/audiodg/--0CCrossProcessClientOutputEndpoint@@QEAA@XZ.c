/*
 * XREFs of ??0CCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x14005B558
 * Callers:
 *     ??0?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14005AF94 (--0-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14005B2B0 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x14005B3D4 (--0CCrossProcessBaseClientEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessClientOutputEndpoint *__fastcall CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint(
        CCrossProcessClientOutputEndpoint *this)
{
  *((_DWORD *)this + 122) = 0;
  *((_OWORD *)this + 31) = 0LL;
  *((_OWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_BYTE *)this + 536) = 0;
  CCrossProcessBaseClientEndpoint::CCrossProcessBaseClientEndpoint(this);
  *((_QWORD *)this + 56) = &CCrossProcessInputEndpoint::`vftable';
  *((_QWORD *)this + 57) = this;
  *((_DWORD *)this + 116) = 3;
  *((_DWORD *)this + 117) = 0;
  *((_QWORD *)this + 59) = &CCrossProcessControl::`vftable';
  *((_QWORD *)this + 60) = this;
  *((_QWORD *)this + 68) = 0LL;
  return this;
}
