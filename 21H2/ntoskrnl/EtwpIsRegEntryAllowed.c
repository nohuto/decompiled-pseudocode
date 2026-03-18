/*
 * XREFs of EtwpIsRegEntryAllowed @ 0x140790B38
 * Callers:
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 * Callees:
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     EtwpCheckProviderLoggingAccess @ 0x140790C44 (EtwpCheckProviderLoggingAccess.c)
 *     EtwpIsGuidAllowed @ 0x140797B54 (EtwpIsGuidAllowed.c)
 *     EtwpApplyTransientFilters @ 0x14080855C (EtwpApplyTransientFilters.c)
 *     EtwpEventWriteProviderAccessCheckStatus @ 0x1409E0584 (EtwpEventWriteProviderAccessCheckStatus.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1409EB814 (EtwpCheckCurrentUserProcessAccess.c)
 */

char __fastcall EtwpIsRegEntryAllowed(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, char a7)
{
  int v8; // esi
  __int64 v9; // rdi
  int v12; // edi
  int v14; // edx
  int v15; // ecx
  int v16; // r8d

  v8 = *(_DWORD *)(a4 + 72);
  v9 = a3;
  if ( (*(_BYTE *)(a1 + 98) & 1) != 0 && (*(_BYTE *)(a3 + 17) || *(_BYTE *)(a3 + 18))
    || (v8 == 2 || *(_BYTE *)(a3 + 18)) && !(unsigned __int8)EtwpApplyTransientFilters(a1, a4, *(_QWORD *)(a5 + 80), a5)
    || (*(_BYTE *)(a1 + 98) & 8) != 0
    && (a7 == 2 || a6 || !v8 && *(_WORD *)(a4 + 104) != *(_WORD *)(*(_QWORD *)(a1 + 32) + 88LL)) )
  {
    return 0;
  }
  if ( *(_BYTE *)(v9 + 18) )
  {
    if ( !(unsigned int)EtwpCheckCurrentUserProcessAccess(*(_QWORD *)(a1 + 80)) )
      return 1;
  }
  else if ( a7 != 2 || (unsigned __int8)EtwpIsGuidAllowed(a2, *(_QWORD *)(a1 + 32) + 40LL) )
  {
    LOBYTE(a3) = *(_BYTE *)(v9 + 16);
    v12 = EtwpCheckProviderLoggingAccess(a1, v9, a3);
    if ( !v12 )
      return 1;
    if ( v12 < 0 )
    {
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_ACCESS_DENIED) )
        EtwpEventWriteProviderAccessCheckStatus(v15, v14, v16, a1, a2, v12);
    }
  }
  return 0;
}
