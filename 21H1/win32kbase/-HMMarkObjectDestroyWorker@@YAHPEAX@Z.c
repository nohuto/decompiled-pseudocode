/*
 * XREFs of ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C005ADEC
 * Callers:
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C000CBD8 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     DestroyKF @ 0x1C004EDC8 (DestroyKF.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0051C70 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     DestroyMonitor @ 0x1C0057330 (DestroyMonitor.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0059540 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C005A970 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     HMUnlockDestroyObject @ 0x1C005ACB0 (HMUnlockDestroyObject.c)
 *     HMDestroyObject @ 0x1C005ADB0 (HMDestroyObject.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C005AE30 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMMarkObjectDestroyWorker(_DWORD *a1)
{
  char *v1; // r8
  char v2; // al

  v1 = (char *)qword_1C0250D48 + dword_1C0250D50 * (unsigned int)(unsigned __int16)*a1;
  v2 = v1[25] | 1;
  v1[25] = v2;
  if ( !a1[2] )
    return 1LL;
  v1[25] = v2 & 0xFD;
  return 0LL;
}
