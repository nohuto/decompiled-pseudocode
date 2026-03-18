/*
 * XREFs of ?ResolveSourceReference@CExpression@@UEAAJIPEAPEAVCResource@@@Z @ 0x180066B50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpression::ResolveSourceReference(CExpression *this, unsigned int a2, struct CResource **a3)
{
  struct CResource *v3; // rcx
  unsigned int v4; // ebx

  if ( a2 < *((_DWORD *)this + 100) && *(_QWORD *)(*((_QWORD *)this + 49) + 8LL * a2) )
  {
    _mm_lfence();
    v3 = *(struct CResource **)(*(_QWORD *)(*((_QWORD *)this + 49) + 8LL * a2) + 16LL);
  }
  else
  {
    v3 = 0LL;
  }
  *a3 = v3;
  if ( v3 )
  {
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v3 + 8LL))(v3);
    return 0;
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0, &dword_180288F50, 2u, -2147467259, 0x14Cu, 0LL);
  }
  return v4;
}
