/*
 * XREFs of ?IsReadyToDraw@CDropShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800174C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006EC40 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z @ 0x18007B600 (-GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDropShadow::IsReadyToDraw(CDropShadow *this, struct CDrawingContext *a2, bool *a3)
{
  char v3; // di
  char v6; // bl
  __int64 v7; // rcx
  CVisual *CurrentVisual; // rax
  struct CBrush *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a3 = 0;
  v6 = 1;
  if ( COERCE_FLOAT(*((_DWORD *)this + 25) & _xmm) < 0.0000011920929 )
  {
    *a3 = 1;
    return 0;
  }
  else if ( *((_DWORD *)this + 33) == 1 )
  {
    if ( a2 )
    {
      v10 = 0LL;
      CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 24));
      CVisual::GetContentAsBrushNoRef(CurrentVisual, &v10);
      if ( !v10
        || !(*(unsigned __int8 (__fastcall **)(struct CBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v10 + 288LL))(
              v10,
              a2,
              a3) )
      {
        return 0;
      }
    }
    return v6;
  }
  else
  {
    v7 = *((_QWORD *)this + 18);
    if ( !v7 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 288LL))(v7) )
      return 1;
    return v3;
  }
}
