/*
 * XREFs of PiCMValidateDeviceInstance @ 0x14069FF40
 * Callers:
 *     PiCMHandleIoctl @ 0x140634850 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1406342F8 (PiPnpRtlApplyMandatoryFilters.c)
 *     _PnpOpenObjectRegKey @ 0x140637864 (_PnpOpenObjectRegKey.c)
 *     PiCMReleaseObjectInputData @ 0x140638B40 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140638B74 (PiCMCaptureObjectInputData.c)
 *     _RegRtlQueryValue @ 0x140642318 (_RegRtlQueryValue.c)
 *     SeCaptureSubjectContext @ 0x140655B30 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 *     PiCMReturnBasicResultData @ 0x1406A0160 (PiCMReturnBasicResultData.c)
 *     _CmGetDeviceStatus @ 0x1406A0340 (_CmGetDeviceStatus.c)
 *     PiAuDoesClientHaveAccess @ 0x1406A04D4 (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiCMValidateDeviceInstance(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  int v9; // ebx
  int v10; // edi
  int v11; // ebx
  int v13; // [rsp+48h] [rbp-39h] BYREF
  int v14; // [rsp+4Ch] [rbp-35h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-31h] BYREF
  int v16; // [rsp+58h] [rbp-29h] BYREF
  int v17; // [rsp+5Ch] [rbp-25h] BYREF
  int v18; // [rsp+60h] [rbp-21h] BYREF
  __int128 v19; // [rsp+68h] [rbp-19h] BYREF
  int v20[4]; // [rsp+78h] [rbp-9h]
  __int64 v21; // [rsp+88h] [rbp+7h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp+Fh] BYREF

  v6 = a6;
  v13 = 0;
  v14 = 0;
  v18 = 0;
  *a6 = 0;
  v17 = 0;
  v16 = 0;
  Handle = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  *(_OWORD *)v20 = 0LL;
  LOBYTE(a6) = 1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v19);
  if ( v9 < 0 )
    goto LABEL_17;
  if ( !*(_QWORD *)v20
    || (v10 = DWORD1(v19), (unsigned int)(DWORD1(v19) - 1) > 1)
    || DWORD2(v19) != 1
    || v20[3]
    || !a3
    || a4 < 8 )
  {
    v11 = -1073741811;
    goto LABEL_14;
  }
  v11 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, *(__int64 *)v20, 1u, 1, 0, (__int64)&Handle);
  if ( v11 >= 0 )
  {
    if ( v10 == 2 && (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
    {
LABEL_19:
      LODWORD(a6) = 4;
      if ( (int)RegRtlQueryValue(Handle, L"Phantom", &v13, &v14, (unsigned int *)&a6) < 0
        || v13 != 4
        || (_DWORD)a6 != 4
        || !v14 )
      {
        goto LABEL_14;
      }
      goto LABEL_21;
    }
    SeCaptureSubjectContext(&SubjectContext);
    v11 = PiPnpRtlApplyMandatoryFilters(
            *(__int64 *)&PiPnpRtlCtx,
            *(__int64 *)v20,
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
      if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, v20[0], (_DWORD)Handle, (unsigned int)&v18, (__int64)&v17, (__int64)&v16) < 0 )
LABEL_21:
        v11 = -1073741810;
    }
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  v9 = PiCMReturnBasicResultData((unsigned int)v11, (unsigned int)v21, a3, a4, v6);
LABEL_17:
  PiCMReleaseObjectInputData((__int64)&v19);
  return (unsigned int)v9;
}
