/*
 * XREFs of PiCMGetDeviceInterfaceList @ 0x1406ACD88
 * Callers:
 *     PiCMHandleIoctl @ 0x140634850 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402647E0 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x140265AF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x14050FE20 (McTemplateK0d_EtwWriteTransfer.c)
 *     McTemplateK0jzt_EtwWriteTransfer @ 0x14050FF38 (McTemplateK0jzt_EtwWriteTransfer.c)
 *     PiCMReturnBufferResultData @ 0x140637784 (PiCMReturnBufferResultData.c)
 *     IopGetDeviceInterfaces @ 0x14063A508 (IopGetDeviceInterfaces.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1406ACF6C (PiCMCaptureInterfaceListInputData.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetDeviceInterfaceList(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
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
  NTSTATUS inited; // ecx
  NTSTATUS DeviceInterfaces; // eax
  int v18; // eax
  unsigned int v20; // [rsp+50h] [rbp-59h] BYREF
  PVOID P; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v22; // [rsp+60h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-41h] BYREF
  __int128 v24; // [rsp+78h] [rbp-31h] BYREF
  PCWSTR SourceString[2]; // [rsp+88h] [rbp-21h]
  __int64 v26; // [rsp+98h] [rbp-11h]

  v22 = a6;
  v26 = 0LL;
  *a6 = 0;
  v8 = 0LL;
  v9 = 0;
  P = 0LL;
  DestinationString = 0LL;
  v20 = 0;
  v24 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v12 = PiCMCaptureInterfaceListInputData(a1, a2, a5, &v24);
  if ( v12 < 0 )
    goto LABEL_17;
  v14 = DWORD1(v24);
  v15 = SourceString[1];
  if ( (byte_140C1327B & 2) != 0 )
    McTemplateK0jzt_EtwWriteTransfer(
      HIWORD(DWORD1(v24)) & 1,
      v10,
      v13,
      (__int64)&v24 + 8,
      SourceString[1],
      BYTE6(v24) & 1);
  if ( a3 && a4 >= 0x14 )
  {
    inited = -1073741811;
    if ( (v14 & 0xFFFE0000) != 0 )
      goto LABEL_22;
    if ( (_WORD)v14 )
      v12 = -1073741811;
    inited = v12;
    if ( v12 < 0 )
      goto LABEL_22;
    inited = RtlInitUnicodeStringEx(&DestinationString, v15);
    if ( inited < 0 )
      goto LABEL_22;
    DeviceInterfaces = IopGetDeviceInterfaces(
                         (int *)&v24 + 2,
                         (const UNICODE_STRING *)((unsigned __int64)&DestinationString & -(__int64)(DestinationString.Length != 0)),
                         (v14 & 0x10000) == 0,
                         1,
                         &P,
                         &v20);
    v9 = v20;
    inited = DeviceInterfaces;
    v8 = P;
    if ( a4 - 20 < v20 )
      inited = -1073741789;
  }
  else
  {
    inited = -1073741811;
  }
  if ( inited >= 0 )
  {
    v18 = PiCMReturnBufferResultData(inited, v9, 0, v8, v9, SHIDWORD(v26), a3, a4, v22);
    goto LABEL_15;
  }
LABEL_22:
  v18 = PiCMReturnBufferResultData(inited, v9, 0, 0LL, 0, SHIDWORD(v26), a3, a4, v22);
LABEL_15:
  v12 = v18;
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_17:
  if ( SourceString[1] )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString[1]);
  if ( (byte_140C1327B & 2) != 0 )
    McTemplateK0d_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_DeviceInterfaceList_Stop, v13, v12);
  return (unsigned int)v12;
}
