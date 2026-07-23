/*
 * XREFs of EmonReleaseProfileResourcesInternal @ 0x1404D4420
 * Callers:
 *     EmonAllocateResources @ 0x1404D33F8 (EmonAllocateResources.c)
 *     EmonReleaseProfileResources @ 0x1404D4340 (EmonReleaseProfileResources.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     EmonReleaseReservedCounters @ 0x1404D44D8 (EmonReleaseReservedCounters.c)
 */

__int64 __fastcall EmonReleaseProfileResourcesInternal(__int64 a1)
{
  ULONG v2; // edi
  ULONG ActiveProcessorCount; // r14d
  __int64 v4; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax

  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v4 = 0LL;
    v5 = (_QWORD *)(a1 + 32);
    do
    {
      if ( *v5 )
        EmonReleaseReservedCounters(v2);
      if ( *(_QWORD *)(a1 + 24) )
      {
        v6 = EmonDsManagementAreas;
        if ( EmonPebs64Bit )
        {
          v7 = *(_QWORD *)(v4 + EmonDsManagementAreas + 32);
          *(_QWORD *)(v4 + EmonDsManagementAreas + 40) = v7;
          *(_QWORD *)(v4 + v6 + 56) = v7;
        }
        else
        {
          v8 = *(_DWORD *)(v4 + EmonDsManagementAreas + 16);
          *(_DWORD *)(v4 + EmonDsManagementAreas + 20) = v8;
          *(_DWORD *)(v4 + v6 + 28) = v8;
        }
        EmonPebsInUse = 0;
      }
      ++v2;
      ++v5;
      v4 += 160LL;
    }
    while ( v2 < ActiveProcessorCount );
  }
  return 0LL;
}
