/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18023F238
 * Callers:
 *     ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDevice@@_K0@Z @ 0x18023F3B0 (-reserve_region@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DD.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180099B10 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$destruct_range@VCUnpinResource@CD3DDevice@@@detail@@YAXPEAVCUnpinResource@CD3DDevice@@0@Z @ 0x18023B6CC (--$destruct_range@VCUnpinResource@CD3DDevice@@@detail@@YAXPEAVCUnpinResource@CD3DDevice@@0@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@0@0V12@@Z @ 0x18023B98C (--$uninitialized_copy@V-$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V-$checked_array_ite.c)
 */

void __fastcall detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdi
  LPVOID v8; // rax
  __int64 *v9; // r8
  __int64 *v10; // rdx
  LPVOID v11; // rbx
  __int64 *v12; // rcx
  bool v13; // zf
  __int64 v14; // rsi
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  if ( (v3 - v4) >> 4 < a2 )
  {
    v5 = (v4 - *(_QWORD *)a1) >> 4;
    v6 = v5 + a2;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - *(_QWORD *)a1) >> 4),
           (v3 - *(_QWORD *)a1) >> 4,
           v6);
    v8 = operator new(saturated_mul(v7, 0x10uLL));
    v9 = *(__int64 **)(a1 + 8);
    v10 = *(__int64 **)a1;
    *(_QWORD *)&v15 = v8;
    *((_QWORD *)&v15 + 1) = v5;
    v11 = v8;
    v16 = 0LL;
    v17 = v15;
    v18 = 0LL;
    std::uninitialized_copy<std::move_iterator<CD3DDevice::CUnpinResource *>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>(
      (__int64)&v15,
      v10,
      v9,
      &v17);
    detail::destruct_range<CD3DDevice::CUnpinResource>(*(__int64 **)a1, *(__int64 **)(a1 + 8));
    v12 = *(__int64 **)a1;
    v13 = *(_QWORD *)a1 == a1 + 24;
    *(_QWORD *)a1 = v11;
    if ( v13 )
      v12 = 0LL;
    operator delete(v12);
    v14 = *(_QWORD *)a1 + 16 * v5;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a1 + 16 * v7;
    *(_QWORD *)(a1 + 8) = v14;
  }
}
