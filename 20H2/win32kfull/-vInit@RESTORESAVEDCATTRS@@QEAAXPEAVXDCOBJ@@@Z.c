/*
 * XREFs of ?vInit@RESTORESAVEDCATTRS@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C012D544
 * Callers:
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C015D634 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 * Callees:
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0141F4C (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall RESTORESAVEDCATTRS::vInit(RESTORESAVEDCATTRS *this, struct XDCOBJ *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 44LL) & 2) != 0 )
    {
      XDCOBJ::RestoreAttributesHelper(a2);
      *(_DWORD *)(*(_QWORD *)a2 + 44LL) &= ~2u;
    }
  }
}
