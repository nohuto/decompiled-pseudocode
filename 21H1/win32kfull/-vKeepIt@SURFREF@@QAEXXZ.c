/*
 * XREFs of ?vKeepIt@SURFREF@@QAEXXZ @ 0x1D11C7
 * Callers:
 *     _GreReferenceObject@4 @ 0x20BD0 (_GreReferenceObject@4.c)
 * Callees:
 *     <none>
 */

void __thiscall SURFREF::vKeepIt(SURFREF *this)
{
  INC_SHARE_REF_CNT(*(_DWORD *)this);
}
