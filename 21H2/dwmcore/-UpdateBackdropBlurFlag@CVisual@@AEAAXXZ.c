/*
 * XREFs of ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18009D7BC
 * Callers:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18009D960 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z @ 0x18009D904 (-GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x18009F824 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x1800C1728 (-GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::UpdateBackdropBlurFlag(CVisual **this)
{
  char v2; // bp
  char v3; // si
  char v4; // di
  CBrush *v5; // rdi
  struct CBrushRenderingGraph *BrushGraph; // rax
  char v7; // dl
  int v8; // r9d
  CVisual *v9; // rcx
  char v10; // dl
  CVisual *v11; // rcx
  CBrush *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  if ( CVisual::GetContentAsBrushNoRef((CVisual *)this, &v12) )
  {
    v5 = v12;
    if ( (*(unsigned __int8 (__fastcall **)(CBrush *, __int64))(*(_QWORD *)v12 + 56LL))(v12, 202LL) )
    {
      v3 = 1;
      v4 = 0;
    }
    else
    {
      BrushGraph = CBrush::GetBrushGraph(v5);
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
  v7 = *((_BYTE *)this + 264);
  v8 = -1;
  if ( v2 != (v7 & 1) )
  {
    v11 = this[10];
    if ( v2 )
    {
      if ( v11 )
      {
        CVisual::PropagateBackdropUpdates(v11, 1, 0);
        v7 = *((_BYTE *)this + 264);
      }
      v7 |= 1u;
    }
    else
    {
      if ( v11 )
      {
        CVisual::PropagateBackdropUpdates(v11, -1, 0);
        v7 = *((_BYTE *)this + 264);
      }
      v7 &= ~1u;
    }
    *((_BYTE *)this + 264) = v7;
  }
  if ( v3 != ((v7 & 2) != 0) )
  {
    v9 = this[10];
    if ( v3 )
    {
      if ( v9 )
      {
        CVisual::PropagateBackdropUpdates(v9, 0, 1);
        v7 = *((_BYTE *)this + 264);
      }
      v10 = v7 | 2;
    }
    else
    {
      if ( v9 )
      {
        CVisual::PropagateBackdropUpdates(v9, 0, v8);
        v7 = *((_BYTE *)this + 264);
      }
      v10 = v7 & 0xFD;
    }
    *((_BYTE *)this + 264) = v10;
  }
}
