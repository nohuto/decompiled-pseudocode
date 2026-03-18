/*
 * XREFs of ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x1800A08A4
 * Callers:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800A0A50 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x18009DFA0 (-GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 *     ?GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z @ 0x1800A09EC (-GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x1800A2A54 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::UpdateBackdropBlurFlag(CVisual **this)
{
  char v2; // bp
  char v3; // si
  char v4; // di
  CBrush *v5; // rdi
  __int64 v6; // rdx
  struct CBrushRenderingGraph *BrushGraph; // rax
  char v8; // dl
  int v9; // r9d
  CVisual *v10; // rcx
  char v11; // dl
  CVisual *v12; // rcx
  CBrush *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  if ( CVisual::GetContentAsBrushNoRef((CVisual *)this, &v13) )
  {
    v5 = v13;
    if ( (*(unsigned __int8 (__fastcall **)(CBrush *, __int64))(*(_QWORD *)v13 + 56LL))(v13, 202LL) )
    {
      v3 = 1;
      v4 = 0;
    }
    else
    {
      BrushGraph = CBrush::GetBrushGraph(v5, v6);
      v4 = 0;
      if ( BrushGraph )
      {
        v2 = *((_BYTE *)BrushGraph + 196);
        v3 = *((_BYTE *)BrushGraph + 198);
        v4 = *((_BYTE *)BrushGraph + 197);
      }
    }
  }
  if ( v4 != ((*((_BYTE *)this + 94) & 8) != 0) )
    *((_BYTE *)this + 94) ^= (*((_BYTE *)this + 94) ^ (8 * v4)) & 8;
  v8 = *((_BYTE *)this + 264);
  v9 = -1;
  if ( v2 != (v8 & 1) )
  {
    v12 = this[10];
    if ( v2 )
    {
      if ( v12 )
      {
        CVisual::PropagateBackdropUpdates(v12, 1, 0);
        v8 = *((_BYTE *)this + 264);
      }
      v8 |= 1u;
    }
    else
    {
      if ( v12 )
      {
        CVisual::PropagateBackdropUpdates(v12, -1, 0);
        v8 = *((_BYTE *)this + 264);
      }
      v8 &= ~1u;
    }
    *((_BYTE *)this + 264) = v8;
  }
  if ( v3 != ((v8 & 2) != 0) )
  {
    v10 = this[10];
    if ( v3 )
    {
      if ( v10 )
      {
        CVisual::PropagateBackdropUpdates(v10, 0, 1);
        v8 = *((_BYTE *)this + 264);
      }
      v11 = v8 | 2;
    }
    else
    {
      if ( v10 )
      {
        CVisual::PropagateBackdropUpdates(v10, 0, v9);
        v8 = *((_BYTE *)this + 264);
      }
      v11 = v8 & 0xFD;
    }
    *((_BYTE *)this + 264) = v11;
  }
}
