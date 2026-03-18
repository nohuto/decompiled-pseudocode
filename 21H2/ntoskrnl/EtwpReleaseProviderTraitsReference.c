/*
 * XREFs of EtwpReleaseProviderTraitsReference @ 0x1407973D0
 * Callers:
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     EtwpDeleteRegistrationObject @ 0x140796530 (EtwpDeleteRegistrationObject.c)
 *     EtwpSetProviderTraitsCommon @ 0x14079781C (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpReleaseProviderTraitsReference(__int64 a1)
{
  _DWORD *v1; // rbx
  char v3; // si
  struct _FAST_MUTEX *v4; // rdi
  __int128 *v6; // rcx

  v1 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  if ( v1 )
  {
    v3 = *(_BYTE *)(a1 + 98) & 1;
    v4 = &EtwpProviderTraitsKmMutex;
    if ( !v3 )
      v4 = &EtwpProviderTraitsUmMutex;
    ExAcquireFastMutex(v4);
    if ( v1[6]-- == 1 )
    {
      v6 = &EtwpProviderTraitsKmTree;
      if ( !v3 )
        v6 = &EtwpProviderTraitsUmTree;
      RtlRbRemoveNode((unsigned __int64 *)v6, (unsigned __int64)v1);
    }
    else
    {
      v1 = 0LL;
    }
    KeReleaseGuardedMutex(v4);
    if ( v1 )
      ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
