/*
 * XREFs of PiCMValidateDeviceInstance @ 0x1405FF280
 * Callers:
 *     PiCMHandleIoctl @ 0x140629660 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     PiCMReturnBasicResultData @ 0x1405FF4A0 (PiCMReturnBasicResultData.c)
 *     _CmGetDeviceStatus @ 0x1405FF680 (_CmGetDeviceStatus.c)
 *     PiAuDoesClientHaveAccess @ 0x1405FF814 (PiAuDoesClientHaveAccess.c)
 *     _PnpOpenObjectRegKey @ 0x14062C674 (_PnpOpenObjectRegKey.c)
 *     PiCMReleaseObjectInputData @ 0x14062D950 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14062D984 (PiCMCaptureObjectInputData.c)
 *     _RegRtlQueryValue @ 0x140637128 (_RegRtlQueryValue.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14068FB00 (PiPnpRtlApplyMandatoryFilters.c)
 */

__int64 __fastcall PiCMValidateDeviceInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  int v9; // ebx
  int v10; // edi
  int v11; // ebx
  HANDLE Handle; // [rsp+50h] [rbp-31h] BYREF
  int v14; // [rsp+58h] [rbp-29h] BYREF
  int v15; // [rsp+5Ch] [rbp-25h] BYREF
  int v16; // [rsp+60h] [rbp-21h] BYREF
  __int128 v17; // [rsp+68h] [rbp-19h] BYREF
  int v18[4]; // [rsp+78h] [rbp-9h]
  __int64 v19; // [rsp+88h] [rbp+7h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp+Fh] BYREF

  v6 = a6;
  v16 = 0;
  *a6 = 0;
  v15 = 0;
  v14 = 0;
  Handle = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  *(_OWORD *)v18 = 0LL;
  LOBYTE(a6) = 1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, &v17);
  if ( v9 < 0 )
    goto LABEL_17;
  if ( !*(_QWORD *)v18
    || (v10 = DWORD1(v17), (unsigned int)(DWORD1(v17) - 1) > 1)
    || DWORD2(v17) != 1
    || v18[3]
    || !a3
    || a4 < 8 )
  {
    v11 = -1073741811;
    goto LABEL_14;
  }
  v11 = PnpOpenObjectRegKey(PiPnpRtlCtx, v18[0], 1, 1, 0, (__int64)&Handle);
  if ( v11 >= 0 )
  {
    if ( v10 == 2 && (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
      goto LABEL_19;
    SeCaptureSubjectContext(&SubjectContext);
    v11 = PiPnpRtlApplyMandatoryFilters(PiPnpRtlCtx, v18[0], 1, (int)Handle, (ULONG)&SubjectContext, (__int64)&a6);
    SeReleaseSubjectContext(&SubjectContext);
    if ( v11 >= 0 )
    {
      if ( !(_BYTE)a6 )
        goto LABEL_20;
      if ( v10 == 2 )
      {
LABEL_19:
        LODWORD(a6) = 4;
        RegRtlQueryValue(Handle, (__int64)&a6);
        goto LABEL_14;
      }
      if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, v18[0], (_DWORD)Handle, (unsigned int)&v16, (__int64)&v15, (__int64)&v14) < 0 )
LABEL_20:
        v11 = -1073741810;
    }
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  v9 = PiCMReturnBasicResultData((unsigned int)v11, (unsigned int)v19, a3, a4, v6);
LABEL_17:
  PiCMReleaseObjectInputData(&v17);
  return (unsigned int)v9;
}
