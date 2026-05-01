/*
 * XREFs of ?v_GetAdditionalDataSizeMax@CImmersiveWindowFactoryBase@@EEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x180078BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LIACoreNavigationClient@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180078C48 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LIACoreNavigationClient@@@details@wil@@QE.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::v_GetAdditionalDataSizeMax(
        CImmersiveWindowFactoryBase *this,
        const struct _GUID *a2,
        void *a3,
        __int64 a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int v7; // esi
  __int64 v8; // rdx
  unsigned int v9; // edi
  signed int v10; // ebx
  unsigned int v11; // ecx

  *a7 = 0;
  v7 = -1;
  v8 = *((_BYTE *)this + 136) != 0 ? 27 : 23;
  v9 = *((_BYTE *)this + 136) != 0 ? 28 : 24;
  if ( v9 < (unsigned int)v8 )
  {
    v9 = -1;
    v10 = -2147024362;
  }
  else
  {
    v10 = 0;
    if ( *((_BYTE *)this + 144) )
      v9 = *((_BYTE *)this + 136) != 0 ? 32 : 28;
  }
  LOBYTE(v8) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LIACoreNavigationClient>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_LIACoreNavigationClient>::GetImpl'::`2'::impl,
    v8);
  if ( v10 >= 0 )
  {
    v11 = v9 + 4;
    if ( v9 + 4 >= v9 )
      v7 = v9 + 4;
    v10 = v11 < v9 ? 0x80070216 : 0;
    if ( v11 >= v9 )
      *a7 = v7;
  }
  return (unsigned int)v10;
}
