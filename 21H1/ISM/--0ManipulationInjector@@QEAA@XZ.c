/*
 * XREFs of ??0ManipulationInjector@@QEAA@XZ @ 0x1800C1EF4
 * Callers:
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x18007A838 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18011F734 (--0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18003C460 (memset_0.c)
 */

ManipulationInjector *__fastcall ManipulationInjector::ManipulationInjector(ManipulationInjector *this)
{
  *(_DWORD *)this = 1;
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 1;
  *(_WORD *)((char *)this + 13) = 256;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_BYTE *)this + 740) = 0;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_DWORD *)this + 193) = 96;
  *((_DWORD *)this + 194) = 96;
  *((_DWORD *)this + 4) = 40;
  *((_DWORD *)this + 5) = 20;
  *((_DWORD *)this + 6) = 80;
  *((_DWORD *)this + 7) = 600;
  *((_DWORD *)this + 8) = 150;
  *(_QWORD *)((char *)this + 36) = 100LL;
  *((_OWORD *)this + 4) = 0LL;
  memset_0((char *)this + 104, 0, 0x270uLL);
  return this;
}
