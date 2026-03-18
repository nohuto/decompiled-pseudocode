/*
 * XREFs of PiCMQueryRemove @ 0x14065F7D4
 * Callers:
 *     PiCMHandleIoctl @ 0x14077BCA0 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x1402DEB60 (RtlGetActiveConsoleId.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x140561048 (McTemplateK0z_EtwWriteTransfer.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x1405643B8 (McTemplateK0dz_EtwWriteTransfer.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14065FA0C (PnpQueueQueryAndRemoveEvent.c)
 *     PiAuDoesClientHavePrivilege @ 0x14065FC74 (PiAuDoesClientHavePrivilege.c)
 *     PiCMReleaseObjectInputData @ 0x1406BACAC (PiCMReleaseObjectInputData.c)
 *     PiCMReturnBufferResultData @ 0x14077C780 (PiCMReturnBufferResultData.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     _CmValidateDeviceName @ 0x14077FAC0 (_CmValidateDeviceName.c)
 *     _CmIsRootDevice @ 0x140789040 (_CmIsRootDevice.c)
 *     PiCMCaptureObjectInputData @ 0x14078A1A8 (PiCMCaptureObjectInputData.c)
 *     _CmGetDeviceStatus @ 0x14078A470 (_CmGetDeviceStatus.c)
 *     PiAuDoesClientHaveAccess @ 0x14078A600 (PiAuDoesClientHaveAccess.c)
 *     PnpGetCallerSessionId @ 0x140946F98 (PnpGetCallerSessionId.c)
 *     PiAuCheckClientInteractive @ 0x140949890 (PiAuCheckClientInteractive.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiCMQueryRemove(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  const WCHAR *v7; // r13
  int v8; // r12d
  unsigned int v9; // r14d
  _WORD *v10; // r15
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  int v14; // edi
  NTSTATUS DeviceRegProp; // ebx
  unsigned int v16; // eax
  unsigned int v17; // esi
  _WORD *Pool2; // rax
  int v19; // edi
  int v20; // eax
  int v22; // edi
  unsigned int v23; // r8d
  char v24[4]; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v25; // [rsp+5Ch] [rbp-45h] BYREF
  unsigned int v26; // [rsp+60h] [rbp-41h] BYREF
  int v27; // [rsp+64h] [rbp-3Dh] BYREF
  int v28; // [rsp+68h] [rbp-39h] BYREF
  int v29; // [rsp+6Ch] [rbp-35h] BYREF
  ULONG SessionId; // [rsp+70h] [rbp-31h] BYREF
  int v31; // [rsp+74h] [rbp-2Dh] BYREF
  int v32; // [rsp+78h] [rbp-29h] BYREF
  int v33; // [rsp+7Ch] [rbp-25h] BYREF
  __int128 v34; // [rsp+80h] [rbp-21h] BYREF
  PCWSTR SourceString[2]; // [rsp+90h] [rbp-11h]
  __int64 v36; // [rsp+A0h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp+7h] BYREF

  v27 = 0;
  v32 = 0;
  v36 = 0LL;
  DestinationString = 0LL;
  v31 = 0;
  v7 = 0LL;
  v34 = 0LL;
  *a6 = 0;
  v8 = 0;
  *(_OWORD *)SourceString = 0LL;
  v29 = 0;
  v9 = 0;
  v28 = 0;
  v10 = 0LL;
  v33 = 0;
  v24[0] = 0;
  SessionId = 0;
  v25 = 0;
  v26 = 0;
  v12 = PiCMCaptureObjectInputData(a1, a2, a5, &v34);
  if ( v12 < 0 )
    goto LABEL_25;
  v7 = SourceString[0];
  v14 = HIDWORD(SourceString[1]);
  if ( (byte_140C0DD4B & 4) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      v11,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_QueryRemove_Start,
      v13,
      SHIDWORD(SourceString[1]),
      SourceString[0]);
  if ( !v7 || DWORD2(v34) != 1 || !a3 || a4 < 0x14 )
    goto LABEL_62;
  DeviceRegProp = CmValidateDeviceName(v11, v7);
  if ( DeviceRegProp < 0 )
  {
LABEL_58:
    if ( DeviceRegProp != -2147483608 )
      goto LABEL_22;
    v23 = v25;
    goto LABEL_60;
  }
  if ( (unsigned __int8)CmIsRootDevice(v7) )
  {
    DeviceRegProp = -1073741773;
    goto LABEL_22;
  }
  v16 = a4 - 20;
  v17 = 0;
  if ( v16 >= 2 )
    v17 = v16;
  if ( v17 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(256LL, v17, 879783504LL);
    v10 = Pool2;
    if ( !Pool2 )
    {
      DeviceRegProp = -1073741670;
      goto LABEL_22;
    }
    *Pool2 = 0;
  }
  v19 = v14 - 1;
  if ( !v19 )
  {
    if ( (unsigned __int8)PiAuDoesClientHaveAccess(32LL) && (unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
    {
      if ( (DWORD1(v34) & 0xFFFFFFFE) == 0 )
      {
        v8 = BYTE4(v34) & 1;
        goto LABEL_20;
      }
LABEL_40:
      DeviceRegProp = -1073741811;
      goto LABEL_22;
    }
LABEL_46:
    DeviceRegProp = -1073741790;
    goto LABEL_22;
  }
  v22 = v19 - 1;
  if ( !v22 )
  {
    v28 = 4;
    DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, (_DWORD)v7, 0, 16, (__int64)&v33, (__int64)&v29, (__int64)&v28, 0);
    if ( DeviceRegProp >= 0 )
    {
      v8 = 8;
      if ( (v29 & 8) != 0 )
      {
        if ( !(unsigned __int8)PiAuDoesClientHaveAccess(4LL) || !(unsigned __int8)PiAuDoesClientHavePrivilege(25LL) )
          goto LABEL_46;
      }
      else
      {
        DeviceRegProp = PnpGetCallerSessionId(&SessionId);
        if ( DeviceRegProp < 0 || SessionId != (unsigned int)RtlGetActiveConsoleId() )
        {
          DeviceRegProp = PiAuCheckClientInteractive(v24);
          if ( DeviceRegProp < 0 || !v24[0] )
          {
            if ( !(unsigned __int8)PiAuDoesClientHaveAccess(4LL) || !(unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
              goto LABEL_46;
            DeviceRegProp = 0;
          }
        }
      }
      if ( DWORD1(v34) )
        goto LABEL_40;
    }
    v9 = v17;
    if ( DeviceRegProp < 0 )
      goto LABEL_58;
    goto LABEL_20;
  }
  if ( v22 != 1 )
  {
LABEL_62:
    DeviceRegProp = -1073741811;
    goto LABEL_22;
  }
  if ( !(unsigned __int8)PiAuDoesClientHaveAccess(4LL) || !(unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
    goto LABEL_46;
  if ( DWORD1(v34) )
    goto LABEL_40;
  v8 = 2;
  if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, (_DWORD)v7, 0, (unsigned int)&v27, (__int64)&v32, (__int64)&v31) < 0 )
  {
    DeviceRegProp = -1073741810;
    goto LABEL_22;
  }
  if ( (v27 & 0x2000) == 0 )
  {
    DeviceRegProp = -1073741808;
    goto LABEL_22;
  }
LABEL_20:
  DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, v7);
  v9 = v17;
  if ( DeviceRegProp < 0 )
    goto LABEL_58;
  v25 = v17;
  DeviceRegProp = PnpQueueQueryAndRemoveEvent(
                    (unsigned int)&DestinationString,
                    (unsigned int)&v26,
                    (_DWORD)v10,
                    (unsigned int)&v25,
                    v8,
                    0);
  if ( DeviceRegProp != -2147483608 )
  {
LABEL_22:
    v20 = PiCMReturnBufferResultData((unsigned int)DeviceRegProp, v25, v26, 0LL, 0, v36, a3, a4, a6);
    goto LABEL_23;
  }
  v23 = v25;
  if ( v10 )
    v10[((unsigned __int64)v17 >> 1) - 1] = 0;
LABEL_60:
  if ( v23 > v9 )
    goto LABEL_22;
  v20 = PiCMReturnBufferResultData(2147483688LL, v25, v26, v10, v23, v36, a3, a4, a6);
LABEL_23:
  v12 = v20;
  if ( v10 )
    ExFreePoolWithTag(v10, 0x34706E50u);
LABEL_25:
  if ( (byte_140C0DD4B & 4) != 0 )
    McTemplateK0z_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_QueryRemove_Stop, v13, v7);
  PiCMReleaseObjectInputData(&v34);
  return (unsigned int)v12;
}
