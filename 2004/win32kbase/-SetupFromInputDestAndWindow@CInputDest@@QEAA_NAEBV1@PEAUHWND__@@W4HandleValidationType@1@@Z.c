/*
 * XREFs of ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0183598
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018EE84 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C019BA38 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069090 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C006DF18 (HMValidateHandleNoSecure.c)
 *     HMAssignmentLock @ 0x1C00748C0 (HMAssignmentLock.c)
 *     ValidateHwndEx @ 0x1C0091FF0 (ValidateHwndEx.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ValidateHbwnd @ 0x1C011C2C0 (ValidateHbwnd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputDest::SetupFromInputDestAndWindow(__int64 *a1, __int64 a2, HWND a3, __int64 a4)
{
  int v4; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 *v13; // rax
  char v14; // dl
  __int64 *v16[3]; // [rsp+20h] [rbp-18h] BYREF

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
      v13 = (__int64 *)ValidateHwndEx((__int64)a3, 1, 0);
      goto LABEL_20;
    }
    if ( v4 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
    v14 = 1;
  }
  else
  {
    if ( v12 != 1 )
    {
LABEL_22:
      memset(a1, 0, 0x78uLL);
      return a1[10] != 0;
    }
    if ( v4 == 2 )
    {
      v13 = (__int64 *)ValidateHbwnd((unsigned __int64)a3, v8);
      goto LABEL_20;
    }
    if ( v4 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
    v14 = 23;
  }
  v13 = (__int64 *)HMValidateHandleNoSecure((unsigned __int64)a3, v14);
LABEL_20:
  if ( !v13 )
    goto LABEL_22;
  v16[0] = a1 + 10;
  v16[1] = v13;
  HMAssignmentLock(v16);
  return a1[10] != 0;
}
