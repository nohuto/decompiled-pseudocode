/*
 * XREFs of ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0017334
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0016CB0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0016DF0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     HMUnlockDestroyObject @ 0x1C0016F00 (HMUnlockDestroyObject.c)
 *     HMDestroyObject @ 0x1C0017040 (HMDestroyObject.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0017B30 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     DestroyMonitor @ 0x1C0019D20 (DestroyMonitor.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C0021B18 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     DestroyKF @ 0x1C005C9D8 (DestroyKF.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C005F780 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMMarkObjectDestroyWorker(_DWORD *a1)
{
  char *v1; // r8
  char v2; // al

  v1 = (char *)qword_1C024AD48 + dword_1C024AD50 * (unsigned int)(unsigned __int16)*a1;
  v2 = v1[25] | 1;
  v1[25] = v2;
  if ( !a1[2] )
    return 1LL;
  v1[25] = v2 & 0xFD;
  return 0LL;
}
