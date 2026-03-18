/*
 * XREFs of PiCMOpenClassKey @ 0x14081C354
 * Callers:
 *     PiCMHandleIoctl @ 0x14077BCA0 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _PnpCtxOpenContextBaseKey @ 0x1406997B8 (_PnpCtxOpenContextBaseKey.c)
 *     PiCMCaptureRegistryInputData @ 0x1406BAA98 (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1406BACAC (PiCMReleaseObjectInputData.c)
 *     PiCMReturnHandleResultData @ 0x1406BACDC (PiCMReturnHandleResultData.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406BAD74 (PiCMDuplicateRegistryHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     _CmCreateInterfaceClass @ 0x14076A9A0 (_CmCreateInterfaceClass.c)
 *     _CmOpenInterfaceClassRegKey @ 0x140787DE8 (_CmOpenInterfaceClassRegKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x140789460 (_CmOpenInstallerClassRegKey.c)
 *     PiAuDoesClientHaveAccess @ 0x14078A600 (PiAuDoesClientHaveAccess.c)
 *     RtlUpcaseUnicodeString @ 0x1407E5410 (RtlUpcaseUnicodeString.c)
 *     _CmCreateInstallerClass @ 0x140A22FC4 (_CmCreateInstallerClass.c)
 */

__int64 __fastcall PiCMOpenClassKey(_DWORD *a1, unsigned int a2, _DWORD *a3, unsigned int a4, int a5, _DWORD *Handle)
{
  _DWORD *v6; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // r8
  int v13; // edi
  int inited; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // zf
  ACCESS_MASK v18; // edi
  __int64 v19; // rdx
  bool v20; // sf
  int InterfaceClass; // eax
  HANDLE v23; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-11h] BYREF
  __int128 v25; // [rsp+60h] [rbp-1h] BYREF
  PCWSTR SourceString[2]; // [rsp+70h] [rbp+Fh]
  __int128 v27; // [rsp+80h] [rbp+1Fh]

  v6 = Handle;
  Handle = 0LL;
  v23 = 0LL;
  *v6 = 0;
  v25 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v27 = 0LL;
  DestinationString = 0LL;
  v11 = PiCMCaptureRegistryInputData(a1, a2, a5, (__int64)&v25);
  if ( v11 < 0 )
    goto LABEL_19;
  if ( DWORD1(v25) || DWORD1(v27) || !a3 || a4 < 0x10 || (v13 = DWORD2(v25), (unsigned int)(DWORD2(v25) - 2) > 1) )
  {
    inited = -1073741811;
    goto LABEL_15;
  }
  if ( !SourceString[0] )
  {
    v18 = HIDWORD(SourceString[1]);
    inited = PnpCtxOpenContextBaseKey(
               v10,
               8 - (unsigned int)(DWORD2(v25) != 3),
               v12,
               SHIDWORD(SourceString[1]),
               (__int64)&Handle);
    v20 = inited < 0;
LABEL_13:
    if ( !v20 )
      inited = PiCMDuplicateRegistryHandle(Handle, v19, v18, PreviousMode, &v23);
    goto LABEL_15;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, SourceString[0]);
  if ( inited >= 0 )
  {
    inited = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
    if ( inited >= 0 )
    {
      v17 = v13 == 3;
      v18 = HIDWORD(SourceString[1]);
      if ( v17 )
      {
        inited = CmOpenInterfaceClassRegKey(
                   PiPnpRtlCtx,
                   (int)SourceString[0],
                   v15,
                   v16,
                   SHIDWORD(SourceString[1]),
                   0,
                   (__int64)&Handle,
                   0LL);
        if ( inited != -1073741772 )
          goto LABEL_12;
        if ( (_DWORD)v27 == 1 )
        {
          if ( PiAuDoesClientHaveAccess(2u) )
          {
            InterfaceClass = CmCreateInterfaceClass(
                               *(__int64 *)&PiPnpRtlCtx,
                               (__int64)SourceString[0],
                               v18,
                               (HANDLE *)&Handle,
                               0LL,
                               0);
LABEL_25:
            inited = InterfaceClass;
            goto LABEL_12;
          }
          goto LABEL_24;
        }
      }
      else
      {
        inited = CmOpenInstallerClassRegKey(
                   *(__int64 *)&PiPnpRtlCtx,
                   (__int64)SourceString[0],
                   v15,
                   v16,
                   SHIDWORD(SourceString[1]),
                   0,
                   (__int64)&Handle,
                   0LL);
        if ( inited != -1073741772 )
        {
LABEL_12:
          v20 = inited < 0;
          goto LABEL_13;
        }
        if ( (_DWORD)v27 == 1 )
        {
          if ( PiAuDoesClientHaveAccess(2u) )
          {
            InterfaceClass = CmCreateInstallerClass(PiPnpRtlCtx, SourceString[0], v18, (unsigned int)&Handle, 0LL, 0);
            goto LABEL_25;
          }
LABEL_24:
          inited = -1073741790;
        }
      }
    }
  }
LABEL_15:
  v11 = PiCMReturnHandleResultData(inited, (__int64)v23, SDWORD2(v27), a3, a4, v6);
  if ( Handle )
    ZwClose(Handle);
  if ( v11 < 0 || inited < 0 )
  {
    if ( v23 )
      ObCloseHandle(v23, PreviousMode);
  }
LABEL_19:
  PiCMReleaseObjectInputData((__int64)&v25);
  return (unsigned int)v11;
}
