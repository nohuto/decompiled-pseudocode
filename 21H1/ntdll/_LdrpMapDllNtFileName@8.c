/*
 * XREFs of _LdrpMapDllNtFileName@8 @ 0x4B2DE4D7
 * Callers:
 *     _LdrpMapDllRetry@4 @ 0x4B2DDF9E (_LdrpMapDllRetry@4.c)
 *     _LdrpMapDllFullPath@4 @ 0x4B2DE04A (_LdrpMapDllFullPath@4.c)
 *     _LdrpMapDllSearchPath@4 @ 0x4B2DE148 (_LdrpMapDllSearchPath@4.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _LdrpMapDllWithSectionHandle@8 @ 0x4B2D1302 (_LdrpMapDllWithSectionHandle@8.c)
 *     _LdrpCheckForRetryLoading@8 @ 0x4B2DE632 (_LdrpCheckForRetryLoading@8.c)
 *     _LdrpLogError@16 @ 0x4B2EC95F (_LdrpLogError@16.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtOpenFile@24 @ 0x4B2F2CB0 (_NtOpenFile@24.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _ZwRaiseHardError@24 @ 0x4B2F3FF0 (_ZwRaiseHardError@24.c)
 *     _NtSystemDebugControl@24 @ 0x4B2F4550 (_NtSystemDebugControl@24.c)
 *     _LdrAppxHandleIntegrityFailure@4 @ 0x4B32C290 (_LdrAppxHandleIntegrityFailure@4.c)
 *     _LdrpCheckComponentOnDemandEtwEvent@4 @ 0x4B32FAB2 (_LdrpCheckComponentOnDemandEtwEvent@4.c)
 *     _LdrpLogEtwEvent@24 @ 0x4B330117 (_LdrpLogEtwEvent@24.c)
 *     _LdrpSetModuleSigningLevel@20 @ 0x4B333D52 (_LdrpSetModuleSigningLevel@20.c)
 *     _LdrpValidateIntegrityContinuity@12 @ 0x4B333DBC (_LdrpValidateIntegrityContinuity@12.c)
 */

int __fastcall LdrpMapDllNtFileName(_DWORD *a1, _UNICODE_STRING *a2)
{
  _UNICODE_STRING *v3; // ebx
  int v4; // esi
  int v5; // ecx
  ULONG v6; // eax
  int v7; // ebx
  int v8; // eax
  NTSTATUS v9; // eax
  int v10; // ecx
  signed __int64 v11; // rdi
  NTSTATUS v12; // eax
  int v13; // eax
  char *v15; // eax
  unsigned int v16; // eax
  int v17; // eax
  int (__thiscall *v18)(_DWORD, HANDLE, _UNICODE_STRING *); // ecx
  int v19; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-54h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+24h] [ebp-3Ch] BYREF
  unsigned __int64 Parameters; // [esp+2Ch] [ebp-34h] BYREF
  _DWORD InputBuffer[2]; // [esp+34h] [ebp-2Ch] BYREF
  ULONG Response; // [esp+3Ch] [ebp-24h] BYREF
  ULONG Flags; // [esp+40h] [ebp-20h] BYREF
  int v26; // [esp+44h] [ebp-1Ch]
  _UNICODE_STRING *v27; // [esp+48h] [ebp-18h]
  int i; // [esp+4Ch] [ebp-14h]
  HANDLE SectionHandle; // [esp+50h] [ebp-10h] BYREF
  unsigned int v30; // [esp+54h] [ebp-Ch]
  HANDLE FileHandle; // [esp+58h] [ebp-8h] BYREF
  int var1; // [esp+5Fh] [ebp-1h] BYREF

  v3 = a2;
  LOBYTE(a2) = 0;
  v27 = v3;
  v4 = a1[8];
  v26 = a1[24];
  if ( !(unsigned __int8)LdrpCheckForRetryLoading(a1, a2) )
  {
    v5 = *(_DWORD *)(v4 + 24);
    v30 = v4 + 36;
    LdrpLogDllState(v5, v4 + 36, 5285);
    ObjectAttributes.Length = 24;
    ObjectAttributes.RootDirectory = 0;
    v6 = 64;
    if ( !LdrpUseImpersonatedDeviceMap )
      v6 = 2112;
    ObjectAttributes.Attributes = v6;
    ObjectAttributes.ObjectName = v3;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    v7 = 2147353476;
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v8 = 2147353476;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v15 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v15 & 0x20) != 0 )
        LdrpLogEtwEvent(-1, -1, 0, 0);
    }
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
    {
      InputBuffer[0] = *(_DWORD *)&v27->Length;
      InputBuffer[1] = v27->Buffer;
      NtSystemDebugControl(SysDbgKdPullRemoteFile, InputBuffer, 8u, 0, 0, 0);
    }
    for ( i = 0; ; i = 1 )
    {
      v9 = NtOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
      HIDWORD(v11) = v9;
      if ( v9 >= 0 )
        goto LABEL_11;
      if ( v9 == -1073741772 || v9 == -1073741766 )
        break;
      if ( v9 != -1073741790 )
        goto LABEL_40;
      if ( i || !(unsigned __int8)LdrpCheckComponentOnDemandEtwEvent(a1) )
        return HIDWORD(v11);
    }
    HIDWORD(v11) = -1073741515;
