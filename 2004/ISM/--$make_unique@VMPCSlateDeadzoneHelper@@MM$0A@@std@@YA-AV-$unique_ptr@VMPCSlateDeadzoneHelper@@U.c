/*
 * XREFs of ??$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA?AV?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@0@$$QEAM0@Z @ 0x18007CEC0
 * Callers:
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x18007DC30 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x18018CC50 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x180192330 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 *     ??0MPCSlateDeadzoneHelper@@QEAA@MM@Z @ 0x180084D08 (--0MPCSlateDeadzoneHelper@@QEAA@MM@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(_QWORD *a1, float *a2, float *a3)
{
  MPCSlateDeadzoneHelper *v7; // [rsp+30h] [rbp+8h]

  v7 = (MPCSlateDeadzoneHelper *)operator new(0x20uLL);
  *a1 = MPCSlateDeadzoneHelper::MPCSlateDeadzoneHelper(v7, *a2, *a3);
  return a1;
}
