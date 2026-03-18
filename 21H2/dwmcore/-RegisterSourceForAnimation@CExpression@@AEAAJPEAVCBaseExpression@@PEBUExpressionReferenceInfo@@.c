/*
 * XREFs of ?RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@@Z @ 0x180046C70
 * Callers:
 *     ?RegisterSourcesForOwner@CExpression@@UEAAJXZ @ 0x180046BF0 (-RegisterSourcesForOwner@CExpression@@UEAAJXZ.c)
 * Callees:
 *     ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x180046D0C (-AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
  unsigned int v9; // ecx

  if ( *((_DWORD *)a3 + 5) >= *((_DWORD *)this + 106) )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x192u, 0LL);
    return v5;
  }
  v6 = *(_QWORD *)(*((_QWORD *)this + 52) + 8LL * *((unsigned int *)a3 + 5));
  if ( v6 )
  {
    v7 = *(CResource **)(v6 + 16);
    if ( v7 )
    {
      v8 = CResource::AddSourceAnimation(v7, a2, *(_DWORD *)a3);
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x19Bu, 0LL);
        return v5;
      }
      *((_BYTE *)this + 456) |= 2u;
    }
  }
  return 0;
}