LABEL_40:
    if ( v11 < 0 )
      return HIDWORD(v11);
LABEL_11:
    if ( LdrpAuditIntegrityContinuity
      && (HIDWORD(v11) = LdrpValidateIntegrityContinuity(a1, FileHandle, v10), v11 < 0)
      && LdrpEnforceIntegrityContinuity
      || (a1[4] & 0x1000000) != 0
      && (NtCurrentPeb()->BitField & 0x10) == 0
      && (HIDWORD(v11) = LdrpSetModuleSigningLevel(FileHandle, &Flags, 8u, (int)&var1), v11 < 0) )
    {
LABEL_21:
      NtClose(FileHandle);
      return HIDWORD(v11);
    }
    v12 = NtCreateSection(&SectionHandle, 0xDu, 0, 0, 0x10u, 0x1000000u, FileHandle);
    HIDWORD(v11) = v12;
    if ( v12 < 0 )
    {
      if ( v12 == -1073740674 || v12 == -1073740673 || v12 == -1073740702 )
      {
        v16 = LdrAppxHandleIntegrityFailure(v12);
        v11 = __PAIR64__(v16, v30);
      }
      else
      {
        LODWORD(v11) = v30;
        if ( v12 != -1073741801 && v12 != -1073741670 && v12 != -1073741523 )
        {
          Parameters = v11;
          if ( ZwRaiseHardError(-1073741701, 2u, 1u, &Parameters, 1u, &Response) >= 0 && LdrInitState != 3 )
            ++LdrpFatalHardErrorCount;
        }
      }
      LdrpLogError(0, v11);
      goto LABEL_21;
    }
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (int)NtCurrentPeb()->SharedData + 554;
    if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v17 = (int)NtCurrentPeb()->SharedData + 555;
      else
        v17 = 2147353477;
      if ( (*(_BYTE *)v17 & 0x20) != 0 )
        LdrpLogEtwEvent(-1, -1, 0, 0);
    }
    if ( (a1[4] & 0x100) == 0 )
    {
      if ( !LdrpAdvapi32DllHandle )
        goto LABEL_19;
      v18 = (int (__thiscall *)(_DWORD, HANDLE, _UNICODE_STRING *))(MEMORY[0x7FFE0330] ^ __ROR4__(
                                                                                           LdrpSaferIsDllAllowedRoutine,
                                                                                           32
                                                                                         - (MEMORY[0x7FFE0330] & 0x1F)));
      v19 = v18(v18, FileHandle, v27);
      HIDWORD(v11) = v19 != -1073741275 ? v19 : 0;
    }
    if ( v11 < 0 )
    {
LABEL_20:
      NtClose(SectionHandle);
      goto LABEL_21;
    }
LABEL_19:
    v13 = LdrpMapDllWithSectionHandle((int)a1, SectionHandle);
    HIDWORD(v11) = v13;
    if ( v26 && v13 >= 0 )
    {
      a1[25] = FileHandle;
      a1[3] = SectionHandle;
      return HIDWORD(v11);
    }
    goto LABEL_20;
  }
  return -1073741267;
}
