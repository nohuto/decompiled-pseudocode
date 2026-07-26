/*
 * XREFs of KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Pop @ 0x1C00AFF0C
 * Callers:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00B0308 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Pop(
        __int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = *(_QWORD *)(a1 + 128);
  if ( !v2 )
  {
    v3 = *(_QWORD **)(a1 + 120);
    if ( !*v3 )
      return 0LL;
    *(_QWORD *)(a1 + 120) = *v3;
    v2 = 7LL;
    *(_QWORD *)(a1 + 128) = 7LL;
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x4253444Eu);
      v2 = *(_QWORD *)(a1 + 128);
    }
  }
  v5 = *(_QWORD *)(a1 + 120);
  v6 = v2 - 1;
  *(_QWORD *)(a1 + 128) = v6;
  return 16 * v6 + v5 + 8;
}
