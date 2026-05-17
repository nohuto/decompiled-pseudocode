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

int __fastcall LdrpMapDllNtFileName(_DWORD *a1, UNICODE_STRING *a2)
{
  UNICODE_STRING *v3; // ebx
  int v4; // esi
  int v5; // ecx
  ULONG v6; // eax
  int v7; // ebx
  int v8; // eax
  NTSTATUS v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  int v13; // eax
  char *v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // eax
  int (__thiscall *v19)(_DWORD, HANDLE, UNICODE_STRING *); // ecx
  int v20; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-54h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+24h] [ebp-3Ch] BYREF
  _DWORD v23[2]; // [esp+2Ch] [ebp-34h] BYREF
  _DWORD v24[2]; // [esp+34h] [ebp-2Ch] BYREF
  _BYTE v25[4]; // [esp+3Ch] [ebp-24h] BYREF
  _BYTE v26[4]; // [esp+40h] [ebp-20h] BYREF
  int v27; // [esp+44h] [ebp-1Ch]
  UNICODE_STRING *v28; // [esp+48h] [ebp-18h]
  int i; // [esp+4Ch] [ebp-14h]
  HANDLE Handle; // [esp+50h] [ebp-10h] BYREF
  int v31; // [esp+54h] [ebp-Ch]
  HANDLE FileHandle; // [esp+58h] [ebp-8h] BYREF
  char v33; // [esp+5Fh] [ebp-1h] BYREF

  v3 = a2;
  LOBYTE(a2) = 0;
  v28 = v3;
  v4 = a1[8];
  v27 = a1[24];
  if ( !(unsigned __int8)LdrpCheckForRetryLoading(a1, a2) )
  {
    v5 = *(_DWORD *)(v4 + 24);
    v31 = v4 + 36;
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
      v24[0] = *(_DWORD *)&v28->Length;
      v24[1] = v28->Buffer;
      NtSystemDebugControl(38, v24, 8, 0, 0, 0);
    }
    for ( i = 0; ; i = 1 )
    {
      v9 = NtOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
      v11 = v9;
      if ( v9 >= 0 )
        goto LABEL_11;
      if ( v9 == -1073741772 || v9 == -1073741766 )
        break;
      if ( v9 != -1073741790 )
        goto LABEL_40;
      if ( i || !(unsigned __int8)LdrpCheckComponentOnDemandEtwEvent(a1) )
        return v11;
    }
    v11 = -1073741515;
LABEL_40:
    if ( v11 < 0 )
      return v11;
LABEL_11:
    if ( LdrpAuditIntegrityContinuity
      && (v11 = LdrpValidateIntegrityContinuity(v10), v11 < 0)
      && LdrpEnforceIntegrityContinuity
      || (a1[4] & 0x1000000) != 0
      && (NtCurrentPeb()->BitField & 0x10) == 0
      && (v11 = LdrpSetModuleSigningLevel(v26, 8, &v33), v11 < 0) )
    {
LABEL_21:
      NtClose(FileHandle);
      return v11;
    }
    v12 = NtCreateSection(&Handle, 13, 0, 0, 16, 0x1000000, FileHandle);
    v11 = v12;
    if ( v12 < 0 )
    {
      if ( v12 == -1073740674 || v12 == -1073740673 || v12 == -1073740702 )
      {
        v17 = LdrAppxHandleIntegrityFailure(v12);
        v16 = v31;
        v11 = v17;
      }
      else
      {
        v16 = v31;
        if ( v12 != -1073741801 && v12 != -1073741670 && v12 != -1073741523 )
        {
          v23[0] = v31;
          v23[1] = v12;
          if ( (int)ZwRaiseHardError(-1073741701, 2, 1, v23, 1, v25) >= 0 && LdrInitState != 3 )
            ++LdrpFatalHardErrorCount;
        }
      }
      LdrpLogError(0, v16);
      goto LABEL_21;
    }
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (int)NtCurrentPeb()->SharedData + 554;
    if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v18 = (int)NtCurrentPeb()->SharedData + 555;
      else
        v18 = 2147353477;
      if ( (*(_BYTE *)v18 & 0x20) != 0 )
        LdrpLogEtwEvent(-1, -1, 0, 0);
    }
    if ( (a1[4] & 0x100) == 0 )
    {
      if ( !LdrpAdvapi32DllHandle )
        goto LABEL_19;
      v19 = (int (__thiscall *)(_DWORD, HANDLE, UNICODE_STRING *))(MEMORY[0x7FFE0330] ^ __ROR4__(
                                                                                          LdrpSaferIsDllAllowedRoutine,
                                                                                          32
                                                                                        - (MEMORY[0x7FFE0330] & 0x1F)));
      v20 = v19(v19, FileHandle, v28);
      v11 = v20 != -1073741275 ? v20 : 0;
    }
    if ( v11 < 0 )
    {
LABEL_20:
      NtClose(Handle);
      goto LABEL_21;
    }
LABEL_19:
    v13 = LdrpMapDllWithSectionHandle((int)a1, (int)Handle);
    v11 = v13;
    if ( v27 && v13 >= 0 )
    {
      a1[25] = FileHandle;
      a1[3] = Handle;
      return v11;
    }
    goto LABEL_20;
  }
  return -1073741267;
}
