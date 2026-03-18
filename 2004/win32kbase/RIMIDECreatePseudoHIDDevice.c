/*
 * XREFs of RIMIDECreatePseudoHIDDevice @ 0x1C016A2F4
 * Callers:
 *     RIMIDE_CreateGenericHidDevice @ 0x1C016D500 (RIMIDE_CreateGenericHidDevice.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1C016D64C (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C016D794 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C001A0D0 (RawInputManagerObjectCreateKernelHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01295F0 (McTemplateK0_EtwWriteTransfer.c)
 *     rimFindReferencedRimObj @ 0x1C0155B8C (rimFindReferencedRimObj.c)
 *     rimInputTypeFromDeviceTypeAndUsages @ 0x1C0155CE0 (rimInputTypeFromDeviceTypeAndUsages.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0157990 (RIMAddInjectionDeviceOfType.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C0169620 (RIMIDECreateDeviceInstancePath.c)
 */

__int64 __fastcall RIMIDECreatePseudoHIDDevice(
        unsigned __int16 a1,
        __int16 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int128 *a6,
        char a7,
        char a8,
        unsigned int a9,
        __int64 a10)
{
  __int64 v13; // rbx
  __int128 v15; // xmm0
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int16 v18; // dx
  __int16 v19; // r8
  int v20; // edx
  int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 CurrentProcessWin32Process; // rax
  int v25; // eax
  int v26; // edx
  _UNKNOWN **v27; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v32; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v33; // [rsp+58h] [rbp-A8h]
  __int128 v34; // [rsp+68h] [rbp-98h]
  __int128 v35; // [rsp+78h] [rbp-88h]
  __int128 v36; // [rsp+88h] [rbp-78h]
  _OWORD v37[9]; // [rsp+A0h] [rbp-60h] BYREF
  char v38; // [rsp+130h] [rbp+30h] BYREF

  v13 = 0LL;
  *(_QWORD *)&v32.Length = 0x1000000LL;
  v33 = *a6;
  v34 = a6[1];
  v31 = 0LL;
  v35 = a6[2];
  Handle = 0LL;
  v15 = a6[3];
  v32.Buffer = (PWSTR)&v38;
  v36 = v15;
  memset(v37, 0, sizeof(v37));
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    McTemplateK0_EtwWriteTransfer(v16, &PseudoDevCreationStart, &W32kControlGuid);
  if ( (int)RIMIDECreateDeviceInstancePath(2LL, a1) >= 0 )
  {
    Object = 0LL;
    v17 = rimInputTypeFromDeviceTypeAndUsages(2, a1, a2);
    if ( (int)rimFindReferencedRimObj(v17, v18, v19, (struct _LIST_ENTRY **)&Object) < 0 )
    {
      v27 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v20, 1, 19, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
      }
    }
    else
    {
      if ( (int)RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle) >= 0 )
      {
        v21 = HIDWORD(v37[0]);
        if ( a5 )
          v21 = HIDWORD(v37[0]) | 1;
        *(_QWORD *)&v37[5] = a5;
        v22 = *((_QWORD *)gptiCurrent + 52);
        v37[1] = v33;
        DWORD2(v37[5]) = a3;
        v23 = *(_QWORD *)(v22 + 880);
        v37[2] = v34;
        *(_QWORD *)((char *)&v37[7] + 4) = v23;
        v37[3] = v35;
        v37[4] = v36;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
        *(_QWORD *)&v37[8] = __PAIR64__(a9, a4);
        *((_QWORD *)&v37[8] + 1) = a10;
        HIDWORD(v37[7]) = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80000000;
        HIDWORD(v37[0]) = v21 & 0xFFFFFFF9 | (2 * (a7 & 1 | (2 * (a8 & 1))));
        v25 = RIMAddInjectionDeviceOfType((char *)Handle, &v32, 2, v37, 0, (__int64)&v31);
        if ( v25 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v26) = 2;
          WPP_RECORDER_SF_d((_DWORD)gRimLog, v26, 1, 18, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, v25);
        }
        ZwClose(Handle);
        v13 = v31;
      }
      ObfDereferenceObject(Object);
    }
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
      McTemplateK0_EtwWriteTransfer((__int64)v27, &PseudoDevCreationStop, &W32kControlGuid);
  }
  return v13;
}
