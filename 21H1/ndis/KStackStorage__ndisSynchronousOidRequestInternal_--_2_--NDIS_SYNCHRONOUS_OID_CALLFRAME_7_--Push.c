/*
 * XREFs of KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Push @ 0x1C00AF958
 * Callers:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00AFCD8 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 * Callees:
 *     memset @ 0x1C003F6C0 (memset.c)
 */

__int64 __fastcall KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Push(
        __int64 a1)
{
  unsigned __int64 v1; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rdi

  v1 = *(_QWORD *)(a1 + 128);
  if ( v1 >= 7 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x4253444Eu);
    v1 = 0LL;
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag + 1, 0, 0x70uLL);
      *v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
    if ( !v4 )
      return 0LL;
    *v4 = *(_QWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 120) = v4;
  }
  *(_QWORD *)(a1 + 128) = v1 + 1;
  return 16 * v1 + *(_QWORD *)(a1 + 120) + 8LL;
}
