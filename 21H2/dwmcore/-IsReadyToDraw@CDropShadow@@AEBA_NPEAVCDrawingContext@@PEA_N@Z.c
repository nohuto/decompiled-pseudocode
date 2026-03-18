/*
 * XREFs of ?IsReadyToDraw@CDropShadow@@AEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18000F9F4
 * Callers:
 *     ?IsEmptyDrawing@CDropShadow@@UEBA_NXZ @ 0x18000EF20 (-IsEmptyDrawing@CDropShadow@@UEBA_NXZ.c)
 *     ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000F55C (-Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z @ 0x1800B5B8C (-GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CDropShadow::IsReadyToDraw(CDropShadow *this, struct CDrawingContext *a2, bool *a3)
{
  char v3; // di
  char v6; // bl
  __int64 v7; // rcx
  CVisual *v9; // rax
  struct CBrush *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a3 = 0;
  v6 = 1;
  if ( COERCE_FLOAT(*((_DWORD *)this + 23) & _xmm) < 0.0000011920929 )
  {
    *a3 = 1;
    return 0;
  }
  else if ( *((_DWORD *)this + 31) == 1 )
  {
    if ( a2 )
    {
      v10 = 0LL;
      v9 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24);
      CVisual::GetContentAsBrushNoRef(v9, &v10);
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
    v7 = *((_QWORD *)this + 17);
    if ( !v7 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 288LL))(v7) )
      return 1;
    return v3;
  }
}
