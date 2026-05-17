/*
 * XREFs of _RtlReleaseActivationContext@4 @ 0x4B2B2660
 * Callers:
 *     _RtlDispatchAPC@12 @ 0x4B2ABFD0 (_RtlDispatchAPC@12.c)
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _TppCleanupGroupMemberInitialize@20 @ 0x4B2B4A71 (_TppCleanupGroupMemberInitialize@20.c)
 *     _LdrRemoveLoadAsDataTable@16 @ 0x4B2B8980 (_LdrRemoveLoadAsDataTable@16.c)
 *     sxsisol_SearchActCtxForDllName @ 0x4B2C9D90 (sxsisol_SearchActCtxForDllName.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _RtlFreeActivationContextStack@4 @ 0x4B2E49C0 (_RtlFreeActivationContextStack@4.c)
 *     _RtlDeactivateActivationContext@8 @ 0x4B2E4A70 (_RtlDeactivateActivationContext@8.c)
 *     _LdrpFindDllActivationContext@4 @ 0x4B2E4C0D (_LdrpFindDllActivationContext@4.c)
 *     _RtlQueueWorkItem@12 @ 0x4B2E8AE0 (_RtlQueueWorkItem@12.c)
 *     _RtlpTpWorkCallback@8 @ 0x4B2E9340 (_RtlpTpWorkCallback@8.c)
 *     _RtlpTpWorkUnposted@8 @ 0x4B2E9550 (_RtlpTpWorkUnposted@8.c)
 * Callees:
 *     _RtlpFreeActivationContext@4 @ 0x4B2A926F (_RtlpFreeActivationContext@4.c)
 *     _RtlCaptureStackBackTrace@16 @ 0x4B2DBFD0 (_RtlCaptureStackBackTrace@16.c)
 *     @RtlpMoveActCtxToFreeList@4 @ 0x4B33D930 (@RtlpMoveActCtxToFreeList@4.c)
 */

__int16 __stdcall RtlReleaseActivationContext(volatile signed __int32 *a1)
{
  int v1; // eax
  signed __int32 v2; // edx
  int v3; // edi

  if ( a1 )
  {
    v1 = ((unsigned int)a1 - 1) | 7;
    if ( v1 != -1 && *(int *)a1 > 0 && *a1 != 0x7FFFFFFF )
    {
      while ( 1 )
      {
        v2 = *a1;
        if ( *a1 == 0x7FFFFFFF )
          break;
        v3 = v2 - 1;
        v1 = _InterlockedCompareExchange(a1, v2 - 1, v2);
        if ( v1 == v2 )
          goto LABEL_8;
      }
      v3 = 0x7FFFFFFF;
LABEL_8:
      if ( g_SxsTrackReleaseStacks )
        LOWORD(v1) = RtlCaptureStackBackTrace(
                       1u,
                       4u,
                       (PVOID *)&a1[4 * (((unsigned __int8)_InterlockedExchangeAdd(a1 + 58, 1u) + 1) & 3) + 59],
                       0);
      if ( !v3 )
      {
        if ( g_SxsKeepActivationContextsAlive )
          LOWORD(v1) = RtlpMoveActCtxToFreeList(a1);
        else
          LOWORD(v1) = RtlpFreeActivationContext((int)a1);
      }
    }
  }
  return v1;
}
