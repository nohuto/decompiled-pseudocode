/*
 * XREFs of ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0021884
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0021000 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0021140 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     HMUnlockDestroyObject @ 0x1C0021250 (HMUnlockDestroyObject.c)
 *     HMDestroyObject @ 0x1C0021390 (HMDestroyObject.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C0085208 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C008832C (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     DestroyMonitor @ 0x1C00B4360 (DestroyMonitor.c)
 *     DestroyKF @ 0x1C00BCF68 (DestroyKF.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00BFAA0 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMMarkObjectDestroyWorker(_DWORD *a1)
{
  char *v1; // r8
  char v2; // al

  v1 = (char *)qword_1C0248D48 + dword_1C0248D50 * (unsigned int)(unsigned __int16)*a1;
  v2 = v1[25] | 1;
  v1[25] = v2;
  if ( !a1[2] )
    return 1LL;
  v1[25] = v2 & 0xFD;
  return 0LL;
}
