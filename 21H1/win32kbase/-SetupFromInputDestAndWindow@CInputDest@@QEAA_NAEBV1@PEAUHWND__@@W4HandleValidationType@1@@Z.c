/*
 * XREFs of ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0189298
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0194B84 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01A1798 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069AA8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     HMAssignmentLock @ 0x1C0071980 (HMAssignmentLock.c)
 *     ValidateHwndEx @ 0x1C008BD80 (ValidateHwndEx.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ValidateHbwnd @ 0x1C0122780 (ValidateHbwnd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputDest::SetupFromInputDestAndWindow(__int64 *a1, __int64 a2, HWND a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 *v11; // rax
  char v12; // dl
  __int64 *v14[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_DWORD *)a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( !*(_DWORD *)(a2 + 92) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( CInputDest::GetWindowHandle((CInputDest *)a2) == a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(a2 + 16);
  *((_OWORD *)a1 + 2) = *(_OWORD *)(a2 + 32);
  *((_OWORD *)a1 + 3) = *(_OWORD *)(a2 + 48);
  *((_OWORD *)a1 + 4) = *(_OWORD *)(a2 + 64);
  *((_OWORD *)a1 + 5) = *(_OWORD *)(a2 + 80);
  *((_OWORD *)a1 + 6) = *(_OWORD *)(a2 + 96);
  a1[10] = 0LL;
  v10 = *((_DWORD *)a1 + 23);
  if ( v10 == 2 )
  {
    if ( a4 == 2 )
    {
      v11 = (__int64 *)ValidateHwndEx((__int64)a3, 1, 0);
      goto LABEL_20;
    }
    if ( a4 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
    v12 = 1;
  }
  else
  {
    if ( v10 != 1 )
    {
LABEL_22:
      memset(a1, 0, 0x78uLL);
      return a1[10] != 0;
    }
    if ( a4 == 2 )
    {
      v11 = (__int64 *)ValidateHbwnd((unsigned __int64)a3, v8);
      goto LABEL_20;
    }
    if ( a4 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
    v12 = 23;
  }
  v11 = (__int64 *)HMValidateHandleNoSecure((unsigned __int64)a3, v12);
LABEL_20:
  if ( !v11 )
    goto LABEL_22;
  v14[0] = a1 + 10;
  v14[1] = v11;
  HMAssignmentLock(v14);
  return a1[10] != 0;
}
