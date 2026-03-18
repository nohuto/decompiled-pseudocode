/*
 * XREFs of ??0CPTPProcessor@@AEAA@XZ @ 0x1C01A802C
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A8130 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C00212A8 (--0CTouchProcessor@@QEAA@XZ.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

CPTPProcessor *__fastcall CPTPProcessor::CPTPProcessor(CPTPProcessor *this)
{
  CTouchProcessor::CTouchProcessor(this);
  *(_QWORD *)this = &CPTPProcessor::`vftable'{for `CTouchProcessor'};
  *((_QWORD *)this + 29) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  memset((char *)this + 520, 0, 0x6ECuLL);
  *((_DWORD *)this + 113) &= ~2u;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_DWORD *)this + 112) = 0;
  *((_BYTE *)this + 2292) = 0;
  *((_QWORD *)this + 287) = 0LL;
  *((_QWORD *)this + 288) = 0LL;
  *((_QWORD *)this + 289) = 0LL;
  *((_QWORD *)this + 290) = 0LL;
  return this;
}
