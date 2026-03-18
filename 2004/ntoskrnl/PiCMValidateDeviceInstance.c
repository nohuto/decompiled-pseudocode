/*
 * XREFs of PiCMValidateDeviceInstance @ 0x1406C1CD8
 * Callers:
 *     PiCMHandleIoctl @ 0x1405D81A0 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1405D7C84 (PiPnpRtlApplyMandatoryFilters.c)
 *     _PnpOpenObjectRegKey @ 0x1405DB1B4 (_PnpOpenObjectRegKey.c)
 *     _RegRtlQueryValue @ 0x1405E194C (_RegRtlQueryValue.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     _CmGetDeviceStatus @ 0x1406C1928 (_CmGetDeviceStatus.c)
 *     PiCMReleaseObjectInputData @ 0x1406C20C8 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406C2304 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1406C2524 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x1406F7F9C (PiAuDoesClientHaveAccess.c)
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
  unsigned int v13; // [rsp+38h] [rbp-49h]
  int v14; // [rsp+48h] [rbp-39h] BYREF
  int v15; // [rsp+4Ch] [rbp-35h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-31h] BYREF
  int v17; // [rsp+58h] [rbp-29h] BYREF
  int v18; // [rsp+5Ch] [rbp-25h] BYREF
  int v19; // [rsp+60h] [rbp-21h] BYREF
  __int128 v20; // [rsp+68h] [rbp-19h] BYREF
  int v21[4]; // [rsp+78h] [rbp-9h]
  __int64 v22; // [rsp+88h] [rbp+7h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp+Fh] BYREF

  v6 = a6;
  v14 = 0;
  v15 = 0;
  v19 = 0;
  *a6 = 0;
  v18 = 0;
  v17 = 0;
  Handle = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  *(_OWORD *)v21 = 0LL;
  LOBYTE(a6) = 1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, &v20);
  if ( v9 < 0 )
    goto LABEL_17;
  if ( !*(_QWORD *)v21
    || (v10 = DWORD1(v20), (unsigned int)(DWORD1(v20) - 1) > 1)
    || DWORD2(v20) != 1
    || v21[3]
    || !a3
    || a4 < 8 )
  {
    v11 = -1073741811;
    goto LABEL_14;
  }
  v11 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, *(__int64 *)v21, 1u, 1, 0, (__int64)&Handle);
  if ( v11 >= 0 )
  {
    if ( v10 == 2 && (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
    {
LABEL_19:
      LODWORD(a6) = 4;
      if ( (int)RegRtlQueryValue(Handle, L"Phantom", &v14, &v15, (unsigned int *)&a6) < 0
        || v14 != 4
        || (_DWORD)a6 != 4
        || !v15 )
      {
        goto LABEL_14;
      }
      goto LABEL_21;
    }
    SeCaptureSubjectContext(&SubjectContext);
    v11 = PiPnpRtlApplyMandatoryFilters(
            *(__int64 *)&PiPnpRtlCtx,
            *(__int64 *)v21,
            1,
            (__int64)Handle,
            &SubjectContext,
            &a6);
    SeReleaseSubjectContext(&SubjectContext);
    if ( v11 >= 0 )
    {
      if ( !(_BYTE)a6 )
        goto LABEL_21;
      if ( v10 == 2 )
        goto LABEL_19;
      if ( (int)CmGetDeviceStatus(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(const WCHAR **)v21,
                  (__int64)Handle,
                  &v19,
                  &v18,
                  &v17,
                  v13) < 0 )
LABEL_21:
        v11 = -1073741810;
    }
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  v9 = PiCMReturnBasicResultData((unsigned int)v11, (unsigned int)v22, a3, a4, v6);
LABEL_17:
  PiCMReleaseObjectInputData(&v20);
  return (unsigned int)v9;
}
