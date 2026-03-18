/*
 * XREFs of ?RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@@Z @ 0x180070740
 * Callers:
 *     ?RegisterSourcesForOwner@CExpression@@UEAAJXZ @ 0x1800706C0 (-RegisterSourcesForOwner@CExpression@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x1800707DC (-AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z.c)
 */

__int64 __fastcall CExpression::RegisterSourceForAnimation(
        CExpression *this,
        struct CBaseExpression *a2,
        const struct ExpressionReferenceInfo *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  CResource *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  if ( *((_DWORD *)a3 + 5) >= *((_DWORD *)this + 100) )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x191u, 0LL);
    return v5;
  }
  v6 = *(_QWORD *)(*((_QWORD *)this + 49) + 8LL * *((unsigned int *)a3 + 5));
  if ( v6 )
  {
    v7 = *(CResource **)(v6 + 16);
    if ( v7 )
    {
      v8 = CResource::AddSourceAnimation(v7, a2, *(_DWORD *)a3);
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x19Au, 0LL);
        return v5;
      }
      *((_BYTE *)this + 432) |= 2u;
    }
  }
  return 0;
}
