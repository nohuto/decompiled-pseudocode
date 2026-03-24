/*
 * XREFs of EtwpIsRegEntryAllowed @ 0x1406E3F1C
 * Callers:
 *     EtwpEnableGuid @ 0x1406E2404 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpIsGuidAllowed @ 0x140644770 (EtwpIsGuidAllowed.c)
 *     EtwpApplyTransientFilters @ 0x1406C3300 (EtwpApplyTransientFilters.c)
 *     EtwpCheckProviderLoggingAccess @ 0x1406E3FF0 (EtwpCheckProviderLoggingAccess.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1409414D8 (EtwpCheckCurrentUserProcessAccess.c)
 */

bool __fastcall EtwpIsRegEntryAllowed(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, char a6, char a7)
{
  int v8; // esi
  __int64 v9; // rbx
  int v12; // eax

  v8 = *(_DWORD *)(a4 + 72);
  v9 = a3;
  if ( (*(_BYTE *)(a1 + 98) & 1) != 0 && (*(_BYTE *)(a3 + 17) || *(_BYTE *)(a3 + 18))
    || (v8 == 2 || *(_BYTE *)(a3 + 18)) && !EtwpApplyTransientFilters(a1, a4, a5[10], a5)
    || (*(_BYTE *)(a1 + 98) & 8) != 0
    && (a7 == 2 || a6 || !v8 && *(_WORD *)(a4 + 104) != *(_WORD *)(*(_QWORD *)(a1 + 32) + 88LL)) )
  {
    return 0;
  }
  if ( *(_BYTE *)(v9 + 18) == 1 )
  {
    v12 = EtwpCheckCurrentUserProcessAccess(*(_QWORD *)(a1 + 80));
  }
  else
  {
    if ( a7 == 2 && !EtwpIsGuidAllowed(a2, (const void *)(*(_QWORD *)(a1 + 32) + 40LL)) )
      return 0;
    LOBYTE(a3) = *(_BYTE *)(v9 + 16);
    v12 = EtwpCheckProviderLoggingAccess(a1, v9, a3);
  }
  return !v12;
}
