/*
 * XREFs of _InvalidateGDIWindows@4 @ 0x1541C8
 * Callers:
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 *     _InvalidateGDIWindows@4 @ 0x1541C8 (_InvalidateGDIWindows@4.c)
 * Callees:
 *     _CalcVisRgn@16 @ 0x36880 (_CalcVisRgn@16.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _InvalidateGDIWindows@4 @ 0x1541C8 (_InvalidateGDIWindows@4.c)
 *     _GreSetClientRgn@12 @ 0x1E7093 (_GreSetClientRgn@12.c)
 */

void __thiscall InvalidateGDIWindows(_DWORD *this)
{
  int Prop; // eax
  int v3; // ecx
  int i; // esi
  int v5; // [esp+Ch] [ebp-4h] BYREF

  if ( this )
  {
    Prop = _GetProp((int)this, (unsigned __int16)atomWndObj, 1);
    if ( Prop )
    {
      v5 = 0;
      if ( (*(_BYTE *)(Prop + 140) & 0x20) != 0 )
        v3 = (4 * (*(_BYTE *)(this[5] + 23) & 4)) | 1;
      else
        v3 = 24;
      CalcVisRgn((int)&v5, this, (int)this, (struct tagWND *)v3);
      GreSetClientRgn(this[5] + 68);
    }
    for ( i = this[15]; i; i = *(_DWORD *)(i + 48) )
      InvalidateGDIWindows(i);
  }
}
