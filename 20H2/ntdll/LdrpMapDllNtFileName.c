/*
 * XREFs of LdrpMapDllNtFileName @ 0x18005FBE4
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18005F610 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x18005F9D0 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x180060588 (LdrpMapDllRetry.c)
 * Callees:
 *     LdrpMapDllWithSectionHandle @ 0x180014A90 (LdrpMapDllWithSectionHandle.c)
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     LdrpCheckForRetryLoading @ 0x18005FDE8 (LdrpCheckForRetryLoading.c)
 *     LdrpLogError @ 0x1800601E8 (LdrpLogError.c)
 *     LdrpValidateIntegrityContinuity @ 0x180060678 (LdrpValidateIntegrityContinuity.c)
 *     LdrpSetModuleSigningLevel @ 0x180089558 (LdrpSetModuleSigningLevel.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtOpenFile @ 0x18009D710 (NtOpenFile.c)
 *     NtCreateSection @ 0x18009D9F0 (NtCreateSection.c)
 *     NtRaiseHardError @ 0x18009FD80 (NtRaiseHardError.c)
 *     ZwSystemDebugControl @ 0x1800A0840 (ZwSystemDebugControl.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB6D0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CED10 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpLogEtwEvent @ 0x1800CF2C0 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpMapDllNtFileName(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v3; // rbx
  int v5; // esi
  __int64 v6; // r12
  ULONG v7; // eax
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r14
  NTSTATUS v11; // eax
  int v12; // r9d
  int v13; // ebx
  int v14; // esi
  int v15; // eax
  int v17; // r8d
  int v18; // r9d
  char *v19; // rcx
  int v20; // r8d
  int v21; // r9d
  HANDLE FileHandle; // [rsp+40h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-51h] BYREF
  __int64 v24; // [rsp+50h] [rbp-49h]
  _QWORD v25[2]; // [rsp+58h] [rbp-41h] BYREF
  UNICODE_STRING v26; // [rsp+68h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp+Fh] BYREF
  char v29; // [rsp+100h] [rbp+67h] BYREF
  char v30; // [rsp+110h] [rbp+77h] BYREF
  char v31; // [rsp+118h] [rbp+7Fh] BYREF

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
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v9 = 2147353476LL;
    v10 = 2147353477LL;
    if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v19 = (unsigned int)RtlGetCurrentServiceSessionId()
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v19 & 0x20) != 0 )
      {
        LOBYTE(v18) = -1;
        LOBYTE(v17) = -1;
        LdrpLogEtwEvent(5253, -1, v17, v18, 0LL, 0LL);
      }
    }
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
    {
      v26 = *a2;
      ZwSystemDebugControl(38LL, &v26, 16LL);
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
      v13 = LdrpSetModuleSigningLevel((_DWORD)FileHandle, *(_QWORD *)(a1 + 56), (unsigned int)&v30, v12, (__int64)&v29);
      if ( v13 < 0 )
        goto LABEL_23;
    }
    if ( UseWOW64 && (*(_DWORD *)(a1 + 32) & 0x800) == 0 )
      v14 = 17825792;
    v15 = NtCreateSection(&Handle, 13LL, 0LL, 0LL, 16, v14, FileHandle);
    v13 = v15;
    if ( v15 < 0 )
    {
      if ( v15 == -1073740702 || (unsigned int)(v15 + 1073740674) <= 1 )
      {
        v13 = LdrAppxHandleIntegrityFailure((unsigned int)v15);
      }
      else if ( v15 != -1073741801 && v15 != -1073741670 && v15 != -1073741523 )
      {
        v25[0] = v6;
        v25[1] = v15;
        if ( (int)NtRaiseHardError(3221225595LL, 2LL, 1LL, v25, 1, &v31) >= 0 && LdrInitState != 3 )
          ++LdrpFatalHardErrorCount;
      }
      LdrpLogError((unsigned int)v13, 5253LL, 0LL, v6);
      goto LABEL_23;
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 554;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
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
      v13 = ((__int64 (__fastcall *)(HANDLE, UNICODE_STRING *))(__ROR8__(
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
      NtClose(Handle);
LABEL_23:
      NtClose(FileHandle);
      return (unsigned int)v13;
    }
LABEL_21:
    v13 = LdrpMapDllWithSectionHandle(a1);
    if ( v24 && v13 >= 0 )
    {
      *(_QWORD *)(a1 + 176) = FileHandle;
      *(_QWORD *)(a1 + 24) = Handle;
      return (unsigned int)v13;
    }
    goto LABEL_22;
  }
  return 3221226029LL;
}
