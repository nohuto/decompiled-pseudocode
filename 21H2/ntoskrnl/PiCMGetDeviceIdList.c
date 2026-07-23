/*
 * XREFs of PiCMGetDeviceIdList @ 0x140604994
 * Callers:
 *     PiCMHandleIoctl @ 0x140629660 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140252870 (PiControlFreeUserModeCallersBuffer.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x140510060 (McTemplateK0d_EtwWriteTransfer.c)
 *     McTemplateK0zzt_EtwWriteTransfer @ 0x140510238 (McTemplateK0zzt_EtwWriteTransfer.c)
 *     PiAuDoesClientHaveAccess @ 0x1405FF814 (PiAuDoesClientHaveAccess.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x140604D18 (_CmGetMatchingFilteredDeviceList.c)
 *     PiCMConvertDeviceListFilters @ 0x140604E1C (PiCMConvertDeviceListFilters.c)
 *     PiCMCaptureDeviceListInputData @ 0x140604EC4 (PiCMCaptureDeviceListInputData.c)
 *     PiCMReturnBufferResultData @ 0x14062C594 (PiCMReturnBufferResultData.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     _CmGetDeviceRelationsList @ 0x1409771C8 (_CmGetDeviceRelationsList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiCMGetDeviceIdList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r15
  __int64 v8; // rdi
  _WORD *PoolWithTag; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  unsigned int v14; // r14d
  const wchar_t *v15; // rcx
  int DeviceRelationsList; // ebx
  int v17; // eax
  unsigned int v19; // edi
  unsigned int v20; // r10d
  int v21; // r10d
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rcx
  void *v25; // r9
  int v26; // [rsp+58h] [rbp-19h] BYREF
  int v27; // [rsp+5Ch] [rbp-15h] BYREF
  __int128 v28; // [rsp+60h] [rbp-11h] BYREF
  __int64 v29; // [rsp+70h] [rbp-1h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp+7h] BYREF

  v6 = a6;
  v26 = 0;
  v27 = 0;
  v8 = a3;
  *a6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v29 = 0LL;
  PoolWithTag = 0LL;
  v28 = 0LL;
  v12 = PiCMCaptureDeviceListInputData(a1, a2, a5, &v28);
  if ( v12 < 0 )
    goto LABEL_31;
  v14 = DWORD1(v28);
  if ( (byte_140C1327B & 2) != 0 )
  {
    if ( WORD2(v28) )
    {
      switch ( WORD2(v28) )
      {
        case 1u:
          v15 = L"Enum";
          break;
        case 2u:
          v15 = L"Service";
          break;
        case 4u:
          v15 = L"EjectRelations";
          break;
        case 8u:
          v15 = L"RemovalRelations";
          break;
        case 0x10u:
          v15 = L"PowerRelations";
          break;
        case 0x20u:
          v15 = L"BusRelations";
          break;
        case 0x40u:
          v15 = L"TransportRelations";
          break;
        case 0x80u:
          v15 = L"Class";
          break;
        default:
          v15 = L"Unknown";
          break;
      }
    }
    else
    {
      v15 = L"None";
    }
    McTemplateK0zzt_EtwWriteTransfer((__int64)v15, v10, v13, *((const wchar_t **)&v28 + 1), v15, BYTE6(v28) & 1);
  }
  if ( v8 && a4 >= 0x14 )
  {
    if ( (v14 & 0x20000) != 0 && !PiAuDoesClientHaveAccess(2u) )
    {
      DeviceRelationsList = -1073741790;
LABEL_28:
      v17 = PiCMReturnBufferResultData(
              (unsigned int)DeviceRelationsList,
              (unsigned int)(2 * v26),
              0LL,
              0LL,
              0,
              HIDWORD(v29),
              a3,
              a4,
              a6);
      goto LABEL_29;
    }
    v19 = 0;
    if ( a4 - 20 >= 2 )
      v19 = a4 - 20;
    if ( v19 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v19, 0x34706E50u);
      if ( !PoolWithTag )
      {
        DeviceRelationsList = -1073741670;
        goto LABEL_28;
      }
      v20 = v19 >> 1;
    }
    else
    {
      v20 = 0;
    }
    v26 = v20;
    DeviceRelationsList = PiCMConvertDeviceListFilters(v14, &v27);
    if ( DeviceRelationsList < 0 )
      goto LABEL_28;
    v22 = (unsigned int)(unsigned __int16)v14 - 4;
    if ( (unsigned int)v22 <= 0x3C && (v23 = 0x1000000010001011LL, _bittest64(&v23, v22)) )
    {
      if ( !*((_QWORD *)&v28 + 1) )
      {
        DeviceRelationsList = -1073741811;
        goto LABEL_28;
      }
      DeviceRelationsList = CmGetDeviceRelationsList(
                              PiPnpRtlCtx,
                              DWORD2(v28),
                              v27 & 0xFFFFFEFF,
                              (_DWORD)PoolWithTag,
                              v21,
                              (__int64)&v26);
      if ( DeviceRelationsList < 0 )
        goto LABEL_28;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      p_SubjectContext = &SubjectContext;
      LODWORD(v25) = 0;
      if ( (v14 & 0x20000) != 0 )
        p_SubjectContext = 0LL;
      else
        v25 = &PiCMMandatoryFilterCallback;
      DeviceRelationsList = CmGetMatchingFilteredDeviceList(
                              PiPnpRtlCtx,
                              DWORD2(v28),
                              v27,
                              (_DWORD)v25,
                              (__int64)p_SubjectContext,
                              (__int64)PoolWithTag,
                              v26,
                              (__int64)&v26);
      SeReleaseSubjectContext(&SubjectContext);
      if ( DeviceRelationsList < 0 )
      {
LABEL_57:
        v8 = a3;
        v6 = a6;
        goto LABEL_58;
      }
    }
    if ( !v26 )
    {
      v26 = 1;
      if ( v19 < 2 )
      {
        DeviceRelationsList = -1073741789;
        goto LABEL_28;
      }
      *PoolWithTag = 0;
    }
    goto LABEL_57;
  }
  DeviceRelationsList = -1073741811;
LABEL_58:
  if ( DeviceRelationsList < 0 )
    goto LABEL_28;
  v17 = PiCMReturnBufferResultData(
          (unsigned int)DeviceRelationsList,
          (unsigned int)(2 * v26),
          0LL,
          PoolWithTag,
          2 * v26,
          HIDWORD(v29),
          v8,
          a4,
          v6);
LABEL_29:
  v12 = v17;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_31:
  if ( *((_QWORD *)&v28 + 1) )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, *((void **)&v28 + 1));
  if ( (byte_140C1327B & 2) != 0 )
    McTemplateK0d_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_DeviceList_Stop, v13, v12);
  return (unsigned int)v12;
}
