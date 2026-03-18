/*
 * XREFs of ?ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ @ 0x1C001A384
 * Callers:
 *     DxgkRegisterDwmProcess @ 0x1C01582F0 (DxgkRegisterDwmProcess.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall DXGSESSIONDATA::ReferenceCurrentProcessAsDwm(DXGSESSIONDATA *this)
{
  void *v2; // rcx
  void *CurrentProcess; // rax
  __int64 v4; // rdx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (DXGSESSIONDATA *)((char *)this + 18648), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  v2 = (void *)*((_QWORD *)this + 2336);
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *((_QWORD *)this + 2336) = 0LL;
  }
  CurrentProcess = (void *)PsGetCurrentProcess();
  *((_QWORD *)this + 2336) = CurrentProcess;
  ObfReferenceObject(CurrentProcess);
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5, v4);
}
