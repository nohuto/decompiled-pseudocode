/*
 * XREFs of PiCMGetDeviceIdList @ 0x1406CFE50
 * Callers:
 *     PiCMHandleIoctl @ 0x14077BCA0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402DF554 (PiControlFreeUserModeCallersBuffer.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x1405636A4 (McTemplateK0d_EtwWriteTransfer.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1405637DC (McTemplateK0zzd_EtwWriteTransfer.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x1406D01BC (_CmGetMatchingFilteredDeviceList.c)
 *     PiCMConvertDeviceListFilters @ 0x1406D02C0 (PiCMConvertDeviceListFilters.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406D035C (PiCMCaptureDeviceListInputData.c)
 *     _CmGetDeviceRelationsList @ 0x1406E5DD4 (_CmGetDeviceRelationsList.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     PiCMReturnBufferResultData @ 0x14077C780 (PiCMReturnBufferResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x14078A600 (PiAuDoesClientHaveAccess.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiCMGetDeviceIdList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _WORD *Pool2; // rdi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r8
  unsigned int v11; // r14d
  const wchar_t *v12; // rcx
  int DeviceRelationsList; // ebx
  unsigned int v14; // esi
  unsigned int v15; // r10d
  int v16; // r10d
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  bool v19; // sf
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rcx
  char (__fastcall *v21)(int, int, int, __int64); // r9
  int v22; // edx
  int v23; // eax
  int v25; // [rsp+58h] [rbp-19h] BYREF
  int v26; // [rsp+5Ch] [rbp-15h] BYREF
  __int128 v27; // [rsp+60h] [rbp-11h] BYREF
  __int64 v28; // [rsp+70h] [rbp-1h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp+7h] BYREF

  v25 = 0;
  v28 = 0LL;
  v26 = 0;
  Pool2 = 0LL;
  *(_OWORD *)&SubjectContext.ClientToken = 0LL;
  *a6 = 0;
  *(_OWORD *)&SubjectContext.PrimaryToken = 0LL;
  v27 = 0LL;
  v9 = PiCMCaptureDeviceListInputData(a1, a2, a5, &v27);
  if ( v9 < 0 )
    goto LABEL_55;
  v11 = DWORD1(v27);
  if ( (byte_140C0DD4B & 2) != 0 )
  {
    if ( WORD2(v27) )
    {
      switch ( WORD2(v27) )
      {
        case 1u:
          v12 = L"Enum";
          break;
        case 2u:
          v12 = L"Service";
          break;
        case 4u:
          v12 = L"EjectRelations";
          break;
        case 8u:
          v12 = L"RemovalRelations";
          break;
        case 0x10u:
          v12 = L"PowerRelations";
          break;
        case 0x20u:
          v12 = L"BusRelations";
          break;
        case 0x40u:
          v12 = L"TransportRelations";
          break;
        case 0x80u:
          v12 = L"Class";
          break;
        default:
          v12 = L"Unknown";
          break;
      }
    }
    else
    {
      v12 = L"None";
    }
    McTemplateK0zzd_EtwWriteTransfer(
      (__int64)v12,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_DeviceList_Start,
      v10,
      *((const wchar_t **)&v27 + 1),
      v12,
      BYTE6(v27) & 1);
  }
  if ( !a3 || a4 < 0x14 )
  {
    DeviceRelationsList = -1073741811;
    goto LABEL_52;
  }
  if ( (v11 & 0x20000) == 0 || (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
  {
    v14 = 0;
    if ( a4 - 20 >= 2 )
      v14 = a4 - 20;
    if ( v14 )
    {
      Pool2 = (_WORD *)ExAllocatePool2(256LL, v14, 879783504LL);
      if ( !Pool2 )
      {
        DeviceRelationsList = -1073741670;
        goto LABEL_52;
      }
      v15 = v14 >> 1;
    }
    else
    {
      v15 = 0;
    }
    v25 = v15;
    DeviceRelationsList = PiCMConvertDeviceListFilters(v11, &v26);
    if ( DeviceRelationsList >= 0 )
    {
      v17 = (unsigned int)(unsigned __int16)v11 - 4;
      if ( (unsigned int)v17 <= 0x3C && (v18 = 0x1000000010001011LL, _bittest64(&v18, v17)) )
      {
        if ( !*((_QWORD *)&v27 + 1) )
        {
          DeviceRelationsList = -1073741811;
          goto LABEL_52;
        }
        DeviceRelationsList = CmGetDeviceRelationsList(
                                PiPnpRtlCtx,
                                DWORD2(v27),
                                v26 & 0xFFFFFEFF,
                                (_DWORD)Pool2,
                                v16,
                                (__int64)&v25);
        v19 = DeviceRelationsList < 0;
      }
      else
      {
        SeCaptureSubjectContext(&SubjectContext);
        p_SubjectContext = &SubjectContext;
        LODWORD(v21) = 0;
        if ( (v11 & 0x20000) != 0 )
          p_SubjectContext = 0LL;
        else
          v21 = PiCMMandatoryFilterCallback;
        DeviceRelationsList = CmGetMatchingFilteredDeviceList(
                                PiPnpRtlCtx,
                                DWORD2(v27),
                                v26,
                                (_DWORD)v21,
                                (__int64)p_SubjectContext,
                                (__int64)Pool2,
                                v25,
                                (__int64)&v25);
        SeReleaseSubjectContext(&SubjectContext);
        v19 = DeviceRelationsList < 0;
      }
      if ( !v19 )
      {
        v22 = v25;
        if ( !v25 )
        {
          v25 = 1;
          if ( v14 < 2 )
          {
            DeviceRelationsList = -1073741789;
            goto LABEL_52;
          }
          *Pool2 = 0;
          v22 = v25;
        }
        v23 = PiCMReturnBufferResultData(
                (unsigned int)DeviceRelationsList,
                (unsigned int)(2 * v22),
                0LL,
                Pool2,
                2 * v22,
                HIDWORD(v28),
                a3,
                a4,
                a6);
        goto LABEL_53;
      }
    }
  }
  else
  {
    DeviceRelationsList = -1073741790;
  }
LABEL_52:
  v23 = PiCMReturnBufferResultData(
          (unsigned int)DeviceRelationsList,
          (unsigned int)(2 * v25),
          0LL,
          0LL,
          0,
          HIDWORD(v28),
          a3,
          a4,
          a6);
LABEL_53:
  v9 = v23;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_55:
  if ( *((_QWORD *)&v27 + 1) )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, *((void **)&v27 + 1));
  if ( (byte_140C0DD4B & 2) != 0 )
    McTemplateK0d_EtwWriteTransfer(v8, (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_DeviceList_Stop, v10, v9);
  return (unsigned int)v9;
}
