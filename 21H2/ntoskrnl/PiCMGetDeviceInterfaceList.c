/*
 * XREFs of PiCMGetDeviceInterfaceList @ 0x14060B478
 * Callers:
 *     PiCMHandleIoctl @ 0x140629660 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140252870 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x140510060 (McTemplateK0d_EtwWriteTransfer.c)
 *     McTemplateK0jzt_EtwWriteTransfer @ 0x140510178 (McTemplateK0jzt_EtwWriteTransfer.c)
 *     PiCMCaptureInterfaceListInputData @ 0x14060B65C (PiCMCaptureInterfaceListInputData.c)
 *     PiCMReturnBufferResultData @ 0x14062C594 (PiCMReturnBufferResultData.c)
 *     IopGetDeviceInterfaces @ 0x14062F318 (IopGetDeviceInterfaces.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetDeviceInterfaceList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  PVOID v8; // rdi
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  int v14; // esi
  const WCHAR *v15; // r12
  __int64 v16; // rcx
  NTSTATUS inited; // eax
  int v18; // r9d
  unsigned int DeviceInterfaces; // eax
  int v20; // eax
  unsigned int v22; // [rsp+50h] [rbp-59h] BYREF
  PVOID P; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v24; // [rsp+60h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-41h] BYREF
  __int128 v26; // [rsp+78h] [rbp-31h] BYREF
  PCWSTR SourceString[2]; // [rsp+88h] [rbp-21h]
  __int64 v28; // [rsp+98h] [rbp-11h]

  v24 = a6;
  v28 = 0LL;
  *a6 = 0;
  v8 = 0LL;
  v9 = 0;
  P = 0LL;
  DestinationString = 0LL;
  v22 = 0;
  v26 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v12 = PiCMCaptureInterfaceListInputData(a1, a2, a5, &v26);
  if ( v12 < 0 )
    goto LABEL_17;
  v14 = DWORD1(v26);
  v15 = SourceString[1];
  if ( (byte_140C1327B & 2) != 0 )
    McTemplateK0jzt_EtwWriteTransfer(
      HIWORD(DWORD1(v26)) & 1,
      v10,
      v13,
      (__int64)&v26 + 8,
      SourceString[1],
      BYTE6(v26) & 1);
  if ( a3 && a4 >= 0x14 )
  {
    v16 = 3221225485LL;
    if ( (v14 & 0xFFFE0000) != 0 )
      goto LABEL_22;
    if ( (_WORD)v14 )
      v12 = -1073741811;
    v16 = (unsigned int)v12;
    if ( v12 < 0 )
      goto LABEL_22;
    inited = RtlInitUnicodeStringEx(&DestinationString, v15);
    v16 = (unsigned int)inited;
    if ( inited < 0 )
      goto LABEL_22;
    LOBYTE(v18) = 1;
    DeviceInterfaces = IopGetDeviceInterfaces(
                         (unsigned int)&v26 + 8,
                         (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Length != 0),
                         (v14 & 0x10000) == 0,
                         v18,
                         (__int64)&P,
                         (__int64)&v22);
    v9 = v22;
    v16 = DeviceInterfaces;
    v8 = P;
    if ( a4 - 20 < v22 )
      v16 = 3221225507LL;
  }
  else
  {
    v16 = 3221225485LL;
  }
  if ( (int)v16 >= 0 )
  {
    v20 = PiCMReturnBufferResultData(v16, v9, 0LL, v8, v9, HIDWORD(v28), a3, a4, v24);
    goto LABEL_15;
  }
LABEL_22:
  v20 = PiCMReturnBufferResultData(v16, v9, 0LL, 0LL, 0, HIDWORD(v28), a3, a4, v24);
LABEL_15:
  v12 = v20;
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_17:
  if ( SourceString[1] )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString[1]);
  if ( (byte_140C1327B & 2) != 0 )
    McTemplateK0d_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_DeviceInterfaceList_Stop, v13, v12);
  return (unsigned int)v12;
}
