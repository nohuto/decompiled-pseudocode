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

int __stdcall RtlReleasePrivilege(int a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(a1 + 16);
  if ( (v1 & 3) != 1 )
  {
    ZwAdjustPrivilegesToken(*(_DWORD *)a1, 0, *(_DWORD *)(a1 + 8), 0, 0, 0);
    v1 = *(_DWORD *)(a1 + 16);
  }
  if ( (v1 & 1) != 0 )
  {
    ZwSetInformationThread(-2, 5, a1 + 4, 4);
    if ( *(_DWORD *)(a1 + 4) )
      NtClose(*(HANDLE *)(a1 + 4));
  }
  if ( *(_DWORD *)(a1 + 8) != a1 + 20 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(a1 + 8));
  NtClose(*(HANDLE *)a1);
  return RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, a1);
}
