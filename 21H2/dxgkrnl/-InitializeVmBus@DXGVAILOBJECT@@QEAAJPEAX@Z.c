/*
 * XREFs of ?InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x1C0351534
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C0336764 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetVmBusChannel@DXGVAILOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C005BA34 (-SetVmBusChannel@DXGVAILOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0350960 (-CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::InitializeVmBus(DXGVAILOBJECT *this, void *a2, const struct _GUID *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  bool v11; // zf
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF
  struct _GUID v14; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)&v14.Data1 = 0LL;
  v4 = CreateVmBusChannel(a2, &v14, a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGVAILOBJECT *)((char *)this + 40), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
    DXGVAILOBJECT::SetVmBusChannel(this, *(struct DXGVMBUSCHANNEL **)&v14.Data1);
    CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
    v11 = v13[8] == 0;
    *((_QWORD *)this + 13) = CurrentProcess;
    if ( !v11 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  }
  else
  {
    WdLogSingleEntry1(3LL, v4);
  }
  return v5;
}
