/*
 * XREFs of ??1?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$shared_ptr@VDuckingDescriptor@@@std@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$shared_ptr@VDuckingDescriptor@@@std@@@2@@ATL@@QEAA@XZ @ 0x18002B1EC
 * Callers:
 *     ??1TSSession@@QEAA@XZ @ 0x180025BB0 (--1TSSession@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>>>(
        __int64 a1)
{
  void *v2; // rcx
  int v3; // esi
  __int64 v4; // rbp
  __int64 v5; // r14
  volatile signed __int32 *v6; // rdx
  volatile signed __int32 *v7; // rdi
  void *v8; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = 0;
    if ( *(int *)(a1 + 16) > 0 )
    {
      v4 = 0LL;
      v5 = 0LL;
      do
      {
        v6 = (volatile signed __int32 *)(*(_QWORD *)(v5 + *(_QWORD *)a1) - 24LL);
        if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6);
        v7 = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 8) + v4 + 8);
        if ( v7 )
        {
          if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
            if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
          }
        }
        ++v3;
        v5 += 8LL;
        v4 += 16LL;
      }
      while ( v3 < *(_DWORD *)(a1 + 16) );
      v2 = *(void **)a1;
    }
    free(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v8 = *(void **)(a1 + 8);
  if ( v8 )
  {
    free(v8);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 0;
}
