/*
 * XREFs of ?CleanResourceConsumptionMap@CConstraintModel@@AEAAXPEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@@Z @ 0x180139B80
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x180066F30 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x1801398F8 (--1CConstraintModel@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x1800F583C (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18013A5BC (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmR.c)
 */

__int64 __fastcall CConstraintModel::CleanResourceConsumptionMap(__int64 a1, __int64 a2)
{
  __int64 StartPosition; // rbx
  void *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rdx

  StartPosition = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::GetStartPosition(a2);
  if ( StartPosition )
  {
    do
    {
      v4 = *(void **)(StartPosition + 8);
      if ( *(_QWORD *)StartPosition )
        (***(void (__fastcall ****)(_QWORD, __int64))StartPosition)(*(_QWORD *)StartPosition, 1LL);
      if ( v4 )
      {
        ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll((__int64)v4);
        operator delete(v4, (const struct std::nothrow_t *)0x30);
      }
      v5 = *(_QWORD *)(StartPosition + 16);
      if ( !v5 )
      {
        v6 = (unsigned int)(*(_DWORD *)(StartPosition + 24) % *(_DWORD *)(a2 + 16) + 1);
        do
        {
          if ( (unsigned int)v6 >= *(_DWORD *)(a2 + 16) )
            break;
          if ( *(_QWORD *)(*(_QWORD *)a2 + 8 * v6) )
            v5 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v6);
          v6 = (unsigned int)(v6 + 1);
        }
        while ( !v5 );
      }
      StartPosition = v5;
    }
    while ( v5 );
  }
  return ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::RemoveAll(a2);
}
