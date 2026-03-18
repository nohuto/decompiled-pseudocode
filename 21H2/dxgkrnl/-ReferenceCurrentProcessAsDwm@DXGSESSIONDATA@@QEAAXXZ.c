/*
 * XREFs of ?ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0014670
 * Callers:
 *     DxgkRegisterDwmProcess @ 0x1C01C8180 (DxgkRegisterDwmProcess.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONDATA::ReferenceCurrentProcessAsDwm(DXGSESSIONDATA *this)
{
  void *v2; // rcx
  void *CurrentProcess; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGSESSIONDATA *)((char *)this + 18664), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  v2 = (void *)*((_QWORD *)this + 2339);
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *((_QWORD *)this + 2339) = 0LL;
  }
  CurrentProcess = (void *)PsGetCurrentProcess();
  *((_QWORD *)this + 2339) = CurrentProcess;
  ObfReferenceObject(CurrentProcess);
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
