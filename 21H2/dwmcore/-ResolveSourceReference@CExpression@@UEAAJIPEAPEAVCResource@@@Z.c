/*
 * XREFs of ?ResolveSourceReference@CExpression@@UEAAJIPEAPEAVCResource@@@Z @ 0x180074330
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpression::ResolveSourceReference(CExpression *this, unsigned int a2, struct CResource **a3)
{
  unsigned int v3; // ebx

  if ( a2 >= *((_DWORD *)this + 106) || !*(_QWORD *)(*((_QWORD *)this + 52) + 8LL * a2) )
  {
    *a3 = 0LL;
    goto LABEL_7;
  }
  _mm_lfence();
  this = *(CExpression **)(*(_QWORD *)(*((_QWORD *)this + 52) + 8LL * a2) + 16LL);
  *a3 = this;
  if ( !this )
  {
LABEL_7:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_18032C888, 2LL, -2147467259, 0x14Du);
    return v3;
  }
  (*(void (__fastcall **)(CExpression *))(*(_QWORD *)this + 8LL))(this);
  return 0;
}
