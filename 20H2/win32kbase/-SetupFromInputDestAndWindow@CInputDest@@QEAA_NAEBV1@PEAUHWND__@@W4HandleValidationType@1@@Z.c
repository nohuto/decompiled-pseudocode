/*
 * XREFs of ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0181058
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018C964 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0199538 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0032DF0 (HMValidateHandleNoSecure.c)
 *     ValidateHwndEx @ 0x1C004C330 (ValidateHwndEx.c)
 *     HMAssignmentLock @ 0x1C00555C0 (HMAssignmentLock.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ValidateHbwnd @ 0x1C0119F80 (ValidateHbwnd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputDest::SetupFromInputDestAndWindow(_QWORD *a1, __int64 a2, HWND a3, __int64 a4)
{
  int v4; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  char v15; // dl
  _QWORD v17[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a4;
  if ( *(_DWORD *)a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( !*(_DWORD *)(a2 + 92) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( CInputDest::GetWindowHandle((CInputDest *)a2) == a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(a2 + 16);
  *((_OWORD *)a1 + 2) = *(_OWORD *)(a2 + 32);
  *((_OWORD *)a1 + 3) = *(_OWORD *)(a2 + 48);
  *((_OWORD *)a1 + 4) = *(_OWORD *)(a2 + 64);
  *((_OWORD *)a1 + 5) = *(_OWORD *)(a2 + 80);
  *((_OWORD *)a1 + 6) = *(_OWORD *)(a2 + 96);
  a1[10] = 0LL;
  v12 = *((_DWORD *)a1 + 23);
  if ( v12 == 2 )
  {
    if ( v4 == 2 )
    {
      v13 = ValidateHwndEx((__int64)a3, 1, 0);
      goto LABEL_20;
    }
    if ( v4 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
    v15 = 1;
  }
  else
  {
    if ( v12 != 1 )
    {
LABEL_22:
      memset(a1, 0, 0x78uLL);
      return a1[10] != 0LL;
    }
    if ( v4 == 2 )
    {
      v13 = ValidateHbwnd((unsigned __int64)a3, v8, v10, v11);
      goto LABEL_20;
    }
    if ( v4 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
    v15 = 23;
  }
  v13 = HMValidateHandleNoSecure((unsigned __int64)a3, v15);
LABEL_20:
  if ( !v13 )
    goto LABEL_22;
  v17[0] = a1 + 10;
  v17[1] = v13;
  HMAssignmentLock((__int64)v17, v14);
  return a1[10] != 0LL;
}
