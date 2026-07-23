/*
 * XREFs of _RtlReleasePrivilege@4 @ 0x4B346D00
 * Callers:
 *     _LdrpMinimalMapModule@8 @ 0x4B2D110F (_LdrpMinimalMapModule@8.c)
 *     _GetProcessIptTrace@12 @ 0x4B3898E3 (_GetProcessIptTrace@12.c)
 *     _GetProcessIptTraceSize@8 @ 0x4B3899B0 (_GetProcessIptTraceSize@8.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwAdjustPrivilegesToken@24 @ 0x4B2F2D90 (_ZwAdjustPrivilegesToken@24.c)
 */

void __cdecl RtlReleasePrivilege(PVOID StatePointer)
{
  int v1; // ecx

  v1 = *((_DWORD *)StatePointer + 4);
  if ( (v1 & 3) != 1 )
  {
    ZwAdjustPrivilegesToken(*(HANDLE *)StatePointer, 0, *((PTOKEN_PRIVILEGES *)StatePointer + 2), 0, 0, 0);
    v1 = *((_DWORD *)StatePointer + 4);
  }
  if ( (v1 & 1) != 0 )
  {
    ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadImpersonationToken, (char *)StatePointer + 4, 4u);
    if ( *((_DWORD *)StatePointer + 1) )
      NtClose(*((HANDLE *)StatePointer + 1));
  }
  if ( *((PVOID *)StatePointer + 2) != (char *)StatePointer + 20 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)StatePointer + 2));
  NtClose(*(HANDLE *)StatePointer);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, StatePointer);
}
