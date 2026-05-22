/*
 * XREFs of ?ErrorStatuses@ValidateProperty@Holographic@Internal@Windows@@YAJPEBX_K@Z @ 0x18015C150
 * Callers:
 *     ?GetNodePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015D890 (-GetNodePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::ValidateProperty::ErrorStatuses(
        Windows::Internal::Holographic::ValidateProperty *this,
        const void *a2)
{
  __int64 v2; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int64)a2 < 4 )
  {
    v2 = 134LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\ValidateProperty.h",
      (const char *)0x8007000DLL);
    return 2147942413LL;
  }
  if ( a2 != (const void *)(unsigned int)(16 * *(_DWORD *)this + 4) )
  {
    v2 = 137LL;
    goto LABEL_3;
  }
  return 0LL;
}
