/*
 * XREFs of ?CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@@Z @ 0x180139C2C
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x180066F30 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x1801398F8 (--1CConstraintModel@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CConstraintModel::CleanResourceExclusiveEndpoint(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  __int64 v4; // rcx
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 v7; // r8

  v2 = 0;
  if ( a2[1] )
  {
    v4 = 0LL;
    do
    {
      _mm_lfence();
      v5 = 0;
      v6 = *(_QWORD *)(*a2 + 8 * v4);
      if ( *(_QWORD *)(v6 + 8) )
      {
        v7 = 0LL;
        do
        {
          operator delete(*(void **)(*(_QWORD *)v6 + 8 * v7), (const struct std::nothrow_t *)0x3A8);
          v7 = ++v5;
        }
        while ( (unsigned __int64)v5 < *(_QWORD *)(v6 + 8) );
      }
      if ( *(_QWORD *)v6 )
        free(*(void **)v6);
      operator delete((void *)v6, (const struct std::nothrow_t *)0x20);
      v4 = ++v2;
    }
    while ( (unsigned __int64)v2 < a2[1] );
  }
  return ATL::CAtlArray<ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>> *,ATL::CElementTraits<ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>> *>>::SetCount(
           a2,
           0LL);
}
