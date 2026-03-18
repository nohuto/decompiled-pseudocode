/*
 * XREFs of ?Msk@BLTRECORD@@QAEHHHHH@Z @ 0x1F47CB
 * Callers:
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z @ 0x798B2 (-bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z.c)
 */

int __thiscall BLTRECORD::Msk(BLTRECORD *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v6; // ebx
  int result; // eax
  int v8; // edi

  *((_DWORD *)this + 32) = 0;
  v6 = (_DWORD *)((char *)this + 124);
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 36) = a3;
  *((_DWORD *)this + 33) = a4;
  *((_DWORD *)this + 35) = a2;
  *((_DWORD *)this + 34) = a5;
  result = EXFORMOBJ::bXform((BLTRECORD *)((char *)this + 12), (struct _POINTL *)((char *)this + 124), 2u);
  if ( result )
  {
    v8 = *((_DWORD *)this + 33) + a2 - *v6;
    *((_DWORD *)this + 38) = a3 + *((_DWORD *)this + 34) - *((_DWORD *)this + 32);
    *((_DWORD *)this + 37) = v8;
    return 1;
  }
  return result;
}
