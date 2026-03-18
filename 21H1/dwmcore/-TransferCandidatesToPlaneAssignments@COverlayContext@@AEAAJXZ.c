/*
 * XREFs of ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1800D30C4
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18003BAB0 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18006B98C (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x1800BE254 (-swap@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverl.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359196@@@details@wil@@QEAA_NXZ @ 0x1800E5E44 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359196@@@detail.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?RectContainedInDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180181118 (-RectContainedInDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?erase@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x180181800 (-erase@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 */

__int64 __fastcall COverlayContext::TransferCandidatesToPlaneAssignments(COverlayContext *this)
{
  char *v1; // r12
  int v3; // edi
  __int64 *v4; // r15
  __int64 v5; // rbp
  __int64 v6; // rbx
  bool v7; // cf
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, _QWORD); // rdi
  _QWORD *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int i; // ebx
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rcx
  _BYTE v21[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v22; // [rsp+80h] [rbp+8h] BYREF
  char v23; // [rsp+88h] [rbp+10h] BYREF

  v1 = (char *)this + 7312;
  v3 = 0;
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 914);
  v4 = (__int64 *)((char *)this + 96);
  v5 = *((_QWORD *)this + 13);
  v6 = *((_QWORD *)this + 12);
  if ( (v5 - v6) / 224 )
  {
    while ( v6 != v5 )
    {
      if ( !*(_BYTE *)(v6 + 216) )
      {
        v7 = CCommonRegistryData::m_dwOverlayTestMode < 3;
        *(_BYTE *)(v6 + 221) = 1;
        if ( v7 )
        {
          v8 = *(_QWORD *)(v6 + 16);
          v9 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 160LL);
          v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)this + 80LL))(*(_QWORD *)this, v21);
          v11 = v9(v8, *v10);
          v3 = v11;
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xDCDu, 0LL);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 16) + 280LL))(*(_QWORD *)(v6 + 16));
          LOBYTE(v13) = 1;
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v6 + 16) + 304LL))(
            *(_QWORD *)(v6 + 16),
            2LL,
            v13);
          if ( v3 == -2005532292 )
          {
            v15 = *v4;
            v3 = 0;
            for ( i = 0; i < (unsigned int)((*((_QWORD *)this + 13) - *((_QWORD *)this + 12)) / 224LL); v15 = *v4 )
            {
              v17 = 224LL * i;
              if ( *(_BYTE *)(v17 + v15 + 221) )
              {
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v17 + v15 + 16) + 176LL))(*(_QWORD *)(v17 + v15 + 16)) )
                  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v17 + *v4 + 16) + 168LL))(
                    *(_QWORD *)(v17 + *v4 + 16),
                    0LL);
                v22 = v17 + *v4;
                detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
                  (char *)this + 96,
                  &v23,
                  &v22);
              }
              else
              {
                ++i;
              }
            }
            break;
          }
          if ( v3 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v3, 0xDDFu, 0LL);
            goto LABEL_31;
          }
        }
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2103c_31359196>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2103c_31359196>::GetImpl'::`2'::impl)
          || !*((_BYTE *)this + 11431) && !(unsigned __int8)COverlayContext::RectContainedInDirty(this, v6 + 144) )
        {
          *((_BYTE *)this + 11431) = 1;
        }
        *(_WORD *)(v6 + 216) = 257;
      }
      v6 += 224LL;
    }
    v18 = *((_QWORD *)this + 13);
    v19 = *v4;
    if ( (v18 - *((_QWORD *)this + 12)) / 224 )
    {
      while ( v19 != v18 )
      {
        *(_BYTE *)(v19 + 221) = 0;
        v19 += 224LL;
      }
      detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
        (__int64)v1,
        (__int64)this + 96);
    }
    else
    {
      *((_DWORD *)this + 3) = *((_DWORD *)this + 2);
      *((_BYTE *)this + 11430) = 1;
    }
    if ( *((_BYTE *)this + 11032) && !*((_BYTE *)this + 11416) )
      *((_BYTE *)this + 11431) = 1;
  }
LABEL_31:
  *((_DWORD *)this + 2760) = 0;
  return (unsigned int)v3;
}
