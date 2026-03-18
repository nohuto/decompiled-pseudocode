/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C014FE70
 * Callers:
 *     GreCreateDIBBrush @ 0x1C014FC98 (GreCreateDIBBrush.c)
 *     ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1C02B7710 (-hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(BRUSHMEMOBJ *this)
{
  _QWORD *v2; // rcx

  v2 = *(_QWORD **)this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT(v2);
    if ( !*((_DWORD *)this + 4) )
      bDeleteBrush(**(_QWORD **)this, 0LL);
    *(_QWORD *)this = 0LL;
  }
}
