/*
 * XREFs of EtwpIsRegEntryAllowed @ 0x1406BB1FC
 * Callers:
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpIsGuidAllowed @ 0x140639580 (EtwpIsGuidAllowed.c)
 *     EtwpCheckProviderLoggingAccess @ 0x1406BB2D0 (EtwpCheckProviderLoggingAccess.c)
 *     EtwpApplyTransientFilters @ 0x1406BCE64 (EtwpApplyTransientFilters.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1409416A8 (EtwpCheckCurrentUserProcessAccess.c)
 */

bool __fastcall EtwpIsRegEntryAllowed(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, char a7)
{
  int v8; // esi
  __int64 v9; // rbx
  int v12; // eax

  v8 = *(_DWORD *)(a4 + 72);
  v9 = a3;
  if ( (*(_BYTE *)(a1 + 98) & 1) != 0 && (*(_BYTE *)(a3 + 17) || *(_BYTE *)(a3 + 18))
    || (v8 == 2 || *(_BYTE *)(a3 + 18)) && !(unsigned __int8)EtwpApplyTransientFilters(a1, a4, *(_QWORD *)(a5 + 80), a5)
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
