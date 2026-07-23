/*
 * XREFs of PiCMDeviceAction @ 0x14072F140
 * Callers:
 *     PiCMHandleIoctl @ 0x140629660 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     PiCMReturnBasicResultData @ 0x1405FF4A0 (PiCMReturnBasicResultData.c)
 *     _CmGetDeviceStatus @ 0x1405FF680 (_CmGetDeviceStatus.c)
 *     PiAuDoesClientHaveAccess @ 0x1405FF814 (PiAuDoesClientHaveAccess.c)
 *     _CmIsRootDevice @ 0x14060FAF4 (_CmIsRootDevice.c)
 *     PiCMReleaseObjectInputData @ 0x14062D950 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14062D984 (PiCMCaptureObjectInputData.c)
 *     _CmValidateDeviceName @ 0x140637080 (_CmValidateDeviceName.c)
 *     PiQueueDeviceRequest @ 0x14072F3E4 (PiQueueDeviceRequest.c)
 *     PiAuDoesClientHavePrivilege @ 0x14072F518 (PiAuDoesClientHavePrivilege.c)
 *     PiCMSetProblem @ 0x14072F814 (PiCMSetProblem.c)
 */

__int64 __fastcall PiCMDeviceAction(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v8; // r13d
  int v9; // esi
  int inited; // ebx
  const WCHAR *v11; // r15
  int v12; // r14d
  int v13; // r14d
  int v14; // r8d
  int v15; // edx
  int v16; // eax
  int v18; // r8d
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // edx
  int v23; // r8d
  unsigned int v24; // [rsp+38h] [rbp-39h]
  int DeviceStatus; // [rsp+48h] [rbp-29h] BYREF
  int v26; // [rsp+4Ch] [rbp-25h] BYREF
  int v27; // [rsp+50h] [rbp-21h] BYREF
  int v28; // [rsp+54h] [rbp-1Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-19h] BYREF
  __int128 v30; // [rsp+68h] [rbp-9h] BYREF
  PCWSTR SourceString[2]; // [rsp+78h] [rbp+7h]
  __int64 v32; // [rsp+88h] [rbp+17h]

  v32 = 0LL;
  DeviceStatus = 0;
  v26 = 0;
  *a6 = 0;
  v8 = 0;
  DestinationString = 0LL;
  v28 = 0;
  v9 = 0;
  v30 = 0LL;
  v27 = 0;
  *(_OWORD *)SourceString = 0LL;
  inited = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v30);
  if ( inited >= 0 )
  {
    v11 = SourceString[0];
    if ( !SourceString[0] || DWORD2(v30) != 1 || !a3 || a4 < 8 )
    {
      inited = -1073741811;
      goto LABEL_26;
    }
    v12 = HIDWORD(SourceString[1]);
    if ( HIDWORD(SourceString[1]) == 1 )
    {
      v9 = DWORD1(v30);
      if ( (unsigned int)(DWORD1(v30) - 1) > 5 )
        inited = -1073741811;
    }
    else
    {
      if ( HIDWORD(SourceString[1]) != 2 )
        goto LABEL_52;
      v8 = DWORD1(v30);
      if ( (unsigned int)(DWORD1(v30) - 1) > 1 )
        inited = -1073741811;
    }
    if ( inited < 0 )
      goto LABEL_26;
    inited = CmValidateDeviceName((unsigned int)(HIDWORD(SourceString[1]) - 1), SourceString[0]);
    if ( inited < 0 )
      goto LABEL_26;
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
        goto LABEL_52;
      if ( PiAuDoesClientHaveAccess(0x20u) && (unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
      {
        inited = RtlInitUnicodeStringEx(&DestinationString, v11);
        if ( inited < 0 )
          goto LABEL_26;
        v16 = PiQueueDeviceRequest((unsigned int)&DestinationString, 9, v23, v8 != 2, 0LL);
        goto LABEL_25;
      }
    }
    else
    {
      if ( v9 <= 0 )
        goto LABEL_52;
      if ( v9 > 2 )
      {
        if ( v9 > 6 )
          goto LABEL_52;
        if ( PiAuDoesClientHaveAccess(2u) && (unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, v11);
          if ( inited >= 0 )
          {
            v19 = v9 - 3;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                v21 = v20 - 1;
                if ( v21 )
                {
                  if ( v21 != 1 )
                  {
                    inited = -1073741811;
                    DeviceStatus = -1073741811;
                    goto LABEL_26;
                  }
                  v22 = 24;
                }
                else
                {
                  v22 = 23;
                }
              }
              else
              {
                v22 = 22;
              }
            }
            else
            {
              v22 = 21;
            }
            inited = PiQueueDeviceRequest((unsigned int)&DestinationString, v22, v18, 1, (__int64)&DeviceStatus);
            if ( inited >= 0 )
              inited = DeviceStatus;
          }
LABEL_26:
          inited = PiCMReturnBasicResultData(inited, v32, a3, a4, a6);
          goto LABEL_27;
        }
      }
      else if ( PiAuDoesClientHaveAccess(0x20u) && (unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
      {
        if ( !CmIsRootDevice(v11) )
        {
          DeviceStatus = CmGetDeviceStatus(PiPnpRtlCtx, v11, 0, &v26, &v28, &v27, v24);
          if ( DeviceStatus >= 0 )
          {
            if ( (v26 & 8) != 0 )
              goto LABEL_26;
            if ( (v26 & 0x400) != 0 )
            {
              inited = PiCMSetProblem(v11);
              if ( inited < 0 )
                goto LABEL_26;
            }
          }
          inited = RtlInitUnicodeStringEx(&DestinationString, v11);
          if ( inited < 0 )
            goto LABEL_26;
          v15 = 16;
          if ( v9 != 1 )
            v15 = 12;
          v16 = PiQueueDeviceRequest((unsigned int)&DestinationString, v15, v14, 1, 0LL);
LABEL_25:
          inited = v16;
          goto LABEL_26;
        }
LABEL_52:
        inited = -1073741811;
        goto LABEL_26;
      }
    }
    inited = -1073741790;
    goto LABEL_26;
  }
LABEL_27:
  PiCMReleaseObjectInputData((__int64)&v30);
  return (unsigned int)inited;
}
