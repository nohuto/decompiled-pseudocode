/*
 * XREFs of ??$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@$$QEAM@Z @ 0x18007D32C
 * Callers:
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x18007E0E0 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x18018D110 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180190B78 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801927E0 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003CA18 (--2@YAPEAX_K@Z.c)
 *     ??0MPCButtonHoldHelper@@QEAA@M@Z @ 0x1800853AC (--0MPCButtonHoldHelper@@QEAA@M@Z.c)
 */

_QWORD *__fastcall std::make_unique<MPCButtonHoldHelper,float,0>(_QWORD *a1, float *a2)
{
  MPCButtonHoldHelper *v5; // [rsp+30h] [rbp+8h]

  v5 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  *a1 = MPCButtonHoldHelper::MPCButtonHoldHelper(v5, *a2);
  return a1;
}
