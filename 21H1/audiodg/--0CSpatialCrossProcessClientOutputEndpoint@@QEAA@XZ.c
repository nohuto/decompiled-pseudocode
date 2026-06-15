/*
 * XREFs of ??0CSpatialCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x14005C968
 * Callers:
 *     ??0?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14005C390 (--0-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14005C568 (--0-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSpatialCrossProcessClientEndpoint@@QEAA@XZ @ 0x14005C8D0 (--0CSpatialCrossProcessClientEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CSpatialCrossProcessClientOutputEndpoint *__fastcall CSpatialCrossProcessClientOutputEndpoint::CSpatialCrossProcessClientOutputEndpoint(
        CSpatialCrossProcessClientOutputEndpoint *this)
{
  *((_DWORD *)this + 348) = 0;
  *(_OWORD *)((char *)this + 1400) = 0LL;
  *(_OWORD *)((char *)this + 1416) = 0LL;
  *((_QWORD *)this + 179) = 0LL;
  *((_BYTE *)this + 1440) = 0;
  CSpatialCrossProcessClientEndpoint::CSpatialCrossProcessClientEndpoint(this);
  *((_QWORD *)this + 172) = &CSpatialCrossProcessControl::`vftable';
  *((_QWORD *)this + 173) = this;
  *((_QWORD *)this + 181) = 0LL;
  *((_DWORD *)this + 364) = 0;
  *((_DWORD *)this + 365) = 0;
  *((_DWORD *)this + 366) = 0;
  *((_DWORD *)this + 367) = 0;
  *((_BYTE *)this + 1472) = 0;
  return this;
}
