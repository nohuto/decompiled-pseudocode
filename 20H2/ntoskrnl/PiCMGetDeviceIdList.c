/*
 * XREFs of PiCMGetDeviceIdList @ 0x1406C9C84
 * Callers:
 *     PiCMHandleIoctl @ 0x14063CA80 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14023F6C0 (PiControlFreeUserModeCallersBuffer.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x14050E2F0 (McTemplateK0d_EtwWriteTransfer.c)
 *     McTemplateK0zzt_EtwWriteTransfer @ 0x14050E4C8 (McTemplateK0zzt_EtwWriteTransfer.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     PiCMReturnBufferResultData @ 0x14063F9B4 (PiCMReturnBufferResultData.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x1406C9ED0 (_CmGetMatchingFilteredDeviceList.c)
 *     PiCMConvertDeviceListFilters @ 0x1406C9FD4 (PiCMConvertDeviceListFilters.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406CA07C (PiCMCaptureDeviceListInputData.c)
 *     _CmGetDeviceRelationsList @ 0x1409798C8 (_CmGetDeviceRelationsList.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetDeviceIdList(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // rdi
  _WORD *PoolWithTag; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  unsigned int v14; // r14d
  unsigned int v15; // edi
  unsigned int v16; // r10d
  signed int DeviceRelationsList; // ebx
  int v18; // r10d
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  const wchar_t *v23; // rcx
  int v24; // [rsp+58h] [rbp-9h] BYREF
  int v25; // [rsp+5Ch] [rbp-5h] BYREF
  __int128 v26; // [rsp+60h] [rbp-1h] BYREF
  __int64 v27; // [rsp+70h] [rbp+Fh]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp+17h] BYREF

  v6 = a6;
  v24 = 0;
  v25 = 0;
  *a6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v27 = 0LL;
  PoolWithTag = 0LL;
  v26 = 0LL;
  v12 = PiCMCaptureDeviceListInputData(a1, a2, a5, &v26);
  if ( v12 < 0 )
    goto LABEL_22;
  v14 = DWORD1(v26);
  if ( (byte_140C130BB & 2) != 0 )
  {
    if ( WORD2(v26) )
    {
      switch ( WORD2(v26) )
      {
        case 1u:
          v23 = L"Enum";
          break;
        case 2u:
          v23 = L"Service";
          break;
        case 4u:
          v23 = L"EjectRelations";
          break;
        case 8u:
          v23 = L"RemovalRelations";
          break;
        case 0x10u:
          v23 = L"PowerRelations";
          break;
        case 0x20u:
          v23 = L"BusRelations";
          break;
        case 0x40u:
          v23 = L"TransportRelations";
          break;
        case 0x80u:
          v23 = L"Class";
          break;
        default:
          v23 = L"Unknown";
          break;
      }
    }
    else
    {
      v23 = L"None";
    }
    McTemplateK0zzt_EtwWriteTransfer((__int64)v23, v10, v13, *((const wchar_t **)&v26 + 1), v23, BYTE6(v26) & 1);
  }
  if ( !a3 || a4 < 0x14 )
  {
    DeviceRelationsList = -1073741811;
LABEL_18:
    if ( DeviceRelationsList >= 0 )
    {
      v21 = PiCMReturnBufferResultData(DeviceRelationsList, 2 * v24, 0, PoolWithTag, 2 * v24, SHIDWORD(v27), a3, a4, v6);
      goto LABEL_20;
    }
    goto LABEL_28;
  }
  v15 = 0;
  if ( a4 - 20 >= 2 )
    v15 = a4 - 20;
  if ( v15 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x34706E50u);
    if ( !PoolWithTag )
    {
      DeviceRelationsList = -1073741670;
      goto LABEL_28;
    }
    v16 = v15 >> 1;
  }
  else
  {
    v16 = 0;
  }
  v24 = v16;
  DeviceRelationsList = PiCMConvertDeviceListFilters(v14, &v25);
  if ( DeviceRelationsList >= 0 )
  {
    v19 = (unsigned int)(unsigned __int16)v14 - 4;
    if ( (unsigned int)v19 <= 0x3C && (v20 = 0x1000000010001011LL, _bittest64(&v20, v19)) )
    {
      if ( !*((_QWORD *)&v26 + 1) )
      {
        DeviceRelationsList = -1073741811;
        goto LABEL_28;
      }
      DeviceRelationsList = CmGetDeviceRelationsList(
                              PiPnpRtlCtx,
                              DWORD2(v26),
                              v25 & 0xFFFFFEFF,
                              (_DWORD)PoolWithTag,
                              v18,
                              (__int64)&v24);
      if ( DeviceRelationsList < 0 )
        goto LABEL_28;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      DeviceRelationsList = CmGetMatchingFilteredDeviceList(
                              PiPnpRtlCtx,
                              DWORD2(v26),
                              v25,
                              (unsigned int)&PiCMMandatoryFilterCallback,
                              (__int64)&SubjectContext,
                              (__int64)PoolWithTag,
                              v24,
                              (__int64)&v24);
      SeReleaseSubjectContext(&SubjectContext);
      if ( DeviceRelationsList < 0 )
      {
LABEL_17:
        v6 = a6;
        goto LABEL_18;
      }
    }
    if ( !v24 )
    {
      v24 = 1;
      if ( v15 < 2 )
      {
        DeviceRelationsList = -1073741789;
        goto LABEL_28;
      }
      *PoolWithTag = 0;
    }
    goto LABEL_17;
  }
LABEL_28:
  v21 = PiCMReturnBufferResultData(DeviceRelationsList, 2 * v24, 0, 0LL, 0, SHIDWORD(v27), a3, a4, a6);
LABEL_20:
  v12 = v21;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_22:
  if ( *((_QWORD *)&v26 + 1) )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, *((void **)&v26 + 1));
  if ( (byte_140C130BB & 2) != 0 )
    McTemplateK0d_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_DeviceList_Stop, v13, v12);
  return (unsigned int)v12;
}
