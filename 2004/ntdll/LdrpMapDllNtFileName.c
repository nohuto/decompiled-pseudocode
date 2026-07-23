/*
 * XREFs of LdrpMapDllNtFileName @ 0x18005FAD4
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18005F500 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x18005F8C0 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x180060478 (LdrpMapDllRetry.c)
 * Callees:
 *     LdrpMapDllWithSectionHandle @ 0x180014A90 (LdrpMapDllWithSectionHandle.c)
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     LdrpCheckForRetryLoading @ 0x18005FCD8 (LdrpCheckForRetryLoading.c)
 *     LdrpLogError @ 0x1800600D8 (LdrpLogError.c)
 *     LdrpValidateIntegrityContinuity @ 0x180060568 (LdrpValidateIntegrityContinuity.c)
 *     LdrpSetModuleSigningLevel @ 0x180089458 (LdrpSetModuleSigningLevel.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtOpenFile @ 0x18009D470 (NtOpenFile.c)
 *     NtCreateSection @ 0x18009D750 (NtCreateSection.c)
 *     NtRaiseHardError @ 0x18009FAE0 (NtRaiseHardError.c)
 *     ZwSystemDebugControl @ 0x1800A05A0 (ZwSystemDebugControl.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB4F0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CEB30 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpLogEtwEvent @ 0x1800CF0E0 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpMapDllNtFileName(__int64 a1, _UNICODE_STRING *a2)
{
  __int64 v3; // rbx
  int v5; // esi
  unsigned __int64 v6; // r12
  ULONG v7; // eax
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r14
  NTSTATUS v11; // eax
  __int64 v12; // r9
  int v13; // ebx
  ULONG v14; // esi
  NTSTATUS v15; // eax
  int v17; // r8d
  int v18; // r9d
  char *v19; // rcx
  int v20; // r8d
  int v21; // r9d
  HANDLE FileHandle; // [rsp+40h] [rbp-59h] BYREF
  HANDLE SectionHandle; // [rsp+48h] [rbp-51h] BYREF
  __int64 v24; // [rsp+50h] [rbp-49h]
  unsigned __int64 Parameters[2]; // [rsp+58h] [rbp-41h] BYREF
  _UNICODE_STRING InputBuffer; // [rsp+68h] [rbp-31h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-21h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp+Fh] BYREF
  char v29; // [rsp+100h] [rbp+67h] BYREF
  char v30; // [rsp+110h] [rbp+77h] BYREF
  ULONG Response; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v24 = *(_QWORD *)(a1 + 168);
  v5 = 0;
  if ( !(unsigned __int8)LdrpCheckForRetryLoading(a1, 0LL) )
  {
    v6 = v3 + 72;
    LdrpLogDllState(*(_QWORD *)(v3 + 48), v3 + 72, 0x14A5u);
    v7 = 64;
    ObjectAttributes.Length = 48;
    if ( !LdrpUseImpersonatedDeviceMap )
      v7 = 2112;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = v7;
    ObjectAttributes.ObjectName = a2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v8 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v9 = 2147353476LL;
    v10 = 2147353477LL;
    if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v19 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v19 & 0x20) != 0 )
      {
        LOBYTE(v18) = -1;
        LOBYTE(v17) = -1;
        LdrpLogEtwEvent(5253, -1, v17, v18, 0LL, 0LL);
      }
    }
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
    {
      InputBuffer = *a2;
      ZwSystemDebugControl(SysDbgKdPullRemoteFile, &InputBuffer, 0x10u, 0LL, 0, 0LL);
    }
    while ( 1 )
    {
      v11 = NtOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
      v13 = v11;
      if ( v11 >= 0 )
        break;
      if ( v11 == -1073741772 || v11 == -1073741766 )
      {
        v13 = -1073741515;
        break;
      }
      if ( v11 != -1073741790 )
        break;
      if ( v5 || !(unsigned __int8)LdrpCheckComponentOnDemandEtwEvent(a1) )
        return (unsigned int)v13;
      v5 = 1;
    }
    if ( v13 < 0 )
      return (unsigned int)v13;
    if ( LdrpAuditIntegrityContinuity )
    {
      v13 = LdrpValidateIntegrityContinuity(a1, FileHandle);
      if ( v13 < 0 )
      {
        if ( LdrpEnforceIntegrityContinuity )
          goto LABEL_23;
      }
    }
    v14 = 0x1000000;
    if ( (*(_DWORD *)(a1 + 32) & 0x1000000) != 0 && (NtCurrentPeb()->BitField & 0x10) == 0 )
    {
      LOBYTE(v12) = 8;
      v13 = LdrpSetModuleSigningLevel(FileHandle, *(_QWORD *)(a1 + 56), &v30, v12, &v29);
      if ( v13 < 0 )
        goto LABEL_23;
    }
    if ( UseWOW64 && (*(_DWORD *)(a1 + 32) & 0x800) == 0 )
      v14 = 17825792;
    v15 = NtCreateSection(&SectionHandle, 0xDu, 0LL, 0LL, 0x10u, v14, FileHandle);
    v13 = v15;
    if ( v15 < 0 )
    {
      if ( v15 == -1073740702 || (unsigned int)(v15 + 1073740674) <= 1 )
      {
        v13 = LdrAppxHandleIntegrityFailure((unsigned int)v15);
      }
      else if ( v15 != -1073741801 && v15 != -1073741670 && v15 != -1073741523 )
      {
        Parameters[0] = v6;
        Parameters[1] = v15;
        if ( NtRaiseHardError(-1073741701, 2u, 1u, Parameters, 1u, &Response) >= 0 && LdrInitState != 3 )
          ++LdrpFatalHardErrorCount;
      }
      LdrpLogError((unsigned int)v13, 5253LL, 0LL, v6);
      goto LABEL_23;
    }
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 554;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v10 = (__int64)NtCurrentPeb()->SharedData + 555;
      if ( (*(_BYTE *)v10 & 0x20) != 0 )
      {
        LOBYTE(v21) = -1;
        LOBYTE(v20) = -1;
        LdrpLogEtwEvent(5254, -1, v20, v21, 0LL, 0LL);
      }
    }
    if ( !UseWOW64 && (*(_DWORD *)(a1 + 32) & 0x100) == 0 )
    {
      if ( !LdrpAdvapi32DllHandle )
        goto LABEL_21;
      v13 = ((__int64 (__fastcall *)(HANDLE, _UNICODE_STRING *))(__ROR8__(
                                                                   LdrpSaferIsDllAllowedRoutine,
                                                                   64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
              FileHandle,
              a2);
      if ( v13 == -1073741275 )
        v13 = 0;
    }
    if ( v13 < 0 )
    {
LABEL_22:
      NtClose(SectionHandle);
LABEL_23:
      NtClose(FileHandle);
      return (unsigned int)v13;
    }
LABEL_21:
    v13 = LdrpMapDllWithSectionHandle(a1);
    if ( v24 && v13 >= 0 )
    {
      *(_QWORD *)(a1 + 176) = FileHandle;
      *(_QWORD *)(a1 + 24) = SectionHandle;
      return (unsigned int)v13;
    }
    goto LABEL_22;
  }
  return 3221226029LL;
}
