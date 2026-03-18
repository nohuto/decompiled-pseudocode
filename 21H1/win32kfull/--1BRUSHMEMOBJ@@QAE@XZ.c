/*
 * XREFs of ??1BRUSHMEMOBJ@@QAE@XZ @ 0x21DDC9
 * Callers:
 *     ?hCreateHatchBrushInternal@@YGPAUHBRUSH__@@KKH@Z @ 0x21DDF2 (-hCreateHatchBrushInternal@@YGPAUHBRUSH__@@KKH@Z.c)
 *     _GreCreateDIBBrush@24 @ 0x21DE30 (_GreCreateDIBBrush@24.c)
 * Callees:
 *     <none>
 */

void __thiscall BRUSHMEMOBJ::~BRUSHMEMOBJ(BRUSHMEMOBJ *this)
{
  if ( *(_DWORD *)this )
  {
    DEC_SHARE_REF_CNT(*(_DWORD *)this);
    if ( !*((_DWORD *)this + 2) )
      bDeleteBrush(**(_DWORD **)this, 0);
    *(_DWORD *)this = 0;
  }
}
