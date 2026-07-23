/*
 * XREFs of RtlDeleteResource @ 0x180010F30
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180010FC0 (RtlDeleteCriticalSection.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A09E0 (RtlpInterlockedPushEntrySList.c)
 */

void __cdecl RtlDeleteResource(PRTL_RESOURCE Resource)
{
  __int64 v2; // r8
  __int64 v3; // r9
  PRTL_RESOURCE_DEBUG DebugInfo; // rdx

  RtlDeleteCriticalSection(&Resource->CriticalSection);
  NtClose(Resource->SharedSemaphore);
  NtClose(Resource->ExclusiveSemaphore);
  DebugInfo = Resource->DebugInfo;
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) >= 0xAu
    && (&RtlpStaticDebugInfo > (_UNKNOWN *)DebugInfo || DebugInfo >= (PRTL_RESOURCE_DEBUG)&RtlpForceCSDebugInfoCreation) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Resource->DebugInfo);
  }
  else
  {
    RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, DebugInfo, v2, v3);
  }
  memset(Resource, 0, sizeof(_RTL_RESOURCE));
}
