/*
 * XREFs of NdisMConfigMSIXTableEntry @ 0x1C003BC20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLLL @ 0x1C00198EC (WPP_RECORDER_SF_qLLL.c)
 *     WPP_RECORDER_SF_qLLLL @ 0x1C003BEBC (WPP_RECORDER_SF_qLLLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 */

NDIS_STATUS __stdcall NdisMConfigMSIXTableEntry(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MSIX_CONFIG_PARAMETERS MSIXConfigParameters)
{
  int v2; // r8d
  int v3; // r9d
  NDIS_STATUS v6; // edi
  _NDIS_MSIX_TABLE_CONFIG ConfigOperation; // ecx
  __int64 (__fastcall *v8)(_QWORD, _QWORD, _QWORD); // rax
  NDIS_STATUS v9; // eax
  __int32 v11; // ecx
  __int64 (__fastcall *v12)(_QWORD, _QWORD); // rax
  int v13; // [rsp+20h] [rbp-38h]

  v6 = -1073741637;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MSIXConfigParameters,
      7u,
      0x15u,
      (struct _GUID *)&WPP_eeb71838b50e3a51e19c5b48ce25db7d_Traceguids,
      (char)NdisMiniportHandle,
      MSIXConfigParameters->ConfigOperation,
      MSIXConfigParameters->TableEntry);
  if ( !MSIXConfigParameters->Header.Revision || MSIXConfigParameters->Header.Size < 0x10u )
    goto LABEL_18;
  ConfigOperation = MSIXConfigParameters->ConfigOperation;
  if ( ConfigOperation == NdisMSIXTableConfigSetTableEntry )
  {
    v8 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))*((_QWORD *)NdisMiniportHandle + 535);
    if ( !v8 )
      goto LABEL_9;
    v9 = v8(
           *((_QWORD *)NdisMiniportHandle + 534),
           MSIXConfigParameters->TableEntry,
           MSIXConfigParameters->MessageNumber);
    goto LABEL_8;
  }
  v11 = ConfigOperation - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      v12 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)NdisMiniportHandle + 537);
      goto LABEL_16;
    }
LABEL_18:
    v6 = -1073741811;
    goto LABEL_9;
  }
  v12 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)NdisMiniportHandle + 536);
LABEL_16:
  if ( v12 )
  {
    v9 = v12(*((_QWORD *)NdisMiniportHandle + 534), MSIXConfigParameters->TableEntry);
LABEL_8:
    v6 = v9;
  }
LABEL_9:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (_DWORD)MSIXConfigParameters,
      v2,
      v3,
      v13,
      (char)NdisMiniportHandle,
      MSIXConfigParameters->ConfigOperation,
      MSIXConfigParameters->TableEntry,
      MSIXConfigParameters->MessageNumber,
      v6);
  return v6;
}
