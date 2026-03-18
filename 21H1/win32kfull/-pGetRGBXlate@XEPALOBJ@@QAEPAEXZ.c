/*
 * XREFs of ?pGetRGBXlate@XEPALOBJ@@QAEPAEXZ @ 0x222F44
 * Callers:
 *     _XLATEOBJ_iXlate@8 @ 0xC5A04 (_XLATEOBJ_iXlate@8.c)
 *     ?XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z @ 0x225AD1 (-XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z.c)
 * Callees:
 *     ?bGenColorXlate555@XEPALOBJ@@QAEHXZ @ 0x222EB1 (-bGenColorXlate555@XEPALOBJ@@QAEHXZ.c)
 */

unsigned __int8 *__usercall XEPALOBJ::pGetRGBXlate@<eax>(XEPALOBJ *this@<ecx>, unsigned int *a2@<ebx>)
{
  unsigned __int8 *result; // eax
  _DWORD *v4; // edx
  _DWORD *v5; // ecx
  int v6; // ecx

  result = 0;
  v4 = *(_DWORD **)this;
  if ( *(_DWORD *)this )
  {
    result = (unsigned __int8 *)v4[18];
    if ( !result || ((v5 = (_DWORD *)v4[20], v5 == v4) ? (v6 = v4[6]) : (v6 = v5[6]), v4[7] != v6) )
    {
      if ( XEPALOBJ::bGenColorXlate555(this, a2) )
        return *(unsigned __int8 **)(*(_DWORD *)this + 72);
      else
        return 0;
    }
  }
  return result;
}
