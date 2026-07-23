/*
 * XREFs of PiCMGetRelatedDeviceInstance @ 0x1407689A4
 * Callers:
 *     PiCMHandleIoctl @ 0x140629660 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x140240E00 (RtlStringCbCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     PiGetRelatedDevice @ 0x14060C9F4 (PiGetRelatedDevice.c)
 *     _CmGetDeviceParent @ 0x14060F984 (_CmGetDeviceParent.c)
 *     _CmIsRootDevice @ 0x14060FAF4 (_CmIsRootDevice.c)
 *     PiCMReturnBufferResultData @ 0x14062C594 (PiCMReturnBufferResultData.c)
 *     PiCMReleaseObjectInputData @ 0x14062D950 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14062D984 (PiCMCaptureObjectInputData.c)
 *     _CmValidateDeviceName @ 0x140637080 (_CmValidateDeviceName.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiCMGetRelatedDeviceInstance(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  unsigned int v6; // esi
  _DWORD *v7; // r12
  wchar_t *PoolWithTag; // rdi
  unsigned int v9; // r13d
  wchar_t *v10; // r15
  __int64 v11; // rcx
  signed int inited; // ebx
  unsigned int v13; // eax
  unsigned int v14; // esi
  int v15; // r12d
  int DeviceParent; // eax
  signed int v17; // eax
  char *v19; // rax
  unsigned int v20; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-11h] BYREF
  __int128 v22; // [rsp+70h] [rbp-1h] BYREF
  PCWSTR SourceString[2]; // [rsp+80h] [rbp+Fh]
  __int64 v24; // [rsp+90h] [rbp+1Fh]

  v24 = 0LL;
  v6 = a4;
  v7 = a3;
  PoolWithTag = 0LL;
  v9 = 0;
  v22 = 0LL;
  *a6 = 0;
  v10 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  DestinationString = 0LL;
  inited = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v22);
  if ( inited < 0 )
    goto LABEL_22;
  if ( SourceString[0] && *(_QWORD *)((char *)&v22 + 4) == 0x100000000LL )
  {
    if ( v7 && v6 >= 0x14 )
    {
      v13 = v6 - 20;
      v14 = 0;
      v15 = 2;
      if ( v13 >= 2 )
        v14 = v13;
      if ( v14 )
      {
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v14, 0x34706E50u);
        if ( !PoolWithTag )
          inited = -1073741670;
      }
      if ( inited < 0 )
        goto LABEL_34;
      inited = CmValidateDeviceName(v11, SourceString[0]);
      if ( inited < 0 )
        goto LABEL_34;
      switch ( HIDWORD(SourceString[1]) )
      {
        case 1:
          v20 = v14 >> 1;
          DeviceParent = CmGetDeviceParent(PiPnpRtlCtx, SourceString[0], PoolWithTag, &v20);
          v9 = v20;
          inited = DeviceParent;
LABEL_15:
          v6 = a4;
          v7 = a3;
          goto LABEL_16;
        case 2:
LABEL_24:
          inited = RtlInitUnicodeStringEx(&DestinationString, SourceString[0]);
          if ( inited < 0 )
            goto LABEL_34;
          v20 = 400;
          v19 = (char *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x34706E50u);
          v10 = (wchar_t *)v19;
          if ( !v19 )
          {
            inited = -1073741670;
            goto LABEL_34;
          }
          inited = PiGetRelatedDevice((__int64)&DestinationString, v19, &v20, v15);
          if ( inited < 0 )
          {
LABEL_34:
            v17 = PiCMReturnBufferResultData(inited, 2 * v9, 0, 0LL, 0, v24, a3, a4, a6);
            goto LABEL_18;
          }
          inited = RtlStringCbCopyExW(PoolWithTag, v14, v10, 0LL, 0LL, 0x800u);
          if ( inited == -2147483643 )
            inited = -1073741789;
          v9 = (v20 >> 1) + 1;
          goto LABEL_15;
        case 3:
          if ( CmIsRootDevice(SourceString[0]) )
          {
            inited = -1073741810;
            goto LABEL_34;
          }
          v15 = 3;
          goto LABEL_24;
      }
    }
    inited = -1073741811;
    goto LABEL_34;
  }
  inited = -1073741811;
LABEL_16:
  if ( inited < 0 )
    goto LABEL_34;
  v17 = PiCMReturnBufferResultData(inited, 2 * v9, 0, PoolWithTag, 2 * v9, v24, v7, v6, a6);
LABEL_18:
  inited = v17;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x34706E50u);
LABEL_22:
  PiCMReleaseObjectInputData((__int64)&v22);
  return (unsigned int)inited;
}
