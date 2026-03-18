/*
 * XREFs of ??0CMouseProcessor@@IEAA@XZ @ 0x1C0022A90
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0036760 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C00220FC (--0CSpatialProcessor@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00232D8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0MousePerfSummary@@QEAA@XZ @ 0x1C002338C (--0MousePerfSummary@@QEAA@XZ.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

CMouseProcessor *__fastcall CMouseProcessor::CMouseProcessor(CMouseProcessor *this)
{
  CMouseProcessor *result; // rax

  CSpatialProcessor::CSpatialProcessor(this);
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  *((_DWORD *)this + 14) = (unsigned int)PsGetCurrentThreadId();
  *(_OWORD *)((char *)this + 60) = 0LL;
  *((_DWORD *)this + 19) = 0;
  memset((char *)this + 80, 0, 0xA80uLL);
  `vector constructor iterator'(
    (char *)this + 80,
    0xA8uLL,
    0x10uLL,
    (void *(*)(void *))CMouseProcessor::RawMouseEvent::RawMouseEvent);
  *((_DWORD *)this + 692) = 0;
  *((_DWORD *)this + 698) = 1;
  memset((char *)this + 2800, 0, 0x2B0uLL);
  MousePerfSummary::MousePerfSummary((CMouseProcessor *)((char *)this + 2800));
  *((_OWORD *)this + 219) = 0LL;
  *((_QWORD *)this + 440) = 0LL;
  *((_WORD *)this + 1799) = 7;
  *((_QWORD *)this + 450) = 0LL;
  *((_QWORD *)this + 451) = 0LL;
  *((_QWORD *)this + 452) = 0LL;
  *((_BYTE *)this + 3624) = 0;
  *((_BYTE *)this + 3628) = 0;
  *((_QWORD *)this + 454) = 0LL;
  memset((char *)this + 3640, 0, 0x70uLL);
  *((_BYTE *)this + 3752) = 0;
  *((_DWORD *)this + 940) = 0;
  *((_BYTE *)this + 3784) = 0;
  *((_DWORD *)this + 947) = 0;
  *((_QWORD *)this + 474) = 0LL;
  *((_DWORD *)this + 950) = 0;
  *((_DWORD *)this + 951) = (unsigned int)PsGetCurrentThreadId();
  memset((char *)this + 3808, 0, 0x48uLL);
  *((_QWORD *)this + 485) = 0LL;
  *((_QWORD *)this + 471) = 0LL;
  *((_QWORD *)this + 472) = 0LL;
  *((_QWORD *)this + 486) = 0LL;
  *((_QWORD *)this + 487) = 0LL;
  *((_WORD *)this + 1952) = 0;
  *((_QWORD *)this + 491) = (char *)this + 3920;
  *((_QWORD *)this + 490) = (char *)this + 3920;
  *((_QWORD *)this + 492) = &CPushLock::`vftable';
  *((_QWORD *)this + 493) = 0LL;
  *((_QWORD *)this + 494) = 0LL;
  *((_QWORD *)this + 495) = 0LL;
  *((_BYTE *)this + 3968) = 0;
  memset((char *)this + 3976, 0, 0x400uLL);
  *((_WORD *)this + 2500) = 0;
  *((_QWORD *)this + 626) = (char *)this + 3976;
  *((_BYTE *)this + 5016) = 0;
  *((_BYTE *)this + 5028) = 0;
  result = this;
  *((_BYTE *)this + 5032) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 347) = 0LL;
  *((_QWORD *)this + 348) = 0LL;
  *((_QWORD *)this + 436) = 0LL;
  *((_QWORD *)this + 437) = 0LL;
  return result;
}
