/*
 * XREFs of CreatePseudoDigitizerDevice @ 0x1C01DD7C4
 * Callers:
 *     _InitializeTouchInjectionWorker @ 0x1C01DC430 (_InitializeTouchInjectionWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C01DD6BC (-_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z.c)
 */

struct DEVICEINFO *__fastcall CreatePseudoDigitizerDevice(int a1, int a2, __int64 a3)
{
  struct DEVICEINFO *DeviceInfo; // rsi
  HANDLE *v7; // r14
  unsigned __int64 v8; // xmm0_8
  struct tagRECT v9; // xmm6
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  HANDLE v15; // rcx
  struct _UNICODE_STRING DestinationString_8; // [rsp+38h] [rbp-A9h] BYREF
  struct tagRECT v18; // [rsp+48h] [rbp-99h] BYREF
  _QWORD v19[18]; // [rsp+58h] [rbp-89h] BYREF

  DestinationString_8 = 0LL;
  DeviceInfo = 0LL;
  RtlInitUnicodeString(&DestinationString_8, L"\\??\\VIRTUAL_DIGITIZER");
  EtwTracePseudoDevCreationStart();
  v7 = (HANDLE *)(a3 + 88);
  if ( (int)CHidInput::GetKernelHandleToRimObj(gpHidInput, (void **)(a3 + 88)) >= 0 )
  {
    v8 = _mm_srli_si128(*(__m128i *)RIMGetVirtualDesktopPhysicalSize(&v18), 8).m128i_u64[0];
    v18 = *(struct tagRECT *)(*gpDispInfo + 24LL);
    v9 = v18;
    _UpdateReportDescriptor(&v18, 3937 * ((int)v8 / 1000) / 0x64u, 3937 * (SHIDWORD(v8) / 1000) / 0x64u);
    memset(v19, 0, sizeof(v19));
    LODWORD(v19[1]) = 498;
    v19[0] = &unk_1C0333200;
    v19[10] = 0LL;
    *(struct tagRECT *)((char *)&v19[11] + 4) = v9;
    LODWORD(v19[11]) = a1;
    HIDWORD(v19[13]) = (int)v8 / 1000;
    LODWORD(v19[14]) = SHIDWORD(v8) / 1000;
    *(_QWORD *)((char *)&v19[14] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v11, v10, v12) + 880);
    HIDWORD(v19[15]) = *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)((char *)&v19[14] + 4), v13, v14) + 12) & 0x80000000;
    v15 = *v7;
    LODWORD(v19[16]) = a2;
    if ( (int)RIMAddInjectionDeviceOfType(v15, &DestinationString_8, 2LL, v19, 0, a3 + 96) < 0 )
    {
      ZwClose(*v7);
      *v7 = 0LL;
      *(_QWORD *)(a3 + 96) = 0LL;
    }
    else
    {
      DeviceInfo = CBaseInput::FindDeviceInfo(gpHidInput, *(void **)(a3 + 96), 0);
    }
  }
  EtwTracePseudoDevCreationStop();
  return DeviceInfo;
}
