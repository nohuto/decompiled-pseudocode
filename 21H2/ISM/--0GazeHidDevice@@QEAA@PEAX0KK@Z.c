/*
 * XREFs of ??0GazeHidDevice@@QEAA@PEAX0KK@Z @ 0x18009B0C8
 * Callers:
 *     ?CreateDevice@GazeDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z @ 0x18009B240 (-CreateDevice@GazeDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ??0GazeHidParser@@QEAA@XZ @ 0x1801299BC (--0GazeHidParser@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
GazeHidDevice *__fastcall GazeHidDevice::GazeHidDevice(
        GazeHidDevice *this,
        void *a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = a3;
  *((_DWORD *)this + 6) = a4;
  *((_DWORD *)this + 10) = a5;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  memset_0((char *)this + 60, 0, 0x40uLL);
  *(_QWORD *)this = &GazeHidDevice::`vftable';
  GazeHidParser::GazeHidParser((GazeHidDevice *)((char *)this + 128));
  *((_QWORD *)this + 28) = 0LL;
  return this;
}
