/*
 * XREFs of ?v_MarshalAdditionalData@CImmersiveWindowFactoryBase@@EEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18007B7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LIACoreNavigationClient@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007BD88 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LIACoreNavigationClient@@@details@wil@@QE.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::v_MarshalAdditionalData(
        CImmersiveWindowFactoryBase *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void *a4)
{
  HRESULT v6; // ebx
  __int64 v7; // rdx
  char pv; // [rsp+30h] [rbp+8h] BYREF

  v6 = IStream_Write(a2, (char *)this + 108, 0x10u);
  if ( v6 >= 0 )
  {
    v6 = IStream_Write(a2, (char *)this + 124, 4u);
    if ( v6 >= 0 )
    {
      v6 = IStream_Write(a2, (char *)this + 97, 1u);
      if ( v6 >= 0 )
      {
        pv = 0;
        v6 = IStream_Write(a2, &pv, 1u);
        if ( v6 >= 0 )
        {
          v6 = IStream_Write(a2, (char *)this + 136, 1u);
          if ( v6 >= 0 )
          {
            if ( *((_BYTE *)this + 136) )
              v6 = IStream_Write(a2, (char *)this + 140, 4u);
            if ( v6 >= 0 )
            {
              v6 = IStream_Write(a2, (char *)this + 144, 1u);
              if ( v6 >= 0 )
              {
                if ( *((_BYTE *)this + 144) )
                  v6 = IStream_Write(a2, (char *)this + 148, 4u);
              }
            }
          }
        }
        LOBYTE(v7) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_LIACoreNavigationClient>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_LIACoreNavigationClient>::GetImpl'::`2'::impl,
          v7);
        if ( v6 >= 0 )
          return (unsigned int)IStream_Write(a2, (char *)this + 104, 4u);
      }
    }
  }
  return (unsigned int)v6;
}
